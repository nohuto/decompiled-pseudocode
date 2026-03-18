/*
 * XREFs of DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C003A16C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F05A0 (DpiFdoHandleDevicePower.c)
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkReportDevicePoweredOn @ 0x1C00291EC (DxgkReportDevicePoweredOn.c)
 */

void __fastcall DpiSetDevicePowerTransitionStateAtPassiveLevel(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3904), &LockHandle);
  v6 = 5LL;
  if ( (_DWORD)v3 != 5 || *(_DWORD *)(a1 + 3968) == 4 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdPower();
    v6 = v3;
    v7[5] = 0LL;
    v7[3] = a1;
    v7[4] = v3;
    WdLogEvent5_WdPower(v7);
    *(_DWORD *)(a1 + 3968) = v3;
  }
  if ( a3 && !*(_DWORD *)(a1 + 3972) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdPower();
    v8[3] = a1;
    v8[4] = v6;
    v8[5] = 1LL;
    WdLogEvent5_WdPower(v8);
    DxgkReportDevicePoweredOn(*(_QWORD *)(a1 + 3728));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
