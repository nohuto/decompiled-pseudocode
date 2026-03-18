/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x1406F5730
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140565A58 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400BB350 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x1402BA0B8 (ExTryConvertSharedToExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     CmRealKCBToVirtualPath @ 0x1405C06B0 (CmRealKCBToVirtualPath.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405DFDF4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1405DFE24 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpBuildVirtualReplicationStack @ 0x1406F49EC (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x1406F4E6C (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x1406F5048 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x1406F5614 (CmpGetVirtualStoreRoot.c)
 *     CmpCopySaclToVirtualKey @ 0x1406F6030 (CmpCopySaclToVirtualKey.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(__int64 a1, __int64 *a2, char a3, ULONG_PTR *a4)
{
  __int64 v6; // r13
  ULONG_PTR v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  int v10; // ebx
  UNICODE_STRING *v11; // rcx
  unsigned int v12; // eax
  _QWORD *v13; // r14
  int VirtualStoreRoot; // eax
  int v15; // ebx
  ULONG_PTR v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  __int16 v21; // ax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v24; // [rsp+40h] [rbp-59h]
  unsigned int v25; // [rsp+44h] [rbp-55h] BYREF
  char v26; // [rsp+48h] [rbp-51h]
  PVOID P; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v28[2]; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-31h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-29h] BYREF
  __int64 *v32; // [rsp+80h] [rbp-19h]
  ULONG_PTR *v33; // [rsp+88h] [rbp-11h]
  LARGE_INTEGER v34[4]; // [rsp+90h] [rbp-9h] BYREF

  v26 = a3;
  v32 = a2;
  v33 = a4;
  v28[0] = -1;
  v29[0] = -1;
  v28[1] = 0;
  v29[1] = 0;
  memset(v34, 0, sizeof(v34));
  v6 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v34, 0x20000u);
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  BugCheckParameter2 = 0LL;
  v24 = 0;
  if ( CmpTraceRoutine && a1 )
    v6 = a1;
  v10 = CmRealKCBToVirtualPath(a1, 0LL, (__int64)a2, &UnicodeString);
  if ( v10 >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&UnicodeString, &v25, &P) >= 0 )
    {
      v12 = v25;
      v13 = P;
      if ( v25 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(v32, &BugCheckParameter2, &P);
        v7 = BugCheckParameter2;
        v10 = VirtualStoreRoot;
        if ( VirtualStoreRoot >= 0 )
        {
          v15 = (int)P;
          v16 = BugCheckParameter2;
          v17 = (unsigned int)P;
          *v33 = BugCheckParameter2;
          v13[2] = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD *))(v7 + 8))(v16, v17, v13 + 3);
          *((_DWORD *)v13 + 8) = v15;
          if ( v13[2] )
          {
            if ( v26 || (v24 = ExTryConvertSharedToExclusiveLite()) != 0 )
            {
              v10 = CmpDoBuildVirtualStack((__int64)v13, v25, v7);
              LODWORD(P) = *((_DWORD *)&v13[6 * v25 - 1] - 1);
              if ( v10 >= 0 )
              {
                if ( HvpMarkCellDirty(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 32), 0)
                  && (v18 = (unsigned int)P, HvpMarkCellDirty(v7, (unsigned int)P, 0)) )
                {
                  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
                         *(_QWORD *)(a1 + 24),
                         *(unsigned int *)(a1 + 32),
                         v28);
                  if ( v8 && (v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v7 + 8))(v7, v18, v29)) != 0 )
                  {
                    CmpLockTwoSecurityCachesExclusiveShared(v7, *(_QWORD *)(a1 + 24));
                    v10 = CmpCopySaclToVirtualKey(*(_QWORD *)(a1 + 24), v8, v7, v9, v18);
                    CmpUnlockTwoSecurityCaches(v7, *(_QWORD *)(a1 + 24), v19, v20);
                    if ( v10 >= 0 )
                    {
                      v21 = *(_WORD *)(v9 + 2);
                      if ( (v21 & 0x100) == 0 )
                        *(_WORD *)(v9 + 2) = v21 | 0x100;
                      *(_WORD *)(a1 + 178) |= 0x80u;
                      *(_WORD *)(v8 + 2) |= 0x80u;
                    }
                  }
                  else
                  {
                    v10 = -1073741670;
                  }
                }
                else
                {
                  v10 = -1073741443;
                }
              }
              if ( v24 )
                ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
              if ( v8 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v28);
              if ( v9 )
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v7 + 16))(v7, v29);
            }
            else
            {
              v10 = -1073741739;
            }
          }
          else
          {
            v10 = -1073741670;
          }
        }
        v12 = v25;
      }
      else
      {
        v10 = -1073741811;
      }
      if ( v13 )
      {
        CmpDestroyVirtualStack((__int64)v13, v12, v7);
        ExFreePoolWithTag(v13, 0);
      }
    }
    else
    {
      v10 = -1073741670;
    }
    if ( CmpTraceRoutine )
    {
      p_UnicodeString = &UnicodeString;
      LOBYTE(p_UnicodeString) = 26;
      CmpTraceRoutine(p_UnicodeString, v34, (unsigned int)v10, 0LL, v6, &UnicodeString);
    }
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( CmpTraceRoutine )
  {
    v11 = &UnicodeString;
    LOBYTE(v11) = 26;
    CmpTraceRoutine(v11, v34, (unsigned int)v10, 0LL, v6, &UnicodeString);
  }
  return (unsigned int)v10;
}
