/*
 * XREFs of _lambda_439a64ed92fed00dbcb4e6e66f12d415_::__lambda_439a64ed92fed00dbcb4e6e66f12d415_ @ 0x18015AA44
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801599A4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ??_E?$XamlExplorerHostWindowCreatedCallback@V_lambda_439a64ed92fed00dbcb4e6e66f12d415_@@@@UEAAPEAXI@Z @ 0x18015FBA0 (--_E-$XamlExplorerHostWindowCreatedCallback@V_lambda_439a64ed92fed00dbcb4e6e66f12d415_@@@@UEAAPE.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$10 @ 0x1801F1441 (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$10.c)
 * Callees:
 *     ??1?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180156E04 (--1-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015CE44 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_439a64ed92fed00dbcb4e6e66f12d415_::__lambda_439a64ed92fed00dbcb4e6e66f12d415_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = a1[47];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[46];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  a1[7] = (__int64)&XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 7);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)(a1 + 7));
  v4 = a1[6];
  if ( v4 )
  {
    a1[6] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[5];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a1[4];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = a1[1];
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
