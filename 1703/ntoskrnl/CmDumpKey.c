/*
 * XREFs of CmDumpKey @ 0x140671674
 * Callers:
 *     NtSaveKeyEx @ 0x14065FD04 (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFreeOffsetArray @ 0x14066AEA8 (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14066AEF8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x14066B5A8 (CmpWriteOffsetArrayToFile.c)
 *     CmpLogUnsupportedOperation @ 0x14066DAD0 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmDumpKey(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v8; // bp
  unsigned int v9; // edi
  int v10; // esi
  __int64 v11; // rcx
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  PVOID *v14; // [rsp+78h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v12 = 0;
  v14 = 0LL;
  v13 = 0;
  v5 = *(_QWORD *)(v2 + 24);
  if ( v5 == CmpMasterHive )
    return 3221225506LL;
  if ( *(_WORD *)(v2 + 58) )
  {
    CmpLogUnsupportedOperation(0x16u);
    return 3221225474LL;
  }
  CmpLockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v8 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v9 = -1073741491;
LABEL_12:
    CmpUnlockRegistry();
    if ( v8 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return v9;
  }
  CmpLockKcbShared(v2);
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v9 = -1073741444;
LABEL_11:
    CmpUnlockKcb(v2);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v2 + 32) != *(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL) )
  {
    v9 = -1073741811;
    goto LABEL_11;
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v5 + 2848), 1u);
  v10 = CmpSnapshotHiveToOffsetArray(v5, &v12, &v14, (unsigned int *)&v13);
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 2848));
  CmpUnlockKcb(v2);
  CmpUnlockRegistry();
  if ( v10 >= 0 )
  {
    v10 = CmpWriteOffsetArrayToFile(v11, v12, (__int64)v14, v13, a2);
    CmpFreeOffsetArray(v12, v14);
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v10;
}
