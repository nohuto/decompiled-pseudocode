/*
 * XREFs of ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180002CB0
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001F800 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18000D900 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000DC50 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE18 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x18009ED34 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetProcessingPeriodInternal(
        struct CEndpointCharacteristics *this,
        int a2,
        __int64 *a3,
        __int64 *a4)
{
  int v8; // esi
  int ProposedConnectorFormatForProcessingMode; // edi
  __int64 SupportedConnectorModes; // rax
  int v11; // edx
  int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rax
  struct _GUID *DefaultConnectorProcessingMode; // rax
  struct _GUID v16; // xmm6
  int *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  LPVOID pv; // [rsp+58h] [rbp-79h] BYREF
  PROPVARIANT pvar; // [rsp+60h] [rbp-71h] BYREF
  __int64 v23; // [rsp+68h] [rbp-69h]
  __int64 *v24; // [rsp+70h] [rbp-61h]
  __m256i v25; // [rsp+78h] [rbp-59h]
  __int64 v26; // [rsp+98h] [rbp-39h]
  struct _GUID v27; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-19h]
  _BYTE v29[16]; // [rsp+C8h] [rbp-9h] BYREF

  v26 = -2LL;
  v8 = 0;
  ProposedConnectorFormatForProcessingMode = 0;
  pvar = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !this )
    goto LABEL_44;
  if ( !a3 )
  {
    if ( a4 )
      goto LABEL_4;
LABEL_44:
    ProposedConnectorFormatForProcessingMode = -2147467261;
    goto LABEL_26;
  }
  if ( !a4 )
  {
LABEL_20:
    if ( a3 )
    {
      if ( a2 )
      {
        *a3 = 100000LL;
      }
      else
      {
        while ( 1 )
        {
          ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 4) + 40LL))(
                                                       *((_QWORD *)this + 4),
                                                       &PKEY_AudioEngine_Period,
                                                       &pvar);
          if ( ProposedConnectorFormatForProcessingMode < 0 )
            break;
          if ( (_WORD)pvar != 65 )
          {
            if ( (_WORD)pvar )
            {
LABEL_30:
              ProposedConnectorFormatForProcessingMode = -2147024809;
              goto LABEL_26;
            }
            *a3 = 100000LL;
            ProposedConnectorFormatForProcessingMode = CPolicyConfig::SetProcessingPeriodInternal(this, a3);
            goto LABEL_26;
          }
          if ( (_DWORD)v23 != 8 )
            goto LABEL_30;
          v19 = *v24;
          *a3 = *v24;
          if ( v19 )
            goto LABEL_26;
          if ( (unsigned int)++v8 >= 0x7D0 )
          {
            ProposedConnectorFormatForProcessingMode = -2147467259;
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids);
            }
            goto LABEL_26;
          }
          Sleep(5u);
        }
      }
    }
    else
    {
      ProposedConnectorFormatForProcessingMode = 0;
    }
    goto LABEL_26;
  }
LABEL_4:
  pv = 0LL;
  v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(this, 0LL, 0LL);
  v11 = 0;
  v12 = *(_DWORD *)(SupportedConnectorModes + 8);
  if ( v12 <= 0 )
    goto LABEL_34;
  v13 = *(_QWORD *)SupportedConnectorModes;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v13 + 16LL * v11) - *(_QWORD *)&v27.Data1;
    if ( !v14 )
      v14 = *(_QWORD *)(v13 + 16LL * v11 + 8) - *(_QWORD *)v27.Data4;
    if ( !v14 )
      break;
    if ( ++v11 >= v12 )
      goto LABEL_34;
  }
  if ( v11 == -1 )
  {
LABEL_34:
    DefaultConnectorProcessingMode = (struct _GUID *)CEndpointCharacteristics::GetDefaultConnectorProcessingMode(
                                                       this,
                                                       v29,
                                                       0LL,
                                                       0LL);
  }
  else
  {
    v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    DefaultConnectorProcessingMode = &v27;
  }
  v16 = *DefaultConnectorProcessingMode;
  *a4 = 0LL;
  v27 = v16;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               eHostProcessConnector,
                                               &v27,
                                               (struct tWAVEFORMATEX **)&pv);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingMode(this, &v27, 0LL, 1LL);
    v25.m256i_i64[0] = (__int64)this;
    v25.m256i_i32[2] = 0;
    *(struct _GUID *)((char *)&v25.m256i_u64[1] + 4) = v27;
    v27 = *(struct _GUID *)v25.m256i_i8;
    v28 = *(_OWORD *)&v25.m256i_u64[2];
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
                                                 (int)this,
                                                 (__int64)&v27,
                                                 (__int64)&pv);
  }
  v17 = (int *)pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    *a4 = 30000LL;
    v27 = v16;
    if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(this, 0LL, v17, &v27, 0, 0LL, 0LL, &pv, 0LL) >= 0 )
    {
      v18 = (unsigned int)(int)((double)(int)pv * 10000000.0 / (double)v17[1] + 0.5);
      if ( v18 >= *a4 )
        v18 = *a4;
      *a4 = v18;
    }
    ProposedConnectorFormatForProcessingMode = 0;
  }
  CoTaskMemFree(v17);
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
    goto LABEL_20;
LABEL_26:
  PropVariantClear(&pvar);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    AudSrvTraceLoggingErrorHelper(
      "CPolicyConfig::GetProcessingPeriodInternal",
      0xD7Eu,
      ProposedConnectorFormatForProcessingMode);
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
