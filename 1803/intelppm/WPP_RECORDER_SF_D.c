/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0008CF8
 * Callers:
 *     Display_CPC @ 0x1C000A338 (Display_CPC.c)
 *     Display_LPI @ 0x1C000A730 (Display_LPI.c)
 *     AcpiEval_CSD @ 0x1C0021A98 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C002203C (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0022324 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0022764 (AcpiEval_TSS.c)
 *     ValidateCoordinatedState @ 0x1C002B25C (ValidateCoordinatedState.c)
 *     ValidatePccEntry @ 0x1C002B600 (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C002B928 (ValidatePlatformIdleState.c)
 *     AcpiEval_XPSS @ 0x1C002DBD0 (AcpiEval_XPSS.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C003346C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0033684 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0034174 (InitPepPerfStates.c)
 *     PepQueryPerfDomainInfo @ 0x1C0034970 (PepQueryPerfDomainInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
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
