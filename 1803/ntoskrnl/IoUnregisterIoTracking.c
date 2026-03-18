/*
 * XREFs of IoUnregisterIoTracking @ 0x14071DD30
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     IopIrpExtensionControl @ 0x140232A24 (IopIrpExtensionControl.c)
 *     IoPerfReset @ 0x1402380AC (IoPerfReset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall IoUnregisterIoTracking(__int64 *P)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  PVOID *v6; // rax

  IoPerfReset(2);
  IopIrpExtensionControl(2, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopPerfIoTrackingLock, 0LL);
  v5 = *P;
  if ( *(__int64 **)(*P + 8) != P || (v6 = (PVOID *)P[1], *v6 != P) )
    __fastfail(3u);
  *v6 = (PVOID)v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IopPerfIoTrackingLock, v5, v3, v4);
  KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  ExFreePoolWithTag(P, 0x72546F49u);
}
