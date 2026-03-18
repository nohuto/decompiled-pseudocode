/*
 * XREFs of PfpPowerActionStartScenarioTracing @ 0x140471198
 * Callers:
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x14008B980 (PfLogEvent.c)
 *     PfTAccessTracingCleanup @ 0x1404780E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140478230 (PfTAccessTracingStart.c)
 *     MmPerformMemoryListCommand @ 0x140478484 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpPowerActionStartScenarioTracing(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  PfTAccessTracingCleanup(&PfTGlobals, a2, 4LL);
  MmPerformMemoryListCommand(1LL);
  PfTAccessTracingStart(&PfTGlobals, &PfKernelGlobals, 4LL);
  v5 = 0LL;
  v4 = *(int *)(a1 + 48);
  LODWORD(v5) = 4 * (unsigned __int16)*(_DWORD *)(a1 + 52);
  return PfLogEvent(
           27,
           dword_1403CD6DC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v4,
           0x10u);
}
