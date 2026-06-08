/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0008840
 * Callers:
 *     Display_CPC @ 0x1C0009F68 (Display_CPC.c)
 *     Display_LPI @ 0x1C000A360 (Display_LPI.c)
 *     AcpiEval_CST @ 0x1C001FC18 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001FF00 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0020334 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0020484 (AcpiEval_CSD.c)
 *     ValidateCoordinatedState @ 0x1C002A06C (ValidateCoordinatedState.c)
 *     ValidatePccEntry @ 0x1C002A410 (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C002A738 (ValidatePlatformIdleState.c)
 *     AcpiEval_XPSS @ 0x1C002C9F4 (AcpiEval_XPSS.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003214C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0032360 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0032E54 (InitPepPerfStates.c)
 *     PepQueryPerfDomainInfo @ 0x1C003363C (PepQueryPerfDomainInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8), 43LL, a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
