/*
 * XREFs of ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180055EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800583A0 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ??$Start@AEAPEAG@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x18005B84C (--$Start@AEAPEAG@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@SA-AV01@AEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::GetWindowAndPrepareForActivation(__int64 a1, char a2, _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v11[40]; // [rsp+30h] [rbp-168h] BYREF

  v10[1] = -2LL;
  CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::Start<unsigned short * &>((CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *)v11);
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 560) || (*(_BYTE *)(a1 + 408) & 1) == 0 && (*(_DWORD *)(a1 + 408) & 8) == 0 )
  {
    v6 = -2147019873;
    goto LABEL_18;
  }
  if ( (a2 & 1) == 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1) )
  {
    v6 = -2147023598;
    goto LABEL_18;
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136)) )
  {
    *a3 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136));
LABEL_13:
    v10[0] = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 272) + 128LL))(*(_QWORD *)(a1 + 272), v10);
    if ( v6 >= 0 )
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v10[0] + 24LL))(v10[0], a3);
    v8 = v10[0];
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_18;
  }
  v7 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 288) + 128LL))(**(_QWORD **)(a1 + 288)) )
    v7 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 288) + 32LL))(**(_QWORD **)(a1 + 288));
  v6 = v7 == 0 ? 0x80070005 : 0;
  if ( v7 )
  {
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 136);
    goto LABEL_13;
  }
LABEL_18:
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, v6);
  v11[0] = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  return (unsigned int)v6;
}
