/*
 * XREFs of ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800748E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerProvider@SpatialInteractionDevices@@UITimerElapsedHandler@Threading@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180062D64 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerProvider@S.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?TelemetrySpatialInteractionDeviceClosed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WPEAX@Z @ 0x180074000 (-TelemetrySpatialInteractionDeviceClosed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ?RemoveSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180078030 (-RemoveSpatialInteractionDevice@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBV-.c)
 *     ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x18007C9FC (-HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
SpatialInteractionDevice *__fastcall SpatialInteractionDevice::`scalar deleting destructor'(
        SpatialInteractionDevice *this,
        char a2)
{
  __int64 v4; // rdi
  void *v5; // rsi
  const wchar_t *v6; // rdi
  _DWORD *v7; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v8; // rcx
  struct SpatialInteractionDevices::HID_HANDLE *v9; // rdx

  *(_QWORD *)this = &SpatialInteractionDevice::`vftable'{for `ISpatialInteractionDevice'};
  *((_QWORD *)this + 1) = &SpatialInteractionDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::CloakedIid<ISpatialInteractionDevicePrivate>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &SpatialInteractionDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISpatialInteractionDevicePrivate>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISpatialInteractionDevice,Microsoft::WRL::CloakedIid<ISpatialInteractionDevicePrivate>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    v5 = *(void **)(v4 + 8);
    v6 = (const wchar_t *)(v4 + 16);
    if ( *((_QWORD *)v6 + 3) >= 8uLL )
      v6 = *(const wchar_t **)v6;
    v7 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v7 && *v7 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::TelemetrySpatialInteractionDeviceClosed_(v8, v6, v5);
    }
    Windows::Internal::Holographic::HolographicDeviceSnapshot::RemoveSpatialInteractionDevice(*((_QWORD *)this + 11) + 16LL);
    SpatialInteractionDevices::Internal::HIDClose(*((SpatialInteractionDevices::Internal **)this + 11), v9);
    *((_QWORD *)this + 11) = 0LL;
  }
  WindowsDeleteString(*((HSTRING *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
