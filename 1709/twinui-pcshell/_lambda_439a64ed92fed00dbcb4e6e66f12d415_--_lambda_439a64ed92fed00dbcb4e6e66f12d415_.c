/*
 * XREFs of _lambda_439a64ed92fed00dbcb4e6e66f12d415_::_lambda_439a64ed92fed00dbcb4e6e66f12d415_ @ 0x18015A90C
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801599A4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18015D584 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_439a64ed92fed00dbcb4e6e66f12d415_::_lambda_439a64ed92fed00dbcb4e6e66f12d415_(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _OWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rcx

  v13 = *a2;
  *(_QWORD *)a1 = *a2;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = *a3;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  *(_QWORD *)(a1 + 8) = v14;
  *(_OWORD *)(a1 + 16) = *a4;
  v15 = *a5;
  if ( *a5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*a5);
  *(_QWORD *)(a1 + 32) = v15;
  v16 = *a6;
  if ( *a6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*a6);
  *(_QWORD *)(a1 + 40) = v16;
  v17 = *a7;
  *(_QWORD *)(a1 + 48) = *a7;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 56,
    a8);
  *(_QWORD *)(a1 + 56) = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
  if ( a9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a9 + 8LL))(a9);
  *(_QWORD *)(a1 + 368) = a9;
  if ( a10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 8LL))(a10);
  *(_QWORD *)(a1 + 376) = a10;
  return a1;
}
