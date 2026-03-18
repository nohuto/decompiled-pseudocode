/*
 * XREFs of PopDisengageDirectedDrips @ 0x140761FD4
 * Callers:
 *     PopDirectedDripsPdcPlmNotification @ 0x140761BA0 (PopDirectedDripsPdcPlmNotification.c)
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     PnpUnlockDeviceActionQueue @ 0x1400C8910 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     PipClearDeviceTreeStateFlags @ 0x140482D18 (PipClearDeviceTreeStateFlags.c)
 *     PopDiagTraceDirectedDripsEngagedStatus @ 0x140767108 (PopDiagTraceDirectedDripsEngagedStatus.c)
 */

__int64 __fastcall PopDisengageDirectedDrips(__int64 a1)
{
  __int64 result; // rax

  if ( _InterlockedExchange(&PopDirectedDripsEngaged, 0) )
  {
    PnpLockDeviceActionQueue();
    PipClearDeviceTreeStateFlags(24576);
    PnpUnlockDeviceActionQueue();
    PopDiagTraceDirectedDripsEngagedStatus(0LL);
    PopDeepSleepClearDisengageReason(8);
  }
  KeCancelTimer2(a1 + 48);
  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 188), *(_DWORD *)(a1 + 184));
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFC3);
  return result;
}
