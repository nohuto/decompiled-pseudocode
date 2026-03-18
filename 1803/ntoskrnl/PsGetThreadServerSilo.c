/*
 * XREFs of PsGetThreadServerSilo @ 0x1400E1718
 * Callers:
 *     RtlGetActiveConsoleId @ 0x14006EAF0 (RtlGetActiveConsoleId.c)
 *     MiGetNextSession @ 0x140074C24 (MiGetNextSession.c)
 *     RtlGetNtProductType @ 0x1400C4610 (RtlGetNtProductType.c)
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016D680 (RtlGetCurrentServiceSessionId.c)
 *     EtwpTraceIo @ 0x140177130 (EtwpTraceIo.c)
 *     EtwpTraceFileName @ 0x140177690 (EtwpTraceFileName.c)
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 *     IopCheckSessionDeviceAccess @ 0x1402370D8 (IopCheckSessionDeviceAccess.c)
 *     MmIsSessionInCurrentServerSilo @ 0x14025BD70 (MmIsSessionInCurrentServerSilo.c)
 *     EtwTracePageFault @ 0x1402AEF04 (EtwTracePageFault.c)
 *     EtwpTraceFileIo @ 0x1402B0590 (EtwpTraceFileIo.c)
 *     EtwpTraceIoInit @ 0x1402B06D0 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1402B0C70 (EtwpTraceRedirectedIo.c)
 *     PerfInfoLogSysCallEntry @ 0x1402B0E30 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1402B0ED0 (PerfInfoLogSysCallExit.c)
 *     IopGetThreadActiveConsoleId @ 0x14071CD88 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008A8E0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 2000) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1728LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 2000));
}
