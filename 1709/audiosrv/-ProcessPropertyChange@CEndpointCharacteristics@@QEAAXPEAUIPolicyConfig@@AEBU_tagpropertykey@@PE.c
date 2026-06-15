/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18002294C
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x1800084A0 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180089410 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     GetSpatialSettingsMonitoringPKey @ 0x18000873C (GetSpatialSettingsMonitoringPKey.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18000A8F4 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022274 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800333A8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180033408 (_Init_thread_header.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B541C (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800BD118 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800CA1E8 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 */

void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        struct IPolicyConfig *a2,
        const struct _tagpropertykey *a3,
        int *a4)
{
  struct IPolicyConfig *v6; // r15
  __int128 *v7; // rcx
  DWORD pid; // r8d
  unsigned int v10; // edx
  int v11; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 *v16; // rsi
  unsigned int i; // r15d
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // ebx
  int v21; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX *v22; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v23; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v24[24]; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 *v28; // [rsp+A8h] [rbp-58h]
  __int128 v29; // [rsp+B0h] [rbp-50h] BYREF
  int v30; // [rsp+C0h] [rbp-40h]
  __int128 v31; // [rsp+C4h] [rbp-3Ch]
  int v32; // [rsp+D4h] [rbp-2Ch]
  __int128 v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+E8h] [rbp-18h]
  __int128 v35; // [rsp+ECh] [rbp-14h]
  int v36; // [rsp+FCh] [rbp-4h]
  __int128 v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+110h] [rbp+10h]
  __int128 v39; // [rsp+114h] [rbp+14h]
  int v40; // [rsp+124h] [rbp+24h]
  PROPERTYKEY v41; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  *a4 = 0;
  v6 = g_PolicyConfig;
  v7 = &v29;
  pid = a3->pid;
  v29 = xmmword_18014AF04;
  v10 = 0;
  v30 = dword_18014AF14;
  v31 = xmmword_18014AF18;
  v32 = dword_18014AF28;
  v34 = dword_18014AF3C;
  v33 = xmmword_18014AF2C;
  v36 = dword_18014AF64;
  v38 = dword_18014AF78;
  v35 = xmmword_18014AF54;
  v40 = dword_18014AF8C;
  v41 = PKEY_AudioEndpoint_Disable_SysFx;
  v37 = xmmword_18014AF68;
  v39 = xmmword_18014AF7C;
  while ( 1 )
  {
    if ( pid == *((_DWORD *)v7 + 4) )
    {
      v18 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
        v18 = *(_QWORD *)a3->fmtid.Data4 - *((_QWORD *)v7 + 1);
      if ( !v18 )
        break;
    }
    ++v10;
    v7 = (__int128 *)((char *)v7 + 20);
    if ( v10 >= 7 )
      goto LABEL_4;
  }
  *((_BYTE *)this + 224) = 1;
LABEL_4:
  if ( !*((_DWORD *)this + 37) )
  {
    v11 = SpatialPolicy::OnPropertyChange(*((struct IMMDevice **)this + 2), a3);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A1B,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v11,
        v21);
    if ( !*((_DWORD *)this + 37) )
    {
      v13 = *(_QWORD *)&a3->fmtid.Data1 - *((_QWORD *)this + 205);
      if ( *(_QWORD *)&a3->fmtid.Data1 == *((_QWORD *)this + 205) )
        v13 = *(_QWORD *)a3->fmtid.Data4 - *((_QWORD *)this + 206);
      if ( !v13 && a3->pid == *((_DWORD *)this + 414) )
        goto LABEL_32;
      v14 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
        v14 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
      if ( !v14 && !a3->pid )
      {
LABEL_32:
        CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(this, &v23, v12);
        v22 = 0LL;
        CEndpointCharacteristics::GetDeviceFormat(this, 0, 0, 0, &v22);
        v25 = (__int64)off_1800F4548;
        *(struct _GUID *)&v24[8] = v23;
        v28 = &v25;
        *(_QWORD *)v24 = this;
        v27 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v24[8], *(__m128d *)&v24[8]);
        v26 = *(_OWORD *)v24;
        CSpatialProperties::ProcessPropertyChange(
          (LPCRITICAL_SECTION)this + 39,
          v6,
          (__int64)v22,
          (__int64)&v25,
          (__int64)a4);
      }
    }
  }
  if ( dword_18014C298 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18014C298);
    if ( dword_18014C298 == -1 )
    {
      dword_18014BEC0 = 0;
      dword_18014BED8 = 0;
      xmmword_18014BEB0 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      *(PROPERTYKEY *)byte_18014BEE0 = PKEY_AudioEngine_DeviceFormat;
      xmmword_18014BEC8 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_18014BEC4 = 8;
      dword_18014BEDC = 4;
      dword_18014BEF4 = 2;
      *(struct _tagpropertykey *)byte_18014BEF8 = PKEY_Endpoint_AllowOffloading;
      dword_18014BF0C = 16;
      Init_thread_footer(&dword_18014C298);
    }
  }
  v15 = xmmword_18014BEB0 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_18014BEB0 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v15 = *((_QWORD *)&xmmword_18014BEB0 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v16 = &xmmword_18014BEB0;
  if ( !v15 )
  {
    GetSpatialSettingsMonitoringPKey((__int64)&xmmword_18014BEB0);
    GetSpatialSettingsMonitoringPKey((__int64)&xmmword_18014BEC8);
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( a3->pid == *((_DWORD *)v16 + 4) )
    {
      v19 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v16;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v16 )
        v19 = *(_QWORD *)a3->fmtid.Data4 - *((_QWORD *)v16 + 1);
      if ( !v19 )
      {
        v20 = *((_DWORD *)v16 + 5);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 232, v20);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 616, v20);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 1000, v20);
      }
    }
    v16 = (__int128 *)((char *)v16 + 24);
  }
}
