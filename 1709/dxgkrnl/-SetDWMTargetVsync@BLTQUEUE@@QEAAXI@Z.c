/*
 * XREFs of ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C0001140
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00A9BB0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C00AC4D4 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0qqqq @ 0x1C00215BC (McTemplateK0qqqq.c)
 */

void __fastcall BLTQUEUE::SetDWMTargetVsync(BLTQUEUE *this, unsigned int a2)
{
  DXGPUSHLOCK *v2; // rsi
  struct _KEVENT *v5; // rcx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  _BYTE v9[8]; // [rsp+40h] [rbp-28h] BYREF
  char *v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+50h] [rbp-18h]

  v2 = (BLTQUEUE *)((char *)this + 248);
  v10 = (char *)this + 248;
  if ( this != (BLTQUEUE *)-248LL && *((struct _KTHREAD **)this + 32) == KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v8 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGPUSHLOCK::AcquireExclusive(v2);
  v5 = (struct _KEVENT *)*((_QWORD *)this + 28);
  v11 = 2;
  KeResetEvent(v5);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqqq(v6, (unsigned int)&EventDWMVsyncCountWait, v7, a2, *((_DWORD *)this + 70), 0, 0);
  *((_DWORD *)this + 58) = a2;
  if ( a2 <= *((_DWORD *)this + 70) && a2 )
    KeSetEvent(*((PRKEVENT *)this + 28), 0, 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
