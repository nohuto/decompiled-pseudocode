/*
 * XREFs of CmpStopRMLog @ 0x14054E8A0
 * Callers:
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmShutdownCmRM @ 0x14054E650 (CmShutdownCmRM.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLogCheckpoint @ 0x1405E790C (CmpLogCheckpoint.c)
 */

__int64 __fastcall CmpStopRMLog(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx

  CmpLockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      CmpLogCheckpoint(a1, v3, 0LL);
      ClfsDeleteMarshallingArea(*(PVOID *)(a1 + 96));
      *(_QWORD *)(a1 + 96) = 0LL;
    }
    if ( (PVOID)a1 != CmRmSystem && *(_QWORD *)(a1 + 16) == a1 + 16 )
      ClfsDeleteLogByPointer(*(PLOG_FILE_OBJECT *)(a1 + 88));
    ClfsCloseLogFileObject(*(PLOG_FILE_OBJECT *)(a1 + 88));
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return CmpUnlockRegistry();
}
