/*
 * XREFs of ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x180116A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x180116838 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180116B30 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioDeviceMgr::GetDefaultAudioEndpointForPolicy(
        AudioDeviceMgr *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v6; // edi
  EndpointDevice *v7; // rbx
  int v8; // eax
  int EndpointDevice; // eax
  __int64 (__fastcall *v10)(EndpointDevice *); // rax
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-18h] BYREF
  struct IEndpointDevice *v14; // [rsp+70h] [rbp+20h] BYREF

  v13[1] = -2LL;
  v6 = 0;
  v7 = 0LL;
  v14 = 0LL;
  v13[0] = 0LL;
  pv = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD *))(**((_QWORD **)a1 + 6) + 64LL))(
         *((_QWORD **)a1 + 6),
         a2,
         a3,
         v13);
  if ( v8 < 0 || (v8 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v13[0] + 40LL))(v13[0], &pv), v8 < 0) )
  {
    v6 = v8;
  }
  else
  {
    EndpointDevice = AudioDeviceMgr::GetEndpointDevice(a1, (const unsigned __int16 *)pv, 0LL, &v14);
    if ( EndpointDevice >= 0 )
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v14, a4);
    else
      v6 = EndpointDevice;
    v7 = v14;
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  if ( v7 )
  {
    v10 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v7 + 16LL);
    if ( v10 == EndpointDevice::Release )
      EndpointDevice::Release(v7);
    else
      v10(v7);
  }
  return v6;
}
