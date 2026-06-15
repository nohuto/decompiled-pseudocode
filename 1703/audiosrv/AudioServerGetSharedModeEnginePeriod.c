/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x1800A2C90
 * Callers:
 *     <none>
 * Callees:
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18002FB2C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18009A1B4 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800A1B08 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        struct tWAVEFORMATEX *a1,
        const unsigned __int16 *a2,
        __int128 *a3,
        struct tWAVEFORMATEX *a4,
        int a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  __int128 v9; // xmm0
  int *v14; // rbx
  int IsFormatSupported; // edi
  struct _GUID v16; // xmm6
  int v17; // eax
  int *v18; // r12
  int *v19; // r15
  int v20; // edx
  int nSamplesPerSec; // r8d
  int v22; // edx
  int v23; // eax
  int *v24; // r9
  int v25; // eax
  _DWORD *v26; // r9
  struct CEndpointCharacteristics *v28; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-98h] BYREF
  int *v30; // [rsp+78h] [rbp-90h]
  struct tWAVEFORMATEX *v31; // [rsp+80h] [rbp-88h] BYREF
  struct _GUID v32; // [rsp+88h] [rbp-80h] BYREF
  int *v33; // [rsp+98h] [rbp-70h]
  int *v34; // [rsp+A0h] [rbp-68h]
  struct _GUID v35; // [rsp+A8h] [rbp-60h] BYREF
  struct _GUID v36; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-40h]
  __int128 v38; // [rsp+D8h] [rbp-30h] BYREF

  v9 = *a3;
  v34 = a7;
  v33 = a8;
  v30 = a9;
  v37 = v9;
  v38 = v9;
  EtwEventActivityIdControl(4LL, &v38);
  v28 = 0LL;
  v14 = 0LL;
  v31 = 0LL;
  pv = 0LL;
  IsFormatSupported = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0, a3, a4, &v31);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  IsFormatSupported = GetAliasedEndpointCharacteristics(a2, 0, &v28);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  IsFormatSupported = DeriveAudioProcessingModeConfiguration(
                        *((_DWORD *)a3 + 4),
                        *((_DWORD *)a3 + 6),
                        v28,
                        *((_DWORD *)v28 + 37) == 1,
                        0,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                        0,
                        *((_DWORD *)a3 + 10),
                        &v35,
                        &v36,
                        &v32,
                        0LL);
  if ( IsFormatSupported < 0 )
    goto LABEL_9;
  v16 = v35;
  v17 = DeriveConnectorFormatFromStreamFormat(
          v28,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
          a4,
          &v32,
          &v36,
          &v35,
          *((_DWORD *)a3 + 9),
          (struct tWAVEFORMATEX **)&pv);
  v14 = (int *)pv;
  IsFormatSupported = v17;
  if ( v17 < 0
    || (v18 = v33,
        v19 = v34,
        v20 = *((_DWORD *)a3 + 5),
        v32 = v16,
        IsFormatSupported = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                              (__int64)v28,
                              v20,
                              (unsigned __int16 *)pv,
                              &v32,
                              a5 != 0,
                              a6,
                              v34,
                              v33,
                              v30),
        IsFormatSupported < 0) )
  {
LABEL_9:
    AudSrvTraceLoggingErrorHelper("AudioServerGetSharedModeEnginePeriod", 4080, IsFormatSupported);
  }
  else
  {
    nSamplesPerSec = a4->nSamplesPerSec;
    v22 = v14[1];
    if ( nSamplesPerSec != v22 )
    {
      *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v22, nSamplesPerSec);
      *v19 = TranslateFrameCountBetweenSamplingRates(*v19, v14[1], a4->nSamplesPerSec);
      v23 = TranslateFrameCountBetweenSamplingRates(*v18, v14[1], a4->nSamplesPerSec);
      v24 = v30;
      *v18 = v23;
      v25 = TranslateFrameCountBetweenSamplingRates(*v24, v14[1], a4->nSamplesPerSec);
      *v26 = v25;
    }
  }
  CoTaskMemFree(v14);
  operator delete(v31, (const struct std::nothrow_t *)0x12);
  if ( v28 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v28 + 16LL))(v28);
  EtwEventActivityIdControl(4LL, &v38);
  return (unsigned int)IsFormatSupported;
}
