/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800BBE98
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800B9B3C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039570 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180095A9C (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180095B88 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180095BDC (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDeviceDefaults(
        struct CEndpointCharacteristics *this,
        __int32 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  struct tWAVEFORMATEX *v11; // rdi
  int EndpointId; // ebx
  int (*v13)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  __int64 v14; // rax
  int MixFormat; // eax
  unsigned __int16 *v17; // [rsp+30h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-40h] BYREF
  struct _GUID v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-18h]

  v21 = -2LL;
  v20 = a6;
  *(_QWORD *)&v19.Data1 = a7;
  v22 = 0LL;
  v11 = 0LL;
  pv = 0LL;
  v17 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  EndpointId = CEndpointCharacteristics::GetEndpointId(this, &v17);
  if ( EndpointId >= 0 )
  {
    if ( (v13 = (int (*)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v20,
          !*(_QWORD *)&v19.Data1)
      && !v20
      || (EndpointId = (*(__int64 (__fastcall **)(CPolicyConfig *, unsigned __int16 *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)g_PolicyConfig + 56LL))(
                         g_PolicyConfig,
                         v17,
                         0LL,
                         v20,
                         *(_QWORD *)&v19.Data1),
          EndpointId >= 0) )
    {
      if ( !a4
        || (v19 = *a3,
            EndpointId = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                           this,
                           a2,
                           &v19,
                           (struct tWAVEFORMATEX **)&pv),
            v11 = (struct tWAVEFORMATEX *)pv,
            EndpointId >= 0) )
      {
        if ( !a5 )
          goto LABEL_19;
        v14 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v14 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( v14 || !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(this, a2) )
        {
          v19 = *a3;
          MixFormat = CEndpointCharacteristics::GetMixFormat(
                        this,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                        &v19,
                        v13,
                        a5);
        }
        else
        {
          v19 = *a3;
          MixFormat = CEndpointCharacteristics::GetDevicePipeFormat(
                        this,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                        &v19,
                        v13,
                        a5);
        }
        EndpointId = MixFormat;
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
  if ( v17 )
  {
    CoTaskMemFree(v17);
    v17 = 0LL;
  }
  if ( EndpointId < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        59LL,
        &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
        (unsigned int)EndpointId);
    }
    AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 7221, EndpointId);
  }
  return (unsigned int)EndpointId;
}
