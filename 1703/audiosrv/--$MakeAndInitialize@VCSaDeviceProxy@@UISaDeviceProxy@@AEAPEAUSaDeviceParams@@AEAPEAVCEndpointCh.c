/*
 * XREFs of ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18002D0A8
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007600 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x180009A60 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009D40 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000B410 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000BD10 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ??$AsIID@V?$RuntimeClass@U?$InterfaceList@UISaDeviceProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@UISaDeviceProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18002B518 (--$AsIID@V-$RuntimeClass@U-$InterfaceList@UISaDeviceProxy@@U-$InterfaceList@UIInspectable@@VNil@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
        _QWORD *a1,
        const struct SaDeviceParams **a2,
        struct CEndpointCharacteristics **a3,
        enum _AUDCLNT_SHAREMODE *a4,
        unsigned int *a5,
        struct SaDeviceResourceParams **a6)
{
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  int v13; // esi
  const unsigned __int16 *v14; // rdx
  __int64 (__fastcall *v15)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  signed __int64 v17; // rax
  signed __int32 v18; // ecx
  signed __int64 v19; // rtt
  struct IDeviceGraphObjectsStore *v20; // rcx
  void (*v21)(void); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]
  _QWORD *v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp-8h]
  struct IDeviceGraphObjectsStore *v27; // [rsp+80h] [rbp+30h] BYREF

  v26 = -2LL;
  *a1 = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  v11 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = (__int64)v11;
  v25 = v11;
  if ( v11 )
  {
    v11[5] = 1LL;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInspectable'};
    v11[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
    v11[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    v11[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v12 = &CSaDeviceProxy::`vftable'{for `IInspectable'};
    *(_QWORD *)(v12 + 8) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,0>'};
    *(_QWORD *)(v12 + 16) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v12 + 24) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
    *(_QWORD *)(v12 + 48) = 0LL;
    *(_QWORD *)(v12 + 56) = 0LL;
    *(_QWORD *)(v12 + 64) = 0LL;
    *(_QWORD *)(v12 + 80) = 0LL;
    *(_QWORD *)(v12 + 104) = 0LL;
    v10 = v12;
    v24 = v12;
    v25 = 0LL;
    v13 = CSaDeviceProxy::RuntimeClassInitialize((struct SaDeviceParams **)v12, *a2, *a3, *a4, *a5, *a6);
    if ( v13 >= 0 )
      v13 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>>(
              v12,
              &GUID_1b8f81be_457f_4a54_867b_8b6a4c29fdb0,
              a1);
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v10 )
  {
    v27 = 0LL;
    v14 = **(const unsigned __int16 ***)(v10 + 48);
    v15 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
    if ( v15 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
      CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v14, &v27);
    else
      v15(g_DeviceGraphStore, v14, &v27);
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 64LL);
    if ( v16 == CDeviceGraphObjectsStore::Lock )
      CDeviceGraphObjectsStore::Lock((__int64)v27, (__int64)&lpCriticalSection);
    else
      v16((__int64)v27, (__int64)&lpCriticalSection);
    v17 = *(_QWORD *)(v10 + 40);
    while ( v17 >= 0 )
    {
      v18 = v17 - 1;
      v19 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 40), v17 - 1, v17);
      if ( v19 == v17 )
        goto LABEL_14;
    }
    v18 = _InterlockedDecrement((volatile signed __int32 *)(2 * v17 + 16));
LABEL_14:
    if ( !v18 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( lpCriticalSection )
    {
      LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = 0LL;
    }
    v20 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      v21 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
      if ( (char *)v21 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v20);
      else
        v21();
    }
  }
  return (unsigned int)v13;
}
