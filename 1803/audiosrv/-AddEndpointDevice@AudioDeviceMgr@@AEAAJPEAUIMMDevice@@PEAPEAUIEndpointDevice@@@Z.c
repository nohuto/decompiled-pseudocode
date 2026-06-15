/*
 * XREFs of ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056168
 * Callers:
 *     ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x180055FE8 (-EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180116B30 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18005528C (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x180055FA4 (-GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAP.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800560C8 (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x180056290 (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 *     ?AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800566C0 (-AddDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180116838 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::AddEndpointDevice(
        AudioDeviceMgr *this,
        struct IMMDevice *a2,
        struct IEndpointDevice **a3)
{
  unsigned int v6; // edi
  EndpointDevice *v7; // rbx
  int DataFlow; // eax
  AudioDeviceMgr *v9; // rcx
  __int64 (__fastcall *v10)(EndpointCollection *__hidden, struct IEndpointDevice *); // rax
  unsigned int (__fastcall *v11)(EndpointDevice *__hidden); // rax
  unsigned int (__fastcall *v12)(EndpointDevice *__hidden); // rax
  EndpointDevice *v14; // [rsp+20h] [rbp-20h] BYREF
  EndpointDevice *v15[3]; // [rsp+28h] [rbp-18h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v16; // [rsp+78h] [rbp+38h] BYREF
  int v17; // [rsp+88h] [rbp+48h] BYREF

  v15[1] = (EndpointDevice *)-2LL;
  v6 = 0;
  v14 = 0LL;
  v7 = 0LL;
  v15[0] = 0LL;
  if ( a2 )
  {
    DataFlow = EndpointDevice::CreateInstance(a2, &v14);
    if ( DataFlow < 0
      || (DataFlow = AudioDeviceMgr::GetDataFlow(v9, a2, &v16), DataFlow < 0)
      || (DataFlow = AudioDeviceMgr::GetEndpointCollection(this, v16, v15), v7 = v15[0], DataFlow < 0)
      || ((v10 = *(__int64 (__fastcall **)(EndpointCollection *__hidden, struct IEndpointDevice *))(*(_QWORD *)v15[0]
                                                                                                  + 32LL),
           v10 != EndpointCollection::AddDevice)
        ? (DataFlow = v10(v15[0], v14))
        : (DataFlow = EndpointCollection::AddDevice(v15[0], v14)),
          DataFlow < 0 || (DataFlow = AudioDeviceMgr::CreatePhoneTopology(this, a2, &v17), DataFlow < 0)) )
    {
      v6 = DataFlow;
    }
    else if ( a3 )
    {
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v14, a3);
    }
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v7 )
  {
    v11 = *(unsigned int (__fastcall **)(EndpointDevice *__hidden))(*(_QWORD *)v7 + 16LL);
    if ( v11 == EndpointDevice::Release )
      EndpointDevice::Release(v7);
    else
      v11(v7);
  }
  if ( v14 )
  {
    v12 = *(unsigned int (__fastcall **)(EndpointDevice *__hidden))(*(_QWORD *)v14 + 16LL);
    if ( v12 == EndpointDevice::Release )
      EndpointDevice::Release(v14);
    else
      v12(v14);
  }
  return v6;
}
