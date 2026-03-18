/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C016C940
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E4F80 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C000B830 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x1C0023228 (Template_qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C003B728 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v8 = a2;
  v9 = *((_QWORD *)this + 14) + 3208LL * a2;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v12 = *(_QWORD *)(v9 + 896) == 0LL;
  *a5 = 1;
  if ( v12 || !(*(unsigned int (**)(void))(*((_QWORD *)Current + 9) + 216LL))() )
    return 3221225485LL;
  if ( *((_QWORD *)this + 33) )
  {
    *(_DWORD *)(v9 + 904) = a3;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 2704 * v8), a3, v14, v15);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqq(v13, &EventDWMVsyncCountWait, v14, a3, *(_DWORD *)(v9 + 908), *(_BYTE *)(v9 + 912), a4);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, a2, a3, a5);
  }
  return 0LL;
}
