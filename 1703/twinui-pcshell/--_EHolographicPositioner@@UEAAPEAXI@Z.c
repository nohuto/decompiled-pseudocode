/*
 * XREFs of ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1800E0A08
 * Callers:
 *     ??_EHolographicPositioner@@WCI@EAAPEAXI@Z @ 0x1800E1640 (--_EHolographicPositioner@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1AgileRegistrationList@@QEAA@XZ @ 0x180007BCC (--1AgileRegistrationList@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x1800173E4 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ??1?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006FE08 (--1-$vector@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VMonitorFrame@@@WRL@.c)
 *     ??1?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E0D20 (--1-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

HolographicPositioner *__fastcall HolographicPositioner::`vector deleting destructor'(
        HolographicPositioner *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 52);
  if ( v4 )
  {
    *((_QWORD *)this + 52) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 50);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = *((_QWORD *)this + 49);
  if ( v6 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 48);
  if ( v7 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  AgileRegistrationList::~AgileRegistrationList((HolographicPositioner *)((char *)this + 336));
  wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::~AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>((char *)this + 264);
  std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::~vector<Microsoft::WRL::ComPtr<MonitorFrame>>((__int64)this + 232);
  v8 = *((_QWORD *)this + 28);
  if ( v8 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 27);
  if ( v9 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 25);
  if ( v10 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 24);
  if ( v11 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 23);
  if ( v12 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v12));
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite((HolographicPositioner *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
