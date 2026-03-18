/*
 * XREFs of IoUnregisterIoTracking @ 0x1406B9160
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     IopIrpExtensionControl @ 0x1401F5504 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x1401FB378 (IoPerfReset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall IoUnregisterIoTracking(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rdx
  PVOID *v4; // rax

  IoPerfReset(2);
  IopIrpExtensionControl(2, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopPerfIoTrackingLock, 0LL);
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(P, 0x72546F49u);
}
