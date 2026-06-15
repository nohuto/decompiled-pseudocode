/*
 * XREFs of ?CopyTo@?$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z @ 0x180056644
 * Callers:
 *     ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x180055FA4 (-GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAP.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18011686C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 * Callees:
 *     ?AddRef@EndpointCollection@@UEAAKXZ @ 0x180056820 (-AddRef@EndpointCollection@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<IEndpointCollection>::CopyTo(EndpointCollection **a1, EndpointCollection **a2)
{
  EndpointCollection *v2; // rcx
  void (*v3)(void); // rax

  if ( !a2 )
    return 2147500035LL;
  *a2 = *a1;
  v2 = *a1;
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v3 == (char *)EndpointCollection::AddRef )
      EndpointCollection::AddRef(v2);
    else
      v3();
  }
  return 0LL;
}
