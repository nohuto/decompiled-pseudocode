/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C01ED470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  PVOID v8; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *i; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // eax
  _QWORD *v23; // r9
  struct _ERESOURCE *v24; // rax
  PVOID Object[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+60h] [rbp-38h]
  unsigned __int64 v27; // [rsp+68h] [rbp-30h]

  v5 = 0;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, Object, 0LL);
  v8 = Object[0];
  Object[1] = Object[0];
  if ( v6 < 0 )
  {
    UserSetLastError(87LL, v7);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object[0]);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v8) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v8 )
        break;
    }
    LOBYTE(v11) = -1;
    if ( !HMValidateHandle(a1, v11, v12, v13) )
      goto LABEL_10;
    v26 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v26 + 25) |= 0x20u;
    v16 = i[7];
    if ( a3 )
    {
      v17 = *((_DWORD *)i + 12);
      v18 = *((unsigned int *)i + 13);
      if ( v17 != (_DWORD)v18 )
        goto LABEL_24;
      if ( v17 )
      {
        v20 = 8 * v18;
        v27 = v20;
        v21 = 0xFFFFFFFFLL;
        if ( v20 > 0xFFFFFFFF )
          goto LABEL_21;
        v22 = v20 + 64;
        if ( (int)v20 + 64 >= (unsigned int)v20 )
          v21 = v22;
        if ( v22 < (unsigned int)v20 )
          goto LABEL_21;
        v19 = UserReAllocPool(v16, (unsigned int)v20, v21, 1751610197LL);
      }
      else
      {
        v19 = Win32AllocPool(64LL, 1751610197LL);
      }
      v16 = v19;
      if ( !v19 )
      {
LABEL_21:
        UserSetLastError(8LL, v20);
        goto LABEL_36;
      }
      i[7] = v19;
      *((_DWORD *)i + 13) += 8;
LABEL_24:
      while ( 1 )
      {
        v15 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v15 )
          break;
        if ( *(_QWORD *)(v16 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v15 )
            goto LABEL_35;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v16 + 8 * v15) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v15 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v15 )
          break;
        v23 = (_QWORD *)(v16 + 8LL * v5);
        if ( *v23 == a1 )
        {
          memmove((void *)(v16 + 8LL * v5), v23 + 1, 8LL * ((unsigned int)v15 - v5 - 1));
          --*((_DWORD *)i + 12);
          break;
        }
        ++v5;
      }
      if ( v5 >= *((_DWORD *)i + 12) )
        UserSetLastError(6LL, v15);
    }
LABEL_35:
    v5 = 1;
    goto LABEL_36;
  }
LABEL_10:
  UserSetLastError(87LL, v11);
LABEL_36:
  UserSessionSwitchLeaveCrit(v16, v15);
  v24 = (struct _ERESOURCE *)PsGetJobLock(v8);
  ExReleaseResourceAndLeaveCriticalRegion(v24);
  ObfDereferenceObject(v8);
  return (int)v5;
}
