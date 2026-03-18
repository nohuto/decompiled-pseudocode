/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0006C14
 * Callers:
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C003B8E4 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C0095A50 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00DA620 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E4F80 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01016C0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104BA4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  if ( _InterlockedDecrement((volatile signed __int32 *)this + 578) < 0 )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v2[3] = 275LL;
    v2[4] = 28LL;
    v2[5] = this;
    v3 = *((unsigned int *)this + 578);
    v2[7] = 0LL;
    v2[6] = v3;
    WdLogEvent5_WdCriticalError(v2);
  }
}
