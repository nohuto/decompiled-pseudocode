/*
 * XREFs of DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C002DDF8
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0101690 (DpiFdoHandleDevicePower.c)
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkReportDevicePoweredOn @ 0x1C0021A30 (DxgkReportDevicePoweredOn.c)
 */

void __fastcall DpiSetDevicePowerTransitionStateAtPassiveLevel(__int64 a1, int a2, char a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3904), &LockHandle);
  if ( (_DWORD)v3 != 5 || *(_DWORD *)(a1 + 3968) == 4 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdPower();
    v6[5] = 0LL;
    v6[3] = a1;
    v6[4] = v3;
    WdLogEvent5_WdPower(v6);
    *(_DWORD *)(a1 + 3968) = v3;
  }
  if ( a3 && !*(_DWORD *)(a1 + 3972) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdPower();
    v7[3] = a1;
    v7[4] = v3;
    v7[5] = 1LL;
    WdLogEvent5_WdPower(v7);
    DxgkReportDevicePoweredOn(*(_QWORD *)(a1 + 3728));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
