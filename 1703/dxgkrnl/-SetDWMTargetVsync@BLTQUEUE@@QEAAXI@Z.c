/*
 * XREFs of ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C003B728
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E4F80 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C016C940 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_qqqq @ 0x1C0023228 (Template_qqqq.c)
 */

void __fastcall BLTQUEUE::SetDWMTargetVsync(BLTQUEUE *this, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KEVENT *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  _BYTE v9[8]; // [rsp+40h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+50h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 31, a3, a4);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v6 = (struct _KEVENT *)*((_QWORD *)this + 28);
  v11 = 2;
  KeResetEvent(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qqqq(v7, &EventDWMVsyncCountWait, v8, a2, *((_DWORD *)this + 70), 0, 0);
  *((_DWORD *)this + 58) = a2;
  if ( a2 <= *((_DWORD *)this + 70) && a2 )
    KeSetEvent(*((PRKEVENT *)this + 28), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
