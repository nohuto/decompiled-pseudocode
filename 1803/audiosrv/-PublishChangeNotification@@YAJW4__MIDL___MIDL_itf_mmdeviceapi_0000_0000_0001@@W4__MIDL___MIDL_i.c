/*
 * XREFs of ?PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x1800FD3C0
 * Callers:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z @ 0x1800FC970 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY06H@Z.c)
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800FD46C (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PublishChangeNotification(unsigned int a1, unsigned int a2, __int64 a3)
{
  HRESULT v6; // ebx
  LPVOID v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v6 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_a00ffdbb_aba1_46f4_8225_b7499a6a9949,
         &v8);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64, _DWORD))(*(_QWORD *)v8 + 96LL))(v8, a1, a2, a3, 0);
  if ( v8 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v6;
}
