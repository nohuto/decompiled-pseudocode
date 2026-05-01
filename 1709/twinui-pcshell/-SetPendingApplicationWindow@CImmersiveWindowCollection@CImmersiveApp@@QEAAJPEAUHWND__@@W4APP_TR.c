/*
 * XREFs of ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x18005B05C
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180057780 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     WPP_SF_q @ 0x1800525B0 (WPP_SF_q.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x18005AFC4 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005BA88 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C3BC (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C448 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005F4DC (-StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow(__int64 a1, HWND a2, int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v13[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+50h] [rbp-B0h]
  int *v16; // [rsp+58h] [rbp-A8h]
  int *v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+68h] [rbp-98h] BYREF
  char v19; // [rsp+6Ch] [rbp-94h]
  int v20; // [rsp+90h] [rbp-70h] BYREF
  const char *v21; // [rsp+98h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-60h]
  char v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  _BYTE v25[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+148h] [rbp+48h]
  __int64 v27; // [rsp+150h] [rbp+50h]
  __int64 v28; // [rsp+158h] [rbp+58h]
  __int64 v29; // [rsp+160h] [rbp+60h]

  v13[1] = -2LL;
  v6 = *(_QWORD *)(a1 + 144);
  v7 = 0;
  v14[1] = 0LL;
  v14[2] = v14;
  v14[3] = 0LL;
  v15 = 0;
  v16 = &v20;
  v17 = &v18;
  v18 = 0;
  v19 = 0;
  v23 = 0;
  v20 = 0;
  v21 = "SetPendingApplicationWindow";
  v22 = 0LL;
  v24 = 1LL;
  v26 = 0LL;
  v27 = 0LL;
  memset(v25, 0, sizeof(v25));
  v28 = 0LL;
  v29 = 0LL;
  v14[0] = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  CImmersiveAppTelemetry::SetPendingApplicationWindow::StartActivity(
    (CImmersiveAppTelemetry::SetPendingApplicationWindow *)v14,
    *(const unsigned __int16 **)(v6 + 544));
  if ( a2 != *(HWND *)(a1 + 120) )
  {
    if ( *(_QWORD *)(a1 + 120) )
      CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow((CImmersiveApp::CImmersiveWindowCollection *)a1);
    CImmersiveApp::CImmersiveWindowCollection::_FindWindow((CImmersiveApp::CImmersiveWindowCollection *)a1, a2, v13);
    if ( *(_BYTE *)(a1 + 184) )
    {
      *(_DWORD *)(a1 + 128) = a3;
      v8 = v13[0];
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v13[0]);
      *(_QWORD *)(a1 + 120) = a2;
      if ( *(_QWORD *)(a1 + 112) != v9 )
      {
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        v10 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 112) = v9;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v8);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 208LL))(v11, 0LL, 2LL);
      CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)a1);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Au,
          &WPP_6f54c26325303d06ba2693269ff4d199_Traceguids,
          *(_QWORD *)(a1 + 120));
    }
    else
    {
      v7 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
             (CImmersiveApp::CImmersiveWindowCollection *)a1,
             a2);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14, v7);
  v14[0] = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
  return v7;
}
