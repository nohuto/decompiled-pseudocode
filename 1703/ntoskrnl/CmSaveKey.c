/*
 * XREFs of CmSaveKey @ 0x140672300
 * Callers:
 *     NtSaveKeyEx @ 0x14065FD04 (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUuidCreate @ 0x14054D440 (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 *     CmpTraceHiveSaveFileCopied @ 0x1406614F0 (CmpTraceHiveSaveFileCopied.c)
 *     CmpTraceHiveSaveFileWritten @ 0x140661540 (CmpTraceHiveSaveFileWritten.c)
 *     CmpTraceHiveSaveStart @ 0x140661590 (CmpTraceHiveSaveStart.c)
 *     CmpTraceHiveSaveStop @ 0x140661668 (CmpTraceHiveSaveStop.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x1406616F8 (CmpTraceHiveSaveTreeCopied.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140668390 (CmpDoAccessCheckOnSubtree.c)
 *     HvWriteExternal @ 0x14066CD24 (HvWriteExternal.c)
 *     CmpLogUnsupportedOperation @ 0x14066DAD0 (CmpLogUnsupportedOperation.c)
 *     CmpCreateTemporaryHive @ 0x140672A78 (CmpCreateTemporaryHive.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140673320 (CmpSaveKeyByFileCopy.c)
 */

NTSTATUS __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v4; // r14
  __int64 v9; // rsi
  NTSTATUS result; // eax
  __int64 v11; // rcx
  ULONG_PTR v12; // rbp
  int v13; // edi
  unsigned int v14; // r15d
  BOOLEAN v15; // bl
  int v16; // ebx
  __int64 v17; // [rsp+28h] [rbp-80h]
  UUID v18; // [rsp+40h] [rbp-68h] BYREF
  UUID Uuid; // [rsp+50h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v4 + 24);
  if ( v9 == CmpMasterHive )
    return -1073741790;
  if ( *(_WORD *)(v4 + 58) )
  {
    CmpLogUnsupportedOperation(0x12u);
    return -1073741822;
  }
  result = CmpUuidCreate(&Uuid);
  if ( result >= 0 )
  {
    result = CmpUuidCreate(&v18);
    if ( result >= 0 )
    {
      v12 = CmpCreateTemporaryHive(v11, &Uuid, &v18);
      if ( !v12 )
        return -1073741670;
      CmpLockRegistry();
      CmpLockKcbShared(v4);
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
            v15 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v9 + 2776));
            ExReleaseResourceLite(*(PERESOURCE *)(v9 + 2848));
            CmpUnlockKcb(v4);
            CmpUnlockRegistry();
            if ( v15 )
            {
              v13 = CmpSaveKeyByFileCopy(v9, a2);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v9 + 2776));
              if ( v13 >= 0 )
                CmpTraceHiveSaveFileCopied();
            }
            else
            {
              v13 = -1073741444;
            }
            goto LABEL_23;
          }
          *(_DWORD *)(*(_QWORD *)(v12 + 64) + 24LL) = a3;
          *(_DWORD *)(v12 + 196) = a3;
          v16 = CmpCopyKeyPartial(v9, v14, v12, 0xFFFFFFFF, 6, v17, 0);
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
      CmpDestroyTemporaryHive(v12);
      CmpTraceHiveSaveStop(v13);
      return v13;
    }
  }
  return result;
}
