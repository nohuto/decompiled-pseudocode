/*
 * XREFs of ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x1800C27CC
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x1800BD8A4 (-DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@.c)
 *     ??0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@KIAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x1800C1FB4 (--0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper.c)
 *     ??$emplace_back@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@@Z @ 0x1800C9088 (--$emplace_back@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default_delete.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddDevicePropertyRequest(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        int a4,
        __int64 a5)
{
  __int64 v9; // r8
  void ***v10; // rdx
  _DWORD *v11; // rcx
  char result; // al
  __int64 v13; // rcx
  __int128 v14; // [rsp+48h] [rbp-41h] BYREF
  __int128 v15; // [rsp+58h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-21h]
  void *v17; // [rsp+70h] [rbp-19h]
  void **v18; // [rsp+78h] [rbp-11h] BYREF
  __int128 v19; // [rsp+80h] [rbp-9h]
  __int128 v20; // [rsp+90h] [rbp+7h]
  void ***v21; // [rsp+B0h] [rbp+27h]

  v16 = -2LL;
  v17 = operator new(0xD8uLL);
  *(_QWORD *)&v14 = Windows::Internal::Holographic::SpatialGraphDriverClient::OnDevicePropertyRequestComplete;
  DWORD2(v14) = 0;
  *((_QWORD *)&v15 + 1) = a1;
  v18 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2DevicePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2DevicePropertyRequest &,long>::`vftable';
  v19 = v14;
  v20 = v15;
  v21 = &v18;
  *(_QWORD *)&v14 = Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest(
                      (__int64)v17,
                      a2,
                      v9,
                      a4,
                      a3,
                      a5,
                      (__int64)&v18);
  if ( v21 )
  {
    v10 = &v18;
    LOBYTE(v10) = v21 != &v18;
    ((void (__fastcall *)(void ***, void ***))(*v21)[4])(v21, v10);
    v21 = 0LL;
  }
  std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::emplace_back<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
    a1 + 304,
    &v14);
  v11 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  result = v11 && *v11;
  if ( result )
  {
    HolographicDriverClientTrace::Instance();
    result = HolographicDriverClientTrace::DevicePropertyRequestAdded_(v13, 1, a1 + 80, (__int64)a3);
  }
  if ( (_QWORD)v14 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1LL);
  return result;
}
