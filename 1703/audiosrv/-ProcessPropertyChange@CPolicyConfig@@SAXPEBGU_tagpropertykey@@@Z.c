/*
 * XREFs of ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180002F50
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800242A0 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800031B0 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B2F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800330C0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180041EF0 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18009BDBC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPolicyConfig::ProcessPropertyChange(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  struct CEndpointCharacteristics *v4; // rcx
  struct CEndpointCharacteristics *v5; // rsi
  struct IPolicyConfig *v6; // r14
  _DWORD *v7; // rdi
  int v8; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void (*v14)(void); // rax
  int v15; // [rsp+20h] [rbp-79h]
  struct CEndpointCharacteristics *v16; // [rsp+40h] [rbp-59h] BYREF
  int v17; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v18[3]; // [rsp+4Ch] [rbp-4Dh] BYREF
  struct tWAVEFORMATEX *v19; // [rsp+58h] [rbp-41h] BYREF
  struct _GUID v20; // [rsp+60h] [rbp-39h] BYREF
  __int64 v21; // [rsp+70h] [rbp-29h]
  _BYTE v22[24]; // [rsp+78h] [rbp-21h]
  __int64 v23; // [rsp+90h] [rbp-9h] BYREF
  __int128 v24; // [rsp+98h] [rbp-1h]
  __int64 v25; // [rsp+A8h] [rbp+Fh]
  __int64 *v26; // [rsp+C8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v21 = -2LL;
  *(_QWORD *)&v18[1] = 0LL;
  v17 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, _DWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a1,
         &v18[1]) < 0
    || (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&v18[1] + 48LL))(*(_QWORD *)&v18[1], &v17) < 0
    || v17 != 1 )
  {
    goto LABEL_24;
  }
  v16 = 0LL;
  if ( (int)GetAliasedEndpointCharacteristics(a1, 1, &v16) >= 0 )
  {
    v4 = v16;
    v5 = v16;
    v6 = g_PolicyConfig;
    v18[0] = 0;
    v7 = (_DWORD *)((char *)v16 + 148);
    if ( *((_DWORD *)v16 + 37) )
      goto LABEL_21;
    v8 = SpatialPolicy::OnPropertyChange(*((struct IMMDevice **)v16 + 2), a2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1995,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8,
        v15);
    v4 = v16;
    if ( *v7 )
      goto LABEL_21;
    v10 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_SpatialAudioEndpoint_Settings.fmtid.Data1;
    if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_SpatialAudioEndpoint_Settings.fmtid.Data1 )
      v10 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_SpatialAudioEndpoint_Settings.fmtid.Data4;
    if ( v10 || a2->pid != 2 )
    {
      v11 = *(_QWORD *)&a2->fmtid.Data1 - PKEY_SpatialAudioEndpoint_RenderingMode;
      if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)PKEY_SpatialAudioEndpoint_RenderingMode )
        v11 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&PKEY_SpatialAudioEndpoint_RenderingMode + 1);
      if ( v11 || a2->pid )
      {
        v12 = *(_QWORD *)&a2->fmtid.Data1 - PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode;
        if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode )
          v12 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode + 1);
        if ( v12 || a2->pid != 1 )
        {
          v13 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
          if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
            v13 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
          if ( v13 || a2->pid )
            goto LABEL_21;
        }
      }
    }
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(v5, &v20, v9);
    v19 = 0LL;
    CEndpointCharacteristics::GetDeviceFormat(v5, 0, 0, eHostProcessConnector, &v19);
    *(_QWORD *)v22 = v5;
    *(struct _GUID *)&v22[8] = v20;
    v23 = (__int64)off_1800DB4E8;
    v24 = *(_OWORD *)v22;
    v25 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v22[8], *(__m128d *)&v22[8]);
    v26 = &v23;
    CSpatialProperties::ProcessPropertyChange(
      (_DWORD)v5 + 1504,
      (int)a2,
      *((_QWORD *)v5 + 2),
      *((_QWORD *)v5 + 4),
      v6,
      (__int64)v19,
      (__int64)&v23,
      (__int64)v18);
    if ( v18[0] )
      CPolicyConfig::DisconnectHelper(*(struct IMMDevice **)&v18[1]);
  }
  v4 = v16;
LABEL_21:
  if ( v4 )
  {
    v14 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      v14();
  }
LABEL_24:
  if ( *(_QWORD *)&v18[1] )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v18[1] + 16LL))(*(_QWORD *)&v18[1]);
}
