/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C01E1300
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 *i; // rdi
  __int64 v11; // r8
  _QWORD *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // r9d
  __int64 v18; // rax
  struct _ERESOURCE *v19; // rax
  PVOID Object[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h]
  __int64 v22; // [rsp+70h] [rbp-28h]

  v5 = 0;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, Object, 0LL);
  v7 = Object[0];
  Object[1] = Object[0];
  if ( v6 < 0 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object[0]);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v7) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v7 )
        break;
    }
    if ( !HMValidateHandle(a1, 255) )
      goto LABEL_10;
    v21 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v21 + 25) |= 0x20u;
    v14 = i[7];
    if ( a3 )
    {
      v15 = *((_DWORD *)i + 12);
      v13 = *((unsigned int *)i + 13);
      if ( v15 == (_DWORD)v13 )
      {
        if ( v15 )
        {
          v17 = 8 * v13;
          v22 = 8 * v13;
          if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v17 + 64 < v17 )
            goto LABEL_19;
          v16 = UserReAllocPool(v14, v17, v17 + 64, 1751610197LL);
        }
        else
        {
          v16 = Win32AllocPool(64LL, 1751610197LL);
        }
        v14 = v16;
        if ( !v16 )
        {
LABEL_19:
          UserSetLastError(8LL);
          goto LABEL_34;
        }
        i[7] = v16;
        *((_DWORD *)i + 13) += 8;
      }
      while ( v5 < *((_DWORD *)i + 12) && *(_QWORD *)(v14 + 8LL * v5) != a1 )
        ++v5;
      v18 = *((unsigned int *)i + 12);
      if ( v5 >= (unsigned int)v18 )
      {
        *(_QWORD *)(v14 + 8 * v18) = a1;
        ++*((_DWORD *)i + 12);
      }
    }
    else
    {
      while ( 1 )
      {
        v13 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v13 )
          break;
        v12 = (_QWORD *)(v14 + 8LL * v5);
        if ( *v12 == a1 )
        {
          memmove((void *)(v14 + 8LL * v5), v12 + 1, 8LL * ((unsigned int)v13 - v5 - 1));
          v13 = 0xFFFFFFFFLL;
          --*((_DWORD *)i + 12);
          break;
        }
        ++v5;
      }
      if ( v5 >= *((_DWORD *)i + 12) )
        UserSetLastError(6LL);
    }
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87LL);
LABEL_34:
  UserSessionSwitchLeaveCrit(v14, v13, v11, v12);
  v19 = (struct _ERESOURCE *)PsGetJobLock(v7);
  ExReleaseResourceAndLeaveCriticalRegion(v19);
  ObfDereferenceObject(v7);
  return (int)v5;
}
