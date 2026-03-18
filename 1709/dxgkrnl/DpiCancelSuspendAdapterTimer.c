/*
 * XREFs of DpiCancelSuspendAdapterTimer @ 0x1C002D5F8
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C002D9A0 (DpiRequestDevicePowerState.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00338DC (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 */

void __fastcall DpiCancelSuspendAdapterTimer(__int64 a1)
{
  char v2; // di
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  BOOLEAN v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3904), &LockHandle);
    v2 = 1;
  }
  v3 = (_QWORD *)WdLogNewEntry5_WdPower();
  v3[3] = a1;
  v3[4] = 0LL;
  v3[5] = 0LL;
  WdLogEvent5_WdPower(v3);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0xq(v4, &Dxgk_DevicePowerRequiredTimer, v5, *(_QWORD *)(a1 + 3728), 0);
  v6 = KeCancelTimer((PKTIMER)(a1 + 3976));
  if ( v2 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v6 )
      KeFlushQueuedDpcs();
  }
}
