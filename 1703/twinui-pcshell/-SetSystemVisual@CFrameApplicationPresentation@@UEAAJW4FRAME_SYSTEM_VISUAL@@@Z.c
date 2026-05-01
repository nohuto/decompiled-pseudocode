/*
 * XREFs of ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180066C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     WPP_SF_Ld @ 0x1800392C0 (WPP_SF_Ld.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x180065C5C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180065CE4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ??$Start@AEBKAEBQEAUHWND__@@AEAW4FRAME_SYSTEM_VISUAL@@@SetSystemVisual@CFramePresentationTelemetry@@SA?AV01@AEBKAEBQEAUHWND__@@AEAW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18006A098 (--$Start@AEBKAEBQEAUHWND__@@AEAW4FRAME_SYSTEM_VISUAL@@@SetSystemVisual@CFramePresentationTelemet.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___ @ 0x18006A21C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18006E9D0 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18006E9D0.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::SetSystemVisual(__int64 a1, int a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+28h] [rbp-E0h]
  _DWORD v7[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+48h] [rbp-C0h]
  _QWORD v9[2]; // [rsp+50h] [rbp-B8h] BYREF
  void **v10; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v11[40]; // [rsp+198h] [rbp+90h] BYREF

  v8 = -2LL;
  v7[0] = a2;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = *(_DWORD *)(a1 + 40);
    WPP_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_a1658e10cf12387b63d474d4cc4de9d3_Traceguids, a2, v6);
  }
  CFramePresentationTelemetry::SetSystemVisual::Start<unsigned long const &,HWND__ * const &,enum FRAME_SYSTEM_VISUAL &>(
    v11,
    a1 + 40,
    *(_QWORD *)(a1 + 104),
    v7);
  v4 = **(_QWORD **)(a1 + 96);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 208LL))(v4, *(_QWORD *)(a1 + 120), 3LL);
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7,
    (struct CFrameApplicationPresentation *)a1);
  if ( a2 != *(_DWORD *)(a1 + 200) )
    *(_BYTE *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 200) = a2;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v7);
  LODWORD(v9[0]) = a2;
  v9[1] = a1;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    &v10,
    v11);
  v10 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFrameApplicationPresentation::_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___(a1, v9);
  v11[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  return 0LL;
}
