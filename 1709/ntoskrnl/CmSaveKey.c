/*
 * XREFs of CmSaveKey @ 0x14069D3CC
 * Callers:
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUuidCreate @ 0x14050AF74 (CmpUuidCreate.c)
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpTraceHiveSaveFileCopied @ 0x14068A614 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveFileWritten @ 0x14068A680 (CmpTraceHiveSaveFileWritten.c)
 *     CmpTraceHiveSaveStart @ 0x14068A6EC (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x14068A7C4 (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x14068A854 (CmpTraceHiveSaveTreeCopied.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1406933CC (CmpDoAccessCheckOnSubtree.c)
 *     HvWriteExternal @ 0x14069739C (HvWriteExternal.c)
 *     CmpLogUnsupportedOperation @ 0x140697FF0 (CmpLogUnsupportedOperation.c)
 *     CmpCreateTemporaryHive @ 0x14069DB4C (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14069E3E0 (CmpSaveKeyByFileCopy.c)
 */

NTSTATUS __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR v4; // r14
  __int64 v9; // rsi
  NTSTATUS result; // eax
  __int64 v11; // rcx
  ULONG_PTR v12; // rbp
  int v13; // edi
  unsigned int v14; // r15d
  BOOLEAN v15; // bl
  int v16; // ebx
  char v17; // [rsp+28h] [rbp-80h]
  ULONG_PTR v18; // [rsp+30h] [rbp-78h]
  UUID v19; // [rsp+40h] [rbp-68h] BYREF
  UUID Uuid; // [rsp+50h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v4 + 24);
  if ( (PVOID)v9 == CmpMasterHive )
    return -1073741790;
  if ( *(_WORD *)(v4 + 58) )
  {
    CmpLogUnsupportedOperation(0x12u);
    return -1073741822;
  }
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v19);
    if ( result >= 0 )
    {
      v12 = CmpCreateTemporaryHive(v11, &Uuid, &v19);
      if ( !v12 )
        return -1073741670;
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(v4 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 48));
      CmpTraceHiveSaveStart(v4);
      if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v13 = -1073741444;
      }
      else
      {
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v9 + 2848), 1u);
        v14 = *(_DWORD *)(v4 + 32);
        ExAcquirePushLockSharedEx(v9 + 2952, 0LL);
        v13 = CmpDoAccessCheckOnSubtree(v9, v14, a4, 0x1020019u, 3u);
        ExReleasePushLockEx(v9 + 2952, 0LL);
        if ( v13 >= 0 )
        {
          if ( (*(_DWORD *)(v9 + 144) & 2) != 0 && *(_DWORD *)(v9 + 88) && *(_QWORD *)(v9 + 2664) )
          {
            v15 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 2776));
            ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
            CmpUnlockKcb(v4);
            CmpUnlockRegistry();
            if ( v15 )
            {
              v13 = CmpSaveKeyByFileCopy(v9, a2);
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 2776));
              if ( v13 >= 0 )
                CmpTraceHiveSaveFileCopied();
            }
            else
            {
              v13 = -1073741444;
            }
            goto LABEL_23;
          }
          LODWORD(v18) = 0;
          *(_DWORD *)(*(_QWORD *)(v12 + 64) + 24LL) = a3;
          *(_DWORD *)(v12 + 196) = a3;
          v16 = CmpCopyKeyPartial(v9, v14, v12, 0xFFFFFFFF, 6, v17, v18);
          if ( v16 != -1 )
          {
            CmpTraceHiveSaveTreeCopied();
            *(_DWORD *)(*(_QWORD *)(v12 + 64) + 36LL) = v16;
            if ( CmpCopySyncTree(v9, v14, v12, v16, 2, 0) )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
              CmpUnlockKcb(v4);
              CmpUnlockRegistry();
              *(_QWORD *)(v12 + 2680) = a2;
              v13 = HvWriteExternal(v12);
              if ( v13 >= 0 )
                CmpTraceHiveSaveFileWritten();
              *(_QWORD *)(v12 + 2680) = 0LL;
              goto LABEL_24;
            }
          }
          v13 = -1073741670;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
      }
      CmpUnlockKcb(v4);
      CmpUnlockRegistry();
LABEL_23:
      *(_QWORD *)(v12 + 2680) = 0LL;
LABEL_24:
      CmpDestroyTemporaryHive((PVOID)v12);
      CmpTraceHiveSaveStop(v13);
      return v13;
    }
  }
  return result;
}
