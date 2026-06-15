/*
 * XREFs of ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x180088A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x180088AB4 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriod(CPolicyConfig *this, const unsigned __int16 *a2, __int64 *a3)
{
  int v4; // ebx
  void (*v5)(void); // rax
  struct CEndpointCharacteristics *v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         &v7);
  if ( v4 < 0 || (v4 = CPolicyConfig::SetProcessingPeriodInternal(v7, a3), v4 < 0) )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriod", 3479, v4);
  if ( v7 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v7);
    else
      v5();
  }
  return (unsigned int)v4;
}
