/*
 * XREFs of ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x18009BD44
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x18009F710 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180025E10 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18009501C (-DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdevice.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(unsigned int a1)
{
  int AudioSessionManagerProvider; // eax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v3; // r8d
  CAudioSessionManagerProvider *v4; // rbx
  __int64 (__fastcall *v5)(volatile signed __int32 *); // rax
  CAudioSessionManagerProvider *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v6);
  v4 = v6;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::DisconnectSessionsForTsSession(v6, a1, v3);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v4);
    else
      v5((volatile signed __int32 *)v4);
  }
}
