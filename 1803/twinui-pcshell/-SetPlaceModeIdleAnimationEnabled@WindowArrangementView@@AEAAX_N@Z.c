/*
 * XREFs of ?SetPlaceModeIdleAnimationEnabled@WindowArrangementView@@AEAAX_N@Z @ 0x1802DC920
 * Callers:
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x1802DBD40 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1802DCD20 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1802DDB40 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___ @ 0x1802D9CE4 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802DA4B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1802DA4B0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD14 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::SetPlaceModeIdleAnimationEnabled(CWinRTApplicationView **this, volatile int *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  DWORD v5; // edx
  int v6; // eax
  char v7; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowArrangementView *v9; // [rsp+40h] [rbp+18h] BYREF
  WindowArrangementView *v10; // [rsp+48h] [rbp+20h] BYREF

  if ( (_BYTE)a2 )
  {
    v10 = (WindowArrangementView *)this;
    if ( this )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        (__int64)this,
        a2);
    v3 = *((_DWORD *)this + 75);
    v9 = (WindowArrangementView *)this;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 17);
    v5 = 3000;
    if ( !v3 )
      v5 = 1500;
    v6 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_4852e8c5575c21ffaf507ee455e63cdf___(
           v4,
           v5,
           this + 17,
           &v9);
    if ( v6 >= 0 )
    {
      v7 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        613LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v6);
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v9);
    if ( v7 )
      *((_DWORD *)this + 72) = 1;
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 17);
    *((_DWORD *)this + 72) = 0;
  }
}
