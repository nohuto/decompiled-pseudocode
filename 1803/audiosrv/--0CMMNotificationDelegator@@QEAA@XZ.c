/*
 * XREFs of ??0CMMNotificationDelegator@@QEAA@XZ @ 0x1800C7D98
 * Callers:
 *     ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsoft@@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAVWeakRef@12@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800C78A4 (--$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsof.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

CMMNotificationDelegator *__fastcall CMMNotificationDelegator::CMMNotificationDelegator(CMMNotificationDelegator *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &CMMNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CMMNotificationDelegator::`vftable';
  *((_QWORD *)this + 1) = &CMMNotificationDelegator::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &CMMNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  return this;
}
