/*
 * XREFs of AudioServerGetDevicePeriod @ 0x1800A25D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18002FB2C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180041BCC (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18009C564 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  int AliasedEndpointCharacteristics; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // edx
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  void *v13; // rcx
  struct _GUID v14; // xmm6
  int *v15; // rbx
  unsigned int v17; // [rsp+40h] [rbp-71h]
  struct CEndpointCharacteristics *v18; // [rsp+68h] [rbp-49h] BYREF
  int v19; // [rsp+70h] [rbp-41h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-39h] BYREF
  struct _GUID v21; // [rsp+88h] [rbp-29h] BYREF
  __int128 v22; // [rsp+98h] [rbp-19h]
  __int128 v23; // [rsp+A8h] [rbp-9h] BYREF

  v22 = *a3;
  v23 = v22;
  EtwEventActivityIdControl(4LL, &v23);
  v18 = 0LL;
  AliasedEndpointCharacteristics = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v18);
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      if ( a5 )
      {
        v10 = *((_DWORD *)a3 + 6);
        v11 = *((_DWORD *)a3 + 4);
        v12 = *((_DWORD *)v18 + 37) == 1;
        v17 = *((_DWORD *)a3 + 10);
        pv = 0LL;
        AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                           v11,
                                           v10,
                                           v18,
                                           v12,
                                           0,
                                           eHostProcessConnector,
                                           0,
                                           v17,
                                           &v21,
                                           0LL,
                                           0LL,
                                           0LL);
        if ( AliasedEndpointCharacteristics < 0 )
        {
          v13 = 0LL;
LABEL_6:
          CoTaskMemFree(v13);
          goto LABEL_13;
        }
        v14 = v21;
        AliasedEndpointCharacteristics = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                           v18,
                                           0,
                                           &v21,
                                           (struct tWAVEFORMATEX **)&pv);
        if ( AliasedEndpointCharacteristics < 0 )
        {
          v13 = pv;
          goto LABEL_6;
        }
        v15 = (int *)pv;
        v21 = v14;
        AliasedEndpointCharacteristics = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                           (__int64)v18,
                                           0,
                                           (unsigned __int16 *)pv,
                                           &v21,
                                           0,
                                           &v19,
                                           0LL,
                                           0LL,
                                           0LL);
        v13 = v15;
        if ( AliasedEndpointCharacteristics < 0 )
          goto LABEL_6;
        *a5 = (unsigned int)(int)((double)v19 * 10000000.0 / (double)v15[1] + 0.5);
        CoTaskMemFree(v15);
      }
      if ( a6 )
        AliasedEndpointCharacteristics = CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(v18, v9, a6);
LABEL_13:
      if ( AliasedEndpointCharacteristics >= 0 )
        goto LABEL_15;
    }
  }
  AudSrvTraceLoggingErrorHelper("AudioServerGetDevicePeriod", 3998, AliasedEndpointCharacteristics);
LABEL_15:
  if ( v18 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v18 + 16LL))(v18);
  EtwEventActivityIdControl(4LL, &v23);
  return (unsigned int)AliasedEndpointCharacteristics;
}
