/*
 * XREFs of ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1802DA8D0
 * Callers:
 *     ?TryInvokeBack@WindowArrangementView@@UEAAJXZ @ 0x1802DDE80 (-TryInvokeBack@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc___ @ 0x1802D984C (CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc___.c)
 *     _lambda_eb168a4251134b138c4e1a8a58dc23dc_::operator() @ 0x1802DA35C (_lambda_eb168a4251134b138c4e1a8a58dc23dc_--operator().c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802DA4B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_1802DA4B0.c)
 *     ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802DAB80 (-EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEB.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD14 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall WindowArrangementView::CancelPlacement(WindowArrangementView *this)
{
  WindowArrangementView *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  __int64 v9; // [rsp+50h] [rbp+28h] BYREF
  WindowArrangementView *v10; // [rsp+58h] [rbp+30h] BYREF
  WindowArrangementView *v11; // [rsp+60h] [rbp+38h] BYREF
  char *v12; // [rsp+68h] [rbp+40h] BYREF

  if ( !*((_BYTE *)this + 260) && !*((_BYTE *)this + 258) )
  {
    v2 = (WindowArrangementView *)((char *)this - 48);
    v12 = (char *)this - 48;
    if ( this != (WindowArrangementView *)48 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef((char *)this - 48);
    v10 = v2;
    if ( v2 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)v2);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v11 = v2;
    if ( v2 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef((__int64)v2);
    v3 = CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc_((__int64)&v11, &v9);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 554LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v3);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v12);
      return v4;
    }
    v6 = WindowArrangementView::EnablePlaceModeDropFeedback(v2, 3LL, 0LL, v9);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), 0LL, 0LL);
      *((_BYTE *)this + 260) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        555LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v6);
      v3 = lambda_eb168a4251134b138c4e1a8a58dc23dc_::operator()(&v10);
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 562LL;
        goto LABEL_14;
      }
    }
    v4 = 0;
    goto LABEL_17;
  }
  return 0LL;
}
