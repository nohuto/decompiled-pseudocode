/*
 * XREFs of ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180137C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000FE20 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800F6660 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_1800F6660.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___ @ 0x1801363C0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1801365DC (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x1801373EC (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::UnpresentWindow(CFrameApplicationPresentation *this)
{
  HWND *v2; // rbx
  __int64 v3; // rbx
  __int64 v5[3]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v6[2]; // [rsp+40h] [rbp-C8h] BYREF
  void **v7; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v8[40]; // [rsp+188h] [rbp+80h] BYREF

  v5[1] = -2LL;
  if ( **((_QWORD **)this + 13) )
  {
    v2 = (HWND *)*((_QWORD *)this + 14);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v8,
      (__int64)"UnpresentWindow");
    v8[0] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFramePresentationTelemetry::UnpresentWindow::StartActivity(
      (CFramePresentationTelemetry::UnpresentWindow *)v8,
      *((_DWORD *)this + 12),
      *v2);
    v5[0] = **((_QWORD **)this + 13);
    v3 = v5[0];
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v5);
    v6[0] = v3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v6);
    v6[1] = (__int64)this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v7,
      v8);
    v7 = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_f5c3a3508d94124ca65af9e8c1942170___((unsigned int *)this, v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5);
    CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)v8);
  }
  return 0LL;
}
