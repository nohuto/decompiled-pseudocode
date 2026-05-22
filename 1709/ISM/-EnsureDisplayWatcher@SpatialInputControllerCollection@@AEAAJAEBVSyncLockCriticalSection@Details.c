/*
 * XREFs of ?EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18009483C
 * Callers:
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180095644 (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091840 (-EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrap.c)
 *     ??$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVSpatialInputControllerCollection@@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInputControllerCollection@@$$QEA_N@Z @ 0x180098390 (--$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holograp.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialInputControllerCollection::EnsureDisplayWatcher(
        SpatialInputControllerCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  SpatialInputControllerCollection *v9; // rcx
  __int64 v10; // rcx
  SpatialInputControllerCollection *v11; // rax
  SpatialInputControllerCollection *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  SpatialInputControllerCollection *v15; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v18; // [rsp+68h] [rbp+28h] BYREF
  SpatialInputControllerCollection *v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v18 = a2;
  v16[1] = -2LL;
  v3 = SpatialInputControllerCollection::EnsureResources(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5C3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  if ( !*((_QWORD *)this + 388) )
  {
    if ( !*((_QWORD *)this + 398) )
    {
      v4 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x8000FFFFLL);
      return v4;
    }
    v20 = 0LL;
    v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 398))(
           *((_QWORD *)this + 398),
           &GUID_e464b452_7eb3_434b_95d6_1339477e80c7,
           &v20);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5CA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v6);
LABEL_19:
      v10 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return v4;
    }
    v19 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, SpatialInputControllerCollection **))(*(_QWORD *)v20 + 48LL))(v20, &v19);
    v4 = v7;
    if ( v7 < 0 )
    {
      v8 = 1485LL;
      goto LABEL_17;
    }
    LOBYTE(v18) = 1;
    v15 = this;
    v16[0] = v19;
    v7 = ((__int64 (__fastcall *)(char *, _QWORD *, SpatialInputControllerCollection **, const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection **))Microsoft::WRL::Details::MakeAndInitialize<DisplayChangedHandler,DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,SpatialInputControllerCollection *,bool>)(
           (char *)this + 3088,
           v16,
           &v15,
           &v18);
    v4 = v7;
    if ( v7 < 0 )
    {
      v8 = 1487LL;
      goto LABEL_17;
    }
    LOBYTE(v18) = 0;
    v16[0] = this;
    v15 = v19;
    v7 = ((__int64 (__fastcall *)(char *, SpatialInputControllerCollection **, _QWORD *, const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection **))Microsoft::WRL::Details::MakeAndInitialize<DisplayChangedHandler,DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,SpatialInputControllerCollection *,bool>)(
           (char *)this + 3096,
           &v15,
           v16,
           &v18);
    v4 = v7;
    if ( v7 < 0 )
    {
      v8 = 1488LL;
      goto LABEL_17;
    }
    v7 = (*(__int64 (__fastcall **)(SpatialInputControllerCollection *))(*(_QWORD *)v19 + 120LL))(v19);
    v4 = v7;
    if ( v7 < 0 )
    {
      v8 = 1490LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v7);
      v9 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(SpatialInputControllerCollection *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      goto LABEL_19;
    }
    v11 = v19;
    v12 = 0LL;
    v19 = 0LL;
    v13 = *((_QWORD *)this + 388);
    *((_QWORD *)this + 388) = v11;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v12 = v19;
    }
    if ( v12 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(SpatialInputControllerCollection *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return 0LL;
}
