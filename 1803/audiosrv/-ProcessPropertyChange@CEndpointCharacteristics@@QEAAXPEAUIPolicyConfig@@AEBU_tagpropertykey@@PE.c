/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x1800397A4
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001760C (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800BF2D0 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x180005FA4 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x1800181B4 (GetSpatialSettingsMonitoringPKey.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800497AC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180050D58 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800611C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180061228 (_Init_thread_header.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800F0C68 (-MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800FDDD0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 */

void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        struct IPolicyConfig *a2,
        const struct _tagpropertykey *a3,
        const GUID *a4)
{
  struct IPolicyConfig *v6; // r15
  __int128 *v7; // rcx
  const GUID *pid; // r8
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 *v13; // rsi
  unsigned int i; // r15d
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  const GUID *v20; // r8
  const GUID *v21; // r9
  __int64 v22; // rax
  unsigned int v23; // ebx
  int v24; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX *v25; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v26; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v27[24]; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int128 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 *v31; // [rsp+A8h] [rbp-58h]
  __int128 v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+C0h] [rbp-40h]
  __int128 v34; // [rsp+C4h] [rbp-3Ch]
  int v35; // [rsp+D4h] [rbp-2Ch]
  __int128 v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+E8h] [rbp-18h]
  __int128 v38; // [rsp+ECh] [rbp-14h]
  int v39; // [rsp+FCh] [rbp-4h]
  __int128 v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+110h] [rbp+10h]
  __int128 v42; // [rsp+114h] [rbp+14h]
  int v43; // [rsp+124h] [rbp+24h]
  PROPERTYKEY v44; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  a4->Data1 = 0;
  v6 = g_PolicyConfig;
  v7 = &v32;
  pid = (const GUID *)a3->pid;
  v32 = xmmword_1801890A4;
  v10 = 0;
  v33 = dword_1801890B4;
  v34 = xmmword_1801890B8;
  v35 = dword_1801890C8;
  v37 = dword_1801890DC;
  v36 = xmmword_1801890CC;
  v39 = dword_180189104;
  v41 = dword_180189118;
  v38 = xmmword_1801890F4;
  v43 = dword_18018912C;
  v44 = PKEY_AudioEndpoint_Disable_SysFx;
  v40 = xmmword_180189108;
  v42 = xmmword_18018911C;
  while ( 1 )
  {
    if ( (_DWORD)pid == *((_DWORD *)v7 + 4) )
    {
      v22 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
        v22 = *(_QWORD *)a3->fmtid.Data4 - *((_QWORD *)v7 + 1);
      if ( !v22 )
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
    v15 = SpatialPolicy::OnPropertyChange(*((struct IMMDevice **)this + 2), a3);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A71,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v15,
        v24);
    if ( !*((_DWORD *)this + 37) )
    {
      v16 = *(_QWORD *)&a3->fmtid.Data1 - *((_QWORD *)this + 213);
      if ( *(_QWORD *)&a3->fmtid.Data1 == *((_QWORD *)this + 213) )
        v16 = *(_QWORD *)a3->fmtid.Data4 - *((_QWORD *)this + 214);
      if ( !v16 && a3->pid == *((_DWORD *)this + 430) )
        goto LABEL_37;
      v17 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
        v17 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
      if ( !v17 && !a3->pid )
      {
LABEL_37:
        CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
          this,
          &v26,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)pid);
        v25 = 0LL;
        CEndpointCharacteristics::GetDeviceFormat(this, 0, 0, eHostProcessConnector, &v25);
        v28 = (__int64)off_18012C980;
        *(struct _GUID *)&v27[8] = v26;
        v31 = &v28;
        *(_QWORD *)v27 = this;
        v30 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v27[8], *(__m128d *)&v27[8]);
        v29 = *(_OWORD *)v27;
        CSpatialProperties::ProcessPropertyChange((_DWORD)this + 1624, v6, (__int64)v25, (__int64)&v28, (__int64)a4);
      }
    }
  }
  v11 = 4LL;
  if ( dword_18018B0FC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18018B0FC);
    if ( dword_18018B0FC == -1 )
    {
      dword_18018AB80 = 0;
      dword_18018AB98 = 0;
      xmmword_18018AB70 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      *(PROPERTYKEY *)byte_18018ABA0 = PKEY_AudioEngine_DeviceFormat;
      xmmword_18018AB88 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_18018AB84 = 8;
      dword_18018AB9C = 4;
      dword_18018ABB4 = 2;
      *(struct _tagpropertykey *)byte_18018ABB8 = PKEY_Endpoint_AllowOffloading;
      dword_18018ABCC = 16;
      Init_thread_footer(&dword_18018B0FC);
    }
  }
  v12 = xmmword_18018AB70 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_18018AB70 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v12 = *((_QWORD *)&xmmword_18018AB70 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v13 = &xmmword_18018AB70;
  if ( !v12 )
  {
    GetSpatialSettingsMonitoringPKey((__int64)&xmmword_18018AB70, v11, pid, a4);
    GetSpatialSettingsMonitoringPKey((__int64)&xmmword_18018AB88, v19, v20, v21);
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( a3->pid == *((_DWORD *)v13 + 4) )
    {
      v18 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v13;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v13 )
        v18 = *(_QWORD *)a3->fmtid.Data4 - *((_QWORD *)v13 + 1);
      if ( !v18 )
      {
        v23 = *((_DWORD *)v13 + 5);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 232, v23);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 616, v23);
        SystemEffectDescriptor::MarkAsNeedsResolution((char *)this + 1000, v23);
      }
    }
    v13 = (__int128 *)((char *)v13 + 24);
  }
}
