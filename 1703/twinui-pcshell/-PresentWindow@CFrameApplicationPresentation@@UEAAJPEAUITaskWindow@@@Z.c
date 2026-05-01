/*
 * XREFs of ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x1800663F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qd @ 0x180006D2C (WPP_SF_qd.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ??$Start@AEBKAEBQEAUHWND__@@AEBQEAU1@@PresentWindow@CFramePresentationTelemetry@@SA?AV01@AEBKAEBQEAUHWND__@@1@Z @ 0x180069994 (--$Start@AEBKAEBQEAUHWND__@@AEBQEAU1@@PresentWindow@CFramePresentationTelemetry@@SA-AV01@AEBKAEB.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___ @ 0x180069B64 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18006E9D0 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18006E9D0.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFrameApplicationPresentation::PresentWindow(
        CFrameApplicationPresentation *this,
        struct ITaskWindow *a2)
{
  bool v4; // si
  bool v5; // al
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+50h] [rbp-B8h] BYREF
  void **v10; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v11[40]; // [rsp+198h] [rbp+90h] BYREF

  v4 = (unsigned int)SHIsSameObject(
                       (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
                       **((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 12)) != 0;
  v5 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2) == **((_QWORD **)this + 13);
  if ( !v4 || !v5 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        &WPP_a1658e10cf12387b63d474d4cc4de9d3_Traceguids,
        v6,
        *((_DWORD *)this + 10));
    }
    CFramePresentationTelemetry::PresentWindow::Start<unsigned long const &,HWND__ * const &,HWND__ * const &>((CFramePresentationTelemetry::PresentWindow *)v11);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 536LL))(*((_QWORD *)this + 29));
    (*(void (__fastcall **)(struct ITaskWindow *, _QWORD, __int64))(*(_QWORD *)a2 + 208LL))(
      a2,
      *((_QWORD *)this + 15),
      3LL);
    v7 = **((_QWORD **)this + 12);
    if ( v7 && !v4 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 208LL))(v7, *((_QWORD *)this + 15), 1LL);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v9[0] = a2;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v9[1] = this;
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      &v10,
      v11);
    v10 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    CFrameApplicationPresentation::_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___(this, v9);
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 16LL))(a2);
    v11[0] = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  }
  return 0LL;
}
