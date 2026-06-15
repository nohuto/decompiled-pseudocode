/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000A70C
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180007DF4 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180081A58 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800181D0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180021268 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022274 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022310 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022814 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDeviceDefaults(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  struct tWAVEFORMATEX *v11; // rdi
  int ProposedConnectorFormatForProcessingMode; // ebx
  int (*v13)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  __int64 v14; // rax
  int MixFormat; // eax
  __int64 (__fastcall *v17)(CPolicyConfig *__hidden, const unsigned __int16 *, int, __int64 *, __int64 *); // rax
  int ProcessingPeriod; // eax
  LPVOID pv; // [rsp+30h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v20; // [rsp+38h] [rbp-40h] BYREF
  struct _GUID v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-28h]
  __int64 v23; // [rsp+58h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-18h]

  v23 = -2LL;
  v22 = a6;
  *(_QWORD *)&v21.Data1 = a7;
  v24 = 0LL;
  v11 = 0LL;
  v20 = 0LL;
  pv = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                               *((_QWORD *)this + 2),
                                               &pv);
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    if ( !*(_QWORD *)&v21.Data1 && !v22
      || ((v17 = *(__int64 (__fastcall **)(CPolicyConfig *__hidden, const unsigned __int16 *, int, __int64 *, __int64 *))(*(_QWORD *)g_PolicyConfig + 56LL),
           v17 != CPolicyConfig::GetProcessingPeriod)
        ? (ProcessingPeriod = ((__int64 (__fastcall *)(CPolicyConfig *, LPVOID, _QWORD, __int64 *))v17)(
                                g_PolicyConfig,
                                pv,
                                0LL,
                                v22))
        : (ProcessingPeriod = CPolicyConfig::GetProcessingPeriod(
                                g_PolicyConfig,
                                (const unsigned __int16 *)pv,
                                0,
                                v22,
                                *(__int64 **)&v21.Data1)),
          ProposedConnectorFormatForProcessingMode = ProcessingPeriod,
          ProcessingPeriod >= 0) )
    {
      if ( !a4 )
        goto LABEL_41;
      v21 = *a3;
      ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                                   this,
                                                   a2,
                                                   &v21,
                                                   &v20);
      if ( ProposedConnectorFormatForProcessingMode < 0 )
        ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormat(this, 0, 0, a2, &v20);
      v11 = v20;
      if ( ProposedConnectorFormatForProcessingMode >= 0 )
      {
LABEL_41:
        if ( !a5 )
          goto LABEL_19;
        v14 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v14 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( v14 || !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(this, a2) )
        {
          v21 = *a3;
          MixFormat = CEndpointCharacteristics::GetMixFormat(this, a2, &v21, v13, a5);
        }
        else
        {
          v21 = *a3;
          MixFormat = CEndpointCharacteristics::GetDevicePipeFormat(this, a2, &v21, v13, a5);
        }
        ProposedConnectorFormatForProcessingMode = MixFormat;
        if ( MixFormat >= 0 )
        {
LABEL_19:
          if ( a4 )
            *a4 = v11;
          v11 = 0LL;
        }
      }
      if ( v11 )
        CoTaskMemFree(v11);
    }
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        60LL,
        &WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
        (unsigned int)ProposedConnectorFormatForProcessingMode);
    }
    AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 0x1C1Bu, ProposedConnectorFormatForProcessingMode);
  }
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
