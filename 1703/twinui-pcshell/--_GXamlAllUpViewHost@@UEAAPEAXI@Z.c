/*
 * XREFs of ??_GXamlAllUpViewHost@@UEAAPEAXI@Z @ 0x18012CC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006FE08 (--1-$vector@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VMonitorFrame@@@WRL@.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U?$InterfaceList@UIXamlViewHost@@U?$InterfaceList@UIAllUpViewHostInternal@@U?$InterfaceList@UITabletModeChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18012F2C8 (--1-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U-$InterfaceL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
XamlAllUpViewHost *__fastcall XamlAllUpViewHost::`scalar deleting destructor'(XamlAllUpViewHost *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::~vector<Microsoft::WRL::ComPtr<MonitorFrame>>((__int64)this + 232);
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    v5 = *((_QWORD *)this + 28);
    if ( v5 )
    {
      *((_QWORD *)this + 28) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = *((_QWORD *)this + 28);
  if ( v6 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 25);
  if ( v7 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 22);
  if ( v10 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 21);
  if ( v11 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 20);
  if ( v12 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 19);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 18);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAllUpViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::InterfaceList<IAllUpViewHostInternal,Microsoft::WRL::Details::InterfaceList<ITabletModeChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAllUpViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::InterfaceList<IAllUpViewHostInternal,Microsoft::WRL::Details::InterfaceList<ITabletModeChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
