/*
 * XREFs of ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002B80
 * Callers:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64___::_)(IInspectable_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_e4930aad52d023ff94aaea99e79990d9___1_IInspectable_____ptr64_Windows::System::IAppMemoryUsageLimitChangingEventArgs_____ptr64___lambda_e4930aad52d023ff94aaea99e79990d9___ @ 0x180001D80 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     ??0?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180001FD0 (--0-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@UIMemoryManagerStatic.c)
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AEA_K0@Z @ 0x1800023C0 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

Microsoft::WRL::FtmBase *__fastcall Microsoft::WRL::FtmBase::FtmBase(Microsoft::WRL::FtmBase *this)
{
  __int64 v2; // rcx
  LPUNKNOWN v3; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::FtmBase::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  ppunkMarshal = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v2 = *((_QWORD *)this + 4);
    if ( v2 )
    {
      *((_QWORD *)this + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &GUID_00000003_0000_0000_c000_000000000046,
      (char *)this + 32);
  }
  v3 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v3->lpVtbl->Release)(v3);
  }
  return this;
}
