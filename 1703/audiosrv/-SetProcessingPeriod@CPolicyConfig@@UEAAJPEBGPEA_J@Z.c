/*
 * XREFs of ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x18009ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x18009ED34 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriod(CPolicyConfig *this, const unsigned __int16 *a2, __int64 *a3)
{
  int AliasedEndpointCharacteristics; // ebx
  struct CEndpointCharacteristics *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v6);
  if ( AliasedEndpointCharacteristics < 0
    || (AliasedEndpointCharacteristics = CPolicyConfig::SetProcessingPeriodInternal(v6, a3),
        AliasedEndpointCharacteristics < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriod", 3478, AliasedEndpointCharacteristics);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)AliasedEndpointCharacteristics;
}
