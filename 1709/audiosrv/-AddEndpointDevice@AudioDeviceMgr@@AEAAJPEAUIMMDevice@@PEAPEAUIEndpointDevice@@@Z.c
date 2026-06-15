/*
 * XREFs of ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E6968
 * Callers:
 *     ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x1800E6EDC (-EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x1800E7CA0 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x1800E6BF4 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x1800E6D14 (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E7248 (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?UpdateEndpointDevices@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4EndpointCapability@@@Z @ 0x1800E7FE0 (-UpdateEndpointDevices@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4En.c)
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E9320 (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::AddEndpointDevice(
        struct IUnknown **this,
        struct IMMDevice *a2,
        struct IEndpointDevice **a3)
{
  unsigned int v6; // ebx
  int Instance; // eax
  AudioDeviceMgr *v8; // rcx
  struct IUnknown *v9; // rcx
  int v11; // [rsp+20h] [rbp-20h] BYREF
  struct IUnknown *v12; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+68h] [rbp+28h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v15; // [rsp+78h] [rbp+38h] BYREF

  v13[1] = -2LL;
  v6 = 0;
  v12 = 0LL;
  v13[0] = 0LL;
  v14 = 0;
  if ( !a2 )
  {
    v6 = -2147024809;
    goto LABEL_23;
  }
  Instance = EndpointDevice::CreateInstance(a2, (struct IEndpointDevice **)&v12);
  if ( Instance < 0 )
    goto LABEL_4;
  Instance = AudioDeviceMgr::GetDataFlow(v8, a2, &v15);
  if ( Instance < 0 )
    goto LABEL_4;
  Instance = ((__int64 (__fastcall *)(struct IUnknown **, _QWORD, _QWORD *))(*this)[3].lpVtbl)(
               this,
               (unsigned int)v15,
               v13);
  if ( Instance < 0 )
    goto LABEL_4;
  Instance = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(*(_QWORD *)v13[0] + 32LL))(v13[0], v12);
  if ( Instance < 0 )
    goto LABEL_4;
  Instance = AudioDeviceMgr::CreatePhoneTopology((AudioDeviceMgr *)this, a2, &v14);
  if ( Instance < 0 )
    goto LABEL_4;
  if ( v14 )
  {
    Instance = AudioDeviceMgr::UpdateEndpointDevices(this, 0LL);
    if ( Instance < 0 )
    {
LABEL_4:
      v6 = Instance;
      goto LABEL_23;
    }
    Instance = AudioDeviceMgr::UpdateEndpointDevices(this, 1LL);
  }
  else
  {
    v9 = this[10];
    if ( !v9 )
      goto LABEL_16;
    Instance = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown *))v9->lpVtbl[7].QueryInterface)(v9, v12);
  }
  if ( Instance < 0 )
    goto LABEL_4;
LABEL_16:
  v11 = 0;
  Instance = ((__int64 (__fastcall *)(struct IUnknown *, int *))v12->lpVtbl[3].AddRef)(v12, &v11);
  if ( Instance < 0 )
    goto LABEL_4;
  if ( v15 == eRender && v11 && this[11] != v12 )
    ATL::AtlComPtrAssign(this + 11, v12);
  if ( a3 )
    ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v12, a3);
LABEL_23:
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  if ( v12 )
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  return v6;
}
