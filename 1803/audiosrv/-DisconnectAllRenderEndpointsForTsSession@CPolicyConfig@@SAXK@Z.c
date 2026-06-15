/*
 * XREFs of ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800BB67C
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800BFAD0 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800B4974 (-DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdevice.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(unsigned int a1)
{
  int AudioSessionManagerProvider; // eax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v3; // r8d
  int *v4; // rbx
  __int64 (__fastcall *v5)(int *); // rax
  CAudioSessionManagerProvider *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v6);
  v4 = (int *)v6;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::DisconnectSessionsForTsSession(v6, a1, v3);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v4);
    else
      v5(v4);
  }
}
