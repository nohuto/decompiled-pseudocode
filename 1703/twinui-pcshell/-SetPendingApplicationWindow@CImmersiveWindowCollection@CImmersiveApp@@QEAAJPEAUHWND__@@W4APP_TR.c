/*
 * XREFs of ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1800589A0
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180055340 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     WPP_SF_q @ 0x180050080 (WPP_SF_q.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180058908 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059230 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x1800599B0 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180059A3C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ??$Start@AEAPEAG@SetPendingApplicationWindow@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x18005BD3C (--$Start@AEAPEAG@SetPendingApplicationWindow@CImmersiveAppTelemetry@@SA-AV01@AEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(__int64 a1, HWND a2, int a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v12[2]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v13[40]; // [rsp+30h] [rbp-168h] BYREF

  v12[1] = -2LL;
  CImmersiveAppTelemetry::SetPendingApplicationWindow::Start<unsigned short * &>((CImmersiveAppTelemetry::SetPendingApplicationWindow *)v13);
  v6 = 0;
  if ( a2 != *(HWND *)(a1 + 120) )
  {
    if ( *(_QWORD *)(a1 + 120) )
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow((CImmersiveApp::CImmersiveWindowCollection *)a1);
    CImmersiveApp::CImmersiveWindowCollection::_FindWindow((CImmersiveApp::CImmersiveWindowCollection *)a1, a2, v12);
    if ( *(_BYTE *)(a1 + 184) )
    {
      *(_DWORD *)(a1 + 128) = a3;
      v7 = v12[0];
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v12[0]);
      *(_QWORD *)(a1 + 120) = a2;
      if ( *(_QWORD *)(a1 + 112) != v8 )
      {
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v9 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 112) = v8;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v7);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 208LL))(v10, 0LL, 2LL);
      CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)a1);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Au,
          &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids,
          *(_QWORD *)(a1 + 120));
    }
    else
    {
      v6 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
             (CImmersiveApp::CImmersiveWindowCollection *)a1,
             a2);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, v6);
  v13[0] = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  return v6;
}
