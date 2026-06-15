/*
 * XREFs of ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18011686C
 * Callers:
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180116B30 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x180117024 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x180055FA4 (-GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAP.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800560C8 (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z @ 0x180056644 (-CopyTo@-$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::FindEndpointDeviceInCollection(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        struct IEndpointDevice **a3,
        struct IEndpointCollection **a4)
{
  unsigned int v8; // edi
  EndpointDevice *v9; // rbx
  int DataFlow; // eax
  AudioDeviceMgr *v11; // rcx
  __int64 (__fastcall *v12)(EndpointDevice *); // rax
  struct IEndpointCollection *v14; // [rsp+20h] [rbp-38h] BYREF
  struct IMMDevice *v15[6]; // [rsp+28h] [rbp-30h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v16; // [rsp+68h] [rbp+10h] BYREF

  v15[1] = (struct IMMDevice *)-2LL;
  v8 = 0;
  v15[0] = 0LL;
  v9 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      DataFlow = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 6)
                                                                                                  + 40LL))(
                   *((_QWORD *)this + 6),
                   a2,
                   v15);
      if ( DataFlow < 0
        || (DataFlow = AudioDeviceMgr::GetDataFlow(v11, v15[0], &v16), DataFlow < 0)
        || (DataFlow = AudioDeviceMgr::GetEndpointCollection(this, v16, &v14), v9 = v14, DataFlow < 0)
        || (DataFlow = (*(__int64 (__fastcall **)(struct IEndpointCollection *, const unsigned __int16 *, struct IEndpointDevice **))(*(_QWORD *)v14 + 48LL))(
                         v14,
                         a2,
                         a3),
            DataFlow < 0) )
      {
        v8 = DataFlow;
      }
      else if ( a4 )
      {
        ATL::CComPtrBase<IEndpointCollection>::CopyTo(&v14, a4);
      }
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v9 )
  {
    v12 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v9 + 16LL);
    if ( v12 == EndpointDevice::Release )
      EndpointDevice::Release(v9);
    else
      v12(v9);
  }
  if ( v15[0] )
    ((void (__fastcall *)(struct IMMDevice *))v15[0]->lpVtbl->Release)(v15[0]);
  return v8;
}
