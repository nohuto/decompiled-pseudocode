/*
 * XREFs of ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x18007124C
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180071130 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029500 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18006EB84 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x18006EC74 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18006EE1C (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x18007558C (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialRimDeviceCollection::DoDeviceAttach(void **this, unsigned int a2, struct DeviceInfo *a3)
{
  unsigned int *v6; // r9
  int DeviceId; // eax
  int v8; // edi
  char *v9; // rax
  char *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  char *v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  struct RIMDevice *v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+58h] [rbp-A8h]
  _QWORD *v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  __int128 v26; // [rsp+78h] [rbp-88h]
  _QWORD *v27; // [rsp+88h] [rbp-78h]
  char v28; // [rsp+90h] [rbp-70h]
  _QWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+C0h] [rbp-40h]
  int *v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+D8h] [rbp-28h] BYREF
  char v34; // [rsp+DCh] [rbp-24h]
  int v35; // [rsp+100h] [rbp+0h] BYREF
  const char *v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  char v38; // [rsp+118h] [rbp+18h]
  __int64 v39; // [rsp+120h] [rbp+20h]
  char v40[144]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v41; // [rsp+1B8h] [rbp+B8h]
  __int64 v42; // [rsp+1C0h] [rbp+C0h]
  __int64 v43; // [rsp+1C8h] [rbp+C8h]
  __int64 v44; // [rsp+1D0h] [rbp+D0h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v25 = -2LL;
  v20 = 0;
  v19 = 0;
  v29[1] = 0LL;
  v29[2] = v29;
  v29[3] = 0LL;
  v30 = 0;
  v31 = &v35;
  v32 = &v33;
  v33 = 0;
  v34 = 0;
  v38 = 0;
  v35 = 0;
  v36 = "DeviceAttached";
  v37 = 0LL;
  v39 = 1LL;
  v41 = 0LL;
  memset_0(v40, 0, sizeof(v40));
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v29[0] = &RawInputProvidersTracing::DeviceAttached::`vftable';
  RawInputProvidersTracing::DeviceAttached::StartActivity((RawInputProvidersTracing::DeviceAttached *)v29, a2);
  *(_QWORD *)&v23 = &v20;
  *((_QWORD *)&v23 + 1) = &v19;
  v24 = v29;
  v26 = v23;
  v27 = v29;
  v28 = 1;
  v22 = 0LL;
  DeviceId = RIMDeviceCollection::FindDeviceId((RIMDeviceCollection *)this, a2, &v22, v6);
  v8 = DeviceId;
  v20 = DeviceId;
  if ( DeviceId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
    goto LABEL_17;
  }
  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
  v19 = MPCInputInfoHelper::m_nextSpectrumId;
  v21 = 0LL;
  v9 = (char *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
LABEL_10:
    v14 = (unsigned int)v8;
    v15 = 352LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)v14);
    goto LABEL_15;
  }
  v11 = v9 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *((_DWORD *)v10 + 11) = 1;
  *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::SpatialInteractions::IHidDevice'};
  *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v10 = &Windows::Internal::SpatialInteractions::SpatialRimDevice::`vftable'{for `Windows::Internal::SpatialInteractions::IHidDevice'};
  *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)v10 + 13) = 0;
  *((_WORD *)v10 + 28) = 0;
  *((_QWORD *)v10 + 8) = 0LL;
  memset_0(v10 + 72, 0, 0x40uLL);
  *((_QWORD *)v10 + 17) = 0LL;
  *((_QWORD *)v10 + 18) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *((_QWORD *)v10 + 19) = 0LL;
  *((_QWORD *)v10 + 20) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *((_QWORD *)v10 + 21) = 0LL;
  v8 = Windows::Internal::SpatialInteractions::SpatialRimDevice::RuntimeClassInitialize(
         (Windows::Internal::SpatialInteractions::SpatialRimDevice *)v10,
         v22,
         this[10]);
  v12 = *(_QWORD *)v10;
  v13 = v10;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(char *, GUID *, __int64 *))v12)(
           v10,
           &GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f,
           &v21);
    v12 = *(_QWORD *)v10;
    v13 = v10;
  }
  (*(void (__fastcall **)(char *))(v12 + 16))(v13);
  if ( v8 < 0 )
    goto LABEL_10;
  v16 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, __int64, char *, unsigned __int64))(*(_QWORD *)this[347]
                                                                                             + 32LL))(
          this[347],
          a2,
          v19,
          v21,
          (char *)a3 + 56,
          (unsigned __int64)(this + 345) & -(__int64)(this != 0LL));
  v8 = v16;
  if ( v16 < 0 )
  {
    v14 = (unsigned int)v16;
    v15 = 356LL;
    goto LABEL_13;
  }
  v8 = 0;
LABEL_15:
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_17:
  RawInputProvidersTracing::DeviceAttached::Stop((RawInputProvidersTracing::DeviceAttached *)v29, v20, v19);
  RawInputProvidersTracing::DeviceAttached::~DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v29);
  return (unsigned int)v8;
}
