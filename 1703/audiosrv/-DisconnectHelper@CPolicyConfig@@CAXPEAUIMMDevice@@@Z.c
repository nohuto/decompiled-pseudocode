/*
 * XREFs of ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18009BDBC
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180002F50 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x18009BC68 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18009D148 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18009F330 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180025E10 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180092FB0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPolicyConfig::DisconnectHelper(struct IMMDevice *a1)
{
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v3; // rbx
  __int64 (__fastcall *v4)(volatile signed __int32 *); // rax
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF
  __int64 v6; // [rsp+60h] [rbp+30h] BYREF
  struct CAudioSessionManagerProvider *v7; // [rsp+68h] [rbp+38h] BYREF

  v7 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v7);
  v3 = v7;
  if ( AudioSessionManagerProvider >= 0 )
  {
    v6 = 0LL;
    pv = 0LL;
    if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv) >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x11u,
          (__int64)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
          (const wchar_t *)pv);
      }
      if ( !(*(unsigned int (__fastcall **)(struct CAudioSessionManagerProvider *, LPVOID, __int64 *))(*(_QWORD *)v3 + 40LL))(
              v3,
              pv,
              &v6) )
        CAudioSessionManager::Disconnect(v6, 2u, 1);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL);
    if ( v4 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v3);
    else
      v4((volatile signed __int32 *)v3);
  }
}
