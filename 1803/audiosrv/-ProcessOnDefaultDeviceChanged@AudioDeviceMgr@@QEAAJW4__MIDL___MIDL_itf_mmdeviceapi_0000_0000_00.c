/*
 * XREFs of ?ProcessOnDefaultDeviceChanged@AudioDeviceMgr@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180116F64
 * Callers:
 *     ?Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x180116F20 (-Process@DefaultDeviceChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180116B30 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::ProcessOnDefaultDeviceChanged(
        AudioDeviceMgr *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4)
{
  unsigned int v7; // edi
  int EndpointDevice; // eax
  EndpointDevice *v9; // rbx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(EndpointDevice *); // rax
  EndpointDevice *v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v13[1] = (EndpointDevice *)-2LL;
  v7 = 0;
  v13[0] = 0LL;
  EndpointDevice = AudioDeviceMgr::GetEndpointDevice(a1, a4, 0LL, v13);
  v9 = v13[0];
  if ( EndpointDevice >= 0 )
  {
    v10 = *((_QWORD *)a1 + 5);
    if ( v10 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, EndpointDevice *))(*(_QWORD *)v10 + 48LL))(v10, a2, a3, v13[0]);
  }
  else
  {
    v7 = EndpointDevice;
  }
  if ( v9 )
  {
    v11 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v9 + 16LL);
    if ( v11 == EndpointDevice::Release )
      EndpointDevice::Release(v9);
    else
      v11(v9);
  }
  return v7;
}
