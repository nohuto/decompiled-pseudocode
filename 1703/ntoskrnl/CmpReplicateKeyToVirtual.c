/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x1406679E8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExConvertExclusiveToSharedLite @ 0x140025A40 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x14025C168 (ExTryConvertSharedToExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405721FC (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140572228 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpBuildVirtualReplicationStack @ 0x140666DB0 (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x140667144 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x1406672F8 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x1406678D4 (CmpGetVirtualStoreRoot.c)
 *     CmpCopySaclToVirtualKey @ 0x140668104 (CmpCopySaclToVirtualKey.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(__int64 a1, char a2, ULONG_PTR *a3)
{
  __int64 v4; // r12
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  ULONG_PTR v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r15
  int v9; // ebx
  UNICODE_STRING *v10; // rcx
  unsigned int v11; // eax
  _QWORD *v12; // r14
  int VirtualStoreRoot; // eax
  int v14; // ebx
  ULONG_PTR v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int16 v18; // ax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v21; // [rsp+40h] [rbp-49h]
  unsigned int v22; // [rsp+44h] [rbp-45h] BYREF
  char v23; // [rsp+48h] [rbp-41h]
  PVOID P; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v25[2]; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-19h] BYREF
  ULONG_PTR *v29; // [rsp+80h] [rbp-9h]
  LARGE_INTEGER v30[3]; // [rsp+88h] [rbp-1h] BYREF

  v29 = a3;
  v25[1] = 0;
  v26[1] = 0;
  memset(v30, 0, sizeof(v30));
  v4 = 0LL;
  v5 = CmpTraceRoutine;
  v23 = a2;
  v25[0] = -1;
  v26[0] = -1;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp(v30, 0x20000u);
    v5 = CmpTraceRoutine;
  }
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  BugCheckParameter2 = 0LL;
  v21 = 0;
  if ( v5 && a1 )
    v4 = a1;
  v9 = CmRealKCBToVirtualPath(a1, 0LL, &UnicodeString);
  if ( v9 >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&UnicodeString, &v22, &P) >= 0 )
    {
      v11 = v22;
      v12 = P;
      if ( v22 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(&BugCheckParameter2, &P);
        v6 = BugCheckParameter2;
        v9 = VirtualStoreRoot;
        if ( VirtualStoreRoot >= 0 )
        {
          v14 = (int)P;
          v15 = BugCheckParameter2;
          v16 = (unsigned int)P;
          *v29 = BugCheckParameter2;
          v12[2] = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD *))(v6 + 8))(v15, v16, v12 + 3);
          *((_DWORD *)v12 + 8) = v14;
          if ( v12[2] )
          {
            if ( v23 || (v21 = ExTryConvertSharedToExclusiveLite()) != 0 )
            {
              v9 = CmpDoBuildVirtualStack((__int64)v12, v22, v6);
              LODWORD(P) = *((_DWORD *)&v12[6 * v22 - 1] - 1);
              if ( v9 >= 0 )
              {
                if ( HvpMarkCellDirty(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 32), 0)
                  && (v17 = (unsigned int)P, HvpMarkCellDirty(v6, (unsigned int)P, 0)) )
                {
                  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
                         *(_QWORD *)(a1 + 24),
                         *(unsigned int *)(a1 + 32),
                         v25);
                  if ( v7 && (v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, v17, v26)) != 0 )
                  {
                    CmpLockTwoSecurityCachesExclusiveShared(v6, *(_QWORD *)(a1 + 24));
                    v9 = CmpCopySaclToVirtualKey(*(_QWORD *)(a1 + 24), v7, v6, v8, v17);
                    CmpUnlockTwoSecurityCaches(v6, *(_QWORD *)(a1 + 24));
                    if ( v9 >= 0 )
                    {
                      v18 = *(_WORD *)(v8 + 2);
                      if ( (v18 & 0x100) == 0 )
                        *(_WORD *)(v8 + 2) = v18 | 0x100;
                      *(_WORD *)(a1 + 178) |= 0x80u;
                      *(_WORD *)(v7 + 2) |= 0x80u;
                    }
                  }
                  else
                  {
                    v9 = -1073741670;
                  }
                }
                else
                {
                  v9 = -1073741443;
                }
              }
              if ( v21 )
                ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
              if ( v7 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v25);
              if ( v8 )
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v26);
            }
            else
            {
              v9 = -1073741739;
            }
          }
          else
          {
            v9 = -1073741670;
          }
        }
        v11 = v22;
      }
      else
      {
        v9 = -1073741811;
      }
      if ( v12 )
      {
        CmpDestroyVirtualStack((__int64)v12, v11, v6);
        ExFreePoolWithTag(v12, 0);
      }
    }
    else
    {
      v9 = -1073741670;
    }
    if ( CmpTraceRoutine )
    {
      p_UnicodeString = &UnicodeString;
      LOBYTE(p_UnicodeString) = 26;
      CmpTraceRoutine(p_UnicodeString, v30, (unsigned int)v9, 0LL, v4, &UnicodeString);
    }
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( CmpTraceRoutine )
  {
    v10 = &UnicodeString;
    LOBYTE(v10) = 26;
    CmpTraceRoutine(v10, v30, (unsigned int)v9, 0LL, v4, &UnicodeString);
  }
  return (unsigned int)v9;
}
