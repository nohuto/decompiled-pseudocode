/*
 * XREFs of ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180016810
 * Callers:
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180016AA4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016D30 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180133320 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x180133E60 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x1800168B8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18001B3A0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180155FC4 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseRenderTargets(CDesktopRenderTarget *this)
{
  __int64 i; // rbx
  int v3; // eax
  __int64 j; // rbx
  int v5; // esi
  CMILRefCountBase *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rbx
  CMILRefCountBase *v10; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
  {
    v6 = *(CMILRefCountBase **)(*(_QWORD *)(*((_QWORD *)this + 21) + 8 * i) + 80LL);
    v10 = v6;
    if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((char *)this + 264, &v10) )
      CMILRefCountBase::Release(v6);
    CRenderTargetManager::RemoveRenderTarget(
      *(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL),
      *(struct CRenderTarget **)(*((_QWORD *)this + 21) + 8 * i));
    v7 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)this + 72) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 264, 8LL);
  *((_DWORD *)this + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 168, 8LL);
  v3 = *((_DWORD *)this + 36) - 1;
  for ( j = v3;
        j >= 0;
        CDesktopRenderTarget::RemoveRenderTarget(this, *(struct CHwndRenderTarget **)(*((_QWORD *)this + 15) + 8 * j--)) )
  {
    ;
  }
  v5 = *((_DWORD *)this + 60) - 1;
  if ( v5 >= 0 )
  {
    v8 = 8LL * v5;
    do
    {
      v9 = *(_QWORD *)(v8 + *((_QWORD *)this + 27));
      DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt((char *)this + 216, (unsigned int)v5);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      --v5;
      v8 -= 8LL;
    }
    while ( v5 >= 0 );
  }
  *((_BYTE *)this + 312) = 0;
}
