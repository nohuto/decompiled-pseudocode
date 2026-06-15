/*
 * XREFs of ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180030284
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800181D0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180030384 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x180088AB4 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriodInternal(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3,
        __int64 *a4)
{
  int MinProcessingPeriodForExclusiveMode; // ebx
  int v8; // esi
  __int64 v9; // rcx
  PROPVARIANT pvar; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 *v13; // [rsp+30h] [rbp-28h]

  pvar = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  MinProcessingPeriodForExclusiveMode = 0;
  v8 = 0;
  if ( a1 && (a3 || a4) )
  {
    if ( !a4
      || (MinProcessingPeriodForExclusiveMode = CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(a1, a2, a4),
          MinProcessingPeriodForExclusiveMode >= 0) )
    {
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
            MinProcessingPeriodForExclusiveMode = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)a1 + 4) + 40LL))(
                                                    *((_QWORD *)a1 + 4),
                                                    &PKEY_AudioEngine_Period,
                                                    &pvar);
            if ( MinProcessingPeriodForExclusiveMode < 0 )
              break;
            if ( (_WORD)pvar != 65 )
            {
              if ( (_WORD)pvar )
              {
LABEL_15:
                MinProcessingPeriodForExclusiveMode = -2147024809;
                break;
              }
              *a3 = 100000LL;
              MinProcessingPeriodForExclusiveMode = CPolicyConfig::SetProcessingPeriodInternal(a1, a3);
              break;
            }
            if ( (_DWORD)v12 != 8 )
              goto LABEL_15;
            v9 = *v13;
            *a3 = *v13;
            if ( v9 )
              break;
            if ( (unsigned int)++v8 >= 0x7D0 )
            {
              MinProcessingPeriodForExclusiveMode = -2147467259;
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids);
              }
              break;
            }
            Sleep(5u);
          }
        }
      }
      else
      {
        MinProcessingPeriodForExclusiveMode = 0;
      }
    }
  }
  else
  {
    MinProcessingPeriodForExclusiveMode = -2147467261;
  }
  PropVariantClear(&pvar);
  if ( MinProcessingPeriodForExclusiveMode < 0 )
    AudSrvTraceLoggingErrorHelper(
      "CPolicyConfig::GetProcessingPeriodInternal",
      0xD7Fu,
      MinProcessingPeriodForExclusiveMode);
  return (unsigned int)MinProcessingPeriodForExclusiveMode;
}
