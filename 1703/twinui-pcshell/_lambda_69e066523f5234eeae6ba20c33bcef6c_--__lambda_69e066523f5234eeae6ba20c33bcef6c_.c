/*
 * XREFs of _lambda_69e066523f5234eeae6ba20c33bcef6c_::__lambda_69e066523f5234eeae6ba20c33bcef6c_ @ 0x18018C7E8
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18018C438 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??_E?$CTaskWrapper@V_lambda_69e066523f5234eeae6ba20c33bcef6c_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18018D100 (--_E-$CTaskWrapper@V_lambda_69e066523f5234eeae6ba20c33bcef6c_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$5 @ 0x1801A56D1 (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$5.c)
 * Callees:
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018ADF4 (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018AF04 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_69e066523f5234eeae6ba20c33bcef6c_::__lambda_69e066523f5234eeae6ba20c33bcef6c_(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  HRESULT result; // eax

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((_QWORD *)(a1 + 40));
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  result = WindowsDeleteString(*(HSTRING *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
