/*
 * XREFs of DxgkExtractBundleObject @ 0x1C01AF620
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkExtractBundleObject(_OWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  ULONG64 v5; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v7; // rax
  HANDLE v8; // rbx
  unsigned int v10; // r14d
  __int64 v11; // r12
  size_t v12; // r8
  const void *v13; // rdx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // rsi
  __int64 v22; // rax
  char *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // r14
  NTSTATUS inserted; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  void *v33; // rcx
  char *v34; // r9
  __int64 i; // r14
  HANDLE v36; // rcx
  PVOID NewObject[2]; // [rsp+30h] [rbp-88h] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-78h]
  void *Src[2]; // [rsp+50h] [rbp-68h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-58h] BYREF
  ACCESS_MASK DesiredAccess[2]; // [rsp+68h] [rbp-50h] BYREF
  int v42; // [rsp+70h] [rbp-48h]
  HANDLE v43[3]; // [rsp+78h] [rbp-40h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 1555LL;
    WdLogEvent5_WdAssertion(v4);
  }
  Current = DXGPROCESS::GetCurrent(v3, v2);
  NewObject[1] = Current;
  if ( !Current )
    goto LABEL_4;
  v5 = MmUserProbeAddress;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)Src = a1[1];
  v10 = (unsigned int)Handle[1];
  if ( (unsigned int)(LODWORD(Handle[1]) - 1) > 2 )
  {
LABEL_4:
    v7 = WdLogNewEntry5_WdError(v5);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v8;
  }
  *(_QWORD *)DesiredAccess = 0LL;
  v42 = 0;
  v11 = LODWORD(Handle[1]);
  v12 = 4LL * LODWORD(Handle[1]);
  v13 = Src[0];
  if ( (char *)Src[0] + v12 < Src[0] || (char *)Src[0] + v12 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(DesiredAccess, v13, v12);
  memset(v43, 0, sizeof(v43));
  v8 = Handle[0];
  v14 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, 1, NewObject, &HandleInformation);
  v18 = v14;
  if ( v14 == -1073741788 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v8;
    *(_QWORD *)(v19 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v19);
    return 3221225508LL;
  }
  if ( v14 >= 0 )
  {
    v21 = (char *)NewObject[0];
    if ( *((_BYTE *)NewObject[0] + 40) )
    {
      v23 = (char *)NewObject[0] + 32;
      ExAcquirePushLockExclusiveEx((char *)NewObject[0] + 32, 0LL);
      if ( v10 == *(_DWORD *)v21 )
      {
        v28 = 0LL;
        if ( !*(_DWORD *)v21 )
        {
LABEL_26:
          v33 = Src[1];
          v34 = (char *)Src[1] + 8 * v11;
          if ( (unsigned __int64)v34 > MmUserProbeAddress || v34 <= Src[1] )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v33, v43, 8 * v11);
          ExReleasePushLockExclusiveEx(v23, 0LL);
          LODWORD(v8) = 0;
          goto LABEL_30;
        }
        while ( 1 )
        {
          ObfReferenceObject(*(PVOID *)&v21[8 * v28 + 8]);
          inserted = ObInsertObject(*(PVOID *)&v21[8 * v28 + 8], 0LL, DesiredAccess[v28], 0, 0LL, &v43[v28]);
          v8 = (HANDLE)inserted;
          if ( inserted < 0 )
            break;
          v28 = (unsigned int)(v28 + 1);
          if ( (unsigned int)v28 >= *(_DWORD *)v21 )
          {
            v23 = v21 + 32;
            goto LABEL_26;
          }
        }
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
        v27[3] = *(_QWORD *)&v21[8 * v28 + 8];
        v27[4] = Current;
        v27[5] = v8;
      }
      else
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
        v27[3] = v10;
        v27[4] = *(unsigned int *)v21;
        v27[5] = v8;
        LODWORD(v8) = -1073741811;
        v27[6] = -1073741811LL;
      }
      WdLogEvent5_WdWarning(v27);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)v21; i = (unsigned int)(i + 1) )
      {
        v36 = v43[i];
        if ( v36 )
        {
          NtClose(v36);
          v43[i] = 0LL;
        }
      }
      ExReleasePushLockExclusiveEx(v21 + 32, 0LL);
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v22 + 24) = v8;
      WdLogEvent5_WdWarning(v22);
      LODWORD(v8) = -1073741811;
    }
LABEL_30:
    ObfDereferenceObject(v21);
    return (unsigned int)v8;
  }
  v20 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v20 + 24) = v8;
  *(_QWORD *)(v20 + 32) = v18;
  WdLogEvent5_WdWarning(v20);
  return (unsigned int)v18;
}
