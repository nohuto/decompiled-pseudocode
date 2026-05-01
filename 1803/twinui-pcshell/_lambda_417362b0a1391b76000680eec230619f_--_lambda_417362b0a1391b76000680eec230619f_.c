/*
 * XREFs of _lambda_417362b0a1391b76000680eec230619f_::_lambda_417362b0a1391b76000680eec230619f_ @ 0x180179F94
 * Callers:
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x18017AB4C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18017A0A8 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18017A0A8.c)
 */

__int64 *__fastcall lambda_417362b0a1391b76000680eec230619f_::_lambda_417362b0a1391b76000680eec230619f_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rcx

  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  a1[1] = *a3;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1 + 1);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 2));
  a1[2] = (__int64)&QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  return a1;
}
