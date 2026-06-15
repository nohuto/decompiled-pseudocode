/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800BB6F4
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001760C (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800BB5A0 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDFF8 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800BF2D0 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPolicyConfig::DisconnectHelper(struct IMMDevice *a1)
{
  int AudioSessionManagerProvider; // eax
  int *v3; // rbx
  __int64 (__fastcall *v4)(CAudioSessionManager *); // rax
  __int64 (__fastcall *v5)(int *); // rax
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF
  CAudioSessionManager *v7; // [rsp+60h] [rbp+30h] BYREF
  struct CAudioSessionManagerProvider *v8; // [rsp+68h] [rbp+38h] BYREF

  v8 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v8);
  v3 = (int *)v8;
  if ( AudioSessionManagerProvider >= 0 )
  {
    v7 = 0LL;
    pv = 0LL;
    if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv) >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x11u,
          (__int64)&WPP_143dd52affcd33359900bde90742b95f_Traceguids,
          (const wchar_t *)pv);
      }
      if ( !(*(unsigned int (__fastcall **)(int *, LPVOID, CAudioSessionManager **))(*(_QWORD *)v3 + 40LL))(v3, pv, &v7) )
        CAudioSessionManager::Disconnect((__int64)v7, 2u, 1);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v7 )
    {
      v4 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v7 + 16LL);
      if ( v4 == CAudioSessionManager::Release )
        CAudioSessionManager::Release(v7);
      else
        v4(v7);
    }
  }
  if ( v3 )
  {
    v5 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v3 + 16LL);
    if ( v5 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v3);
    else
      v5(v3);
  }
}
