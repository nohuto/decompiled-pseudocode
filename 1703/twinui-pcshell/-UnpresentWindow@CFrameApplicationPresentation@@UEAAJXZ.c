/*
 * XREFs of ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180066920
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??$Start@AEBKAEBQEAUHWND__@@@UnpresentWindow@CFramePresentationTelemetry@@SA?AV01@AEBKAEBQEAUHWND__@@@Z @ 0x180069D98 (--$Start@AEBKAEBQEAUHWND__@@@UnpresentWindow@CFramePresentationTelemetry@@SA-AV01@AEBKAEBQEAUHWN.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___ @ 0x180069E64 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18006E9D0 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18006E9D0.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::UnpresentWindow(CFrameApplicationPresentation *this)
{
  __int64 v2; // rbx
  _QWORD v4[2]; // [rsp+40h] [rbp-C8h] BYREF
  void **v5; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v6[40]; // [rsp+188h] [rbp+80h] BYREF

  if ( **((_QWORD **)this + 12) )
  {
    CFramePresentationTelemetry::UnpresentWindow::Start<unsigned long const &,HWND__ * const &>((CFramePresentationTelemetry::UnpresentWindow *)v6);
    v2 = **((_QWORD **)this + 12);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4[0] = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4[1] = this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v5,
      v6);
    v5 = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___(this, v4);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v6[0] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
  }
  return 0LL;
}
