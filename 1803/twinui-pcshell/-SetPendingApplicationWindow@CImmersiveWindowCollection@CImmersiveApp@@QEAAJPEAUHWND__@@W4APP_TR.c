/*
 * XREFs of ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801306C4
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801303A0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000FE20 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180010108 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C23C (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180130604 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180130C24 (-StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180131984 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     WPP_SF_q @ 0x180132BE4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(__int64 a1, HWND a2, int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v14[2]; // [rsp+20h] [rbp-188h] BYREF
  _QWORD v15[40]; // [rsp+30h] [rbp-178h] BYREF

  v14[1] = -2LL;
  v6 = *(_QWORD *)(a1 + 144);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v15,
    (__int64)"SetPendingApplicationWindow");
  v15[0] = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  CImmersiveAppTelemetry::SetPendingApplicationWindow::StartActivity(
    (CImmersiveAppTelemetry::SetPendingApplicationWindow *)v15,
    *(const unsigned __int16 **)(v6 + 544));
  v7 = 0;
  if ( a2 != *(HWND *)(a1 + 120) )
  {
    if ( *(_QWORD *)(a1 + 120) )
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow((CImmersiveApp::CImmersiveWindowCollection *)a1);
    CImmersiveApp::CImmersiveWindowCollection::_FindWindow((CImmersiveApp::CImmersiveWindowCollection *)a1, a2, v14);
    if ( *(_BYTE *)(a1 + 184) )
    {
      *(_DWORD *)(a1 + 128) = a3;
      v8 = v14[0];
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v14[0]);
      *(_QWORD *)(a1 + 120) = a2;
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 112), v9);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v8);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 208LL))(v10, 0LL, 2LL);
      CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        (CImmersiveApp::CImmersiveWindowCollection *)a1,
        v11,
        v12);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          26LL,
          &WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids,
          *(_QWORD *)(a1 + 120));
    }
    else
    {
      v7 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
             (CImmersiveApp::CImmersiveWindowCollection *)a1,
             a2);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15, v7);
  v15[0] = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v15);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
  return v7;
}
