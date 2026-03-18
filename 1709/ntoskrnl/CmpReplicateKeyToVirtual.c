/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x1406924F8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140569AAC (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     ExConvertExclusiveToSharedLite @ 0x14011BA60 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140285A88 (ExTryConvertSharedToExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1405A677C (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1405A6A4C (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x1406911F8 (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x140691664 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x140691818 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x14069216C (CmpGetVirtualStoreRoot.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(__int64 a1, char a2, ULONG_PTR *a3)
{
  __int64 v4; // r12
  ULONG_PTR v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r15
  int v8; // ebx
  UNICODE_STRING *v9; // rcx
  unsigned int v10; // eax
  _QWORD *v11; // r14
  int VirtualStoreRoot; // eax
  int v13; // ebx
  ULONG_PTR v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int16 v17; // ax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v20; // [rsp+40h] [rbp-49h]
  unsigned int v21; // [rsp+44h] [rbp-45h] BYREF
  char v22; // [rsp+48h] [rbp-41h]
  PVOID P; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v24[2]; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v25[2]; // [rsp+60h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-21h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-19h] BYREF
  ULONG_PTR *v28; // [rsp+80h] [rbp-9h]
  __int64 v29[3]; // [rsp+88h] [rbp-1h] BYREF

  v28 = a3;
  v22 = a2;
  v24[1] = 0;
  v4 = 0LL;
  v24[0] = -1;
  v25[0] = -1;
  v25[1] = 0;
  memset(v29, 0, sizeof(v29));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v29, 0x20000u);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  BugCheckParameter2 = 0LL;
  v20 = 0;
  if ( CmpTraceRoutine && a1 )
    v4 = a1;
  v8 = CmRealKCBToVirtualPath(a1, 0LL, &UnicodeString);
  if ( v8 >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&UnicodeString, &v21, &P) >= 0 )
    {
      v10 = v21;
      v11 = P;
      if ( v21 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(&BugCheckParameter2, &P);
        v5 = BugCheckParameter2;
        v8 = VirtualStoreRoot;
        if ( VirtualStoreRoot >= 0 )
        {
          v13 = (int)P;
          v14 = BugCheckParameter2;
          v15 = (unsigned int)P;
          *v28 = BugCheckParameter2;
          v11[2] = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD *))(v5 + 8))(v14, v15, v11 + 3);
          *((_DWORD *)v11 + 8) = v13;
          if ( v11[2] )
          {
            if ( v22 || (v20 = ExTryConvertSharedToExclusiveLite()) != 0 )
            {
              v8 = CmpDoBuildVirtualStack((__int64)v11, v21, v5);
              LODWORD(P) = *((_DWORD *)&v11[6 * v21 - 1] - 1);
              if ( v8 >= 0 )
              {
                if ( HvpMarkCellDirty(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 32), 0)
                  && (v16 = (unsigned int)P, HvpMarkCellDirty(v5, (unsigned int)P, 0)) )
                {
                  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 8LL))(
                         *(_QWORD *)(a1 + 24),
                         *(unsigned int *)(a1 + 32),
                         v24);
                  if ( v6 && (v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v16, v25)) != 0 )
                  {
                    CmpLockTwoSecurityCachesExclusiveShared(v5, *(_QWORD *)(a1 + 24));
                    v8 = CmpCopySaclToVirtualKey(*(_QWORD *)(a1 + 24), v6, v5, v7, v16);
                    CmpUnlockTwoSecurityCaches(v5, *(_QWORD *)(a1 + 24));
                    if ( v8 >= 0 )
                    {
                      v17 = *(_WORD *)(v7 + 2);
                      if ( (v17 & 0x100) == 0 )
                        *(_WORD *)(v7 + 2) = v17 | 0x100;
                      *(_WORD *)(a1 + 178) |= 0x80u;
                      *(_WORD *)(v6 + 2) |= 0x80u;
                    }
                  }
                  else
                  {
                    v8 = -1073741670;
                  }
                }
                else
                {
                  v8 = -1073741443;
                }
              }
              if ( v20 )
                ExConvertExclusiveToSharedLite((PERESOURCE)&CmpRegistryLock);
              if ( v6 )
                (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v24);
              if ( v7 )
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v25);
            }
            else
            {
              v8 = -1073741739;
            }
          }
          else
          {
            v8 = -1073741670;
          }
        }
        v10 = v21;
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v11 )
      {
        CmpDestroyVirtualStack((__int64)v11, v10, v5);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      v8 = -1073741670;
    }
    if ( CmpTraceRoutine )
    {
      p_UnicodeString = &UnicodeString;
      LOBYTE(p_UnicodeString) = 26;
      CmpTraceRoutine(p_UnicodeString, v29, (unsigned int)v8, 0LL, v4, &UnicodeString);
    }
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( CmpTraceRoutine )
  {
    v9 = &UnicodeString;
    LOBYTE(v9) = 26;
    CmpTraceRoutine(v9, v29, (unsigned int)v8, 0LL, v4, &UnicodeString);
  }
  return (unsigned int)v8;
}
