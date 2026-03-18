/*
 * XREFs of ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C003A4B4
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiCancelSuspendAdapterTimer @ 0x1C00397C8 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C0039BD0 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C003A0FC (DpiSetDevicePowerTransitionState.c)
 */

void __fastcall DpiFinishSuspendAdapter(struct _FDO_CONTEXT *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 488, &LockHandle);
  if ( *((_DWORD *)a1 + 992) == 2 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdPower();
    v3[3] = a1;
    v3[4] = 0LL;
    v3[5] = 0LL;
    WdLogEvent5_WdPower(v3);
    *((_DWORD *)a1 + 952) = 1;
    KeResetEvent((PRKEVENT)((char *)a1 + 3920));
    if ( *((_DWORD *)a1 + 993) )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdPower();
      v4[3] = a1;
      v4[4] = 0LL;
      v4[5] = 0LL;
      WdLogEvent5_WdPower(v4);
      DpiRequestDevicePowerIrp((__int64)a1, 4);
      DpiSetDevicePowerTransitionState((__int64)a1, 4);
      DpiCancelSuspendAdapterTimer((__int64)a1);
    }
    else
    {
      DpiSetDevicePowerTransitionState((__int64)a1, 3);
    }
  }
  else
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdPower();
    v2[5] = 0LL;
    v2[3] = a1;
    v2[4] = 1LL;
    WdLogEvent5_WdPower(v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
