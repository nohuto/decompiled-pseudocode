/*
 * XREFs of CmpTransMgrSyncHive @ 0x14042E8D4
 * Callers:
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvpMarkDirty @ 0x140515690 (HvpMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2)
{
  int v2; // ebx
  char v4; // bl

  CmpLockRegistry(BugCheckParameter2);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) == 0 )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    v4 = HvpMarkDirty(BugCheckParameter2);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    if ( !v4 )
    {
      v2 = -1073741670;
      ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
      CmpUnlockRegistry();
      return (unsigned int)v2;
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
  CmpUnlockRegistry();
  v2 = CmpFlushHive(BugCheckParameter2);
  if ( v2 < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v2;
}
