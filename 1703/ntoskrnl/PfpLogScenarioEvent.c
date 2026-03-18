/*
 * XREFs of PfpLogScenarioEvent @ 0x1405760BC
 * Callers:
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x14058509C (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x14005F30C (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x140138120 (PfTSetTraceWorkerPriority.c)
 *     MmPerformMemoryListCommand @ 0x14040E2BC (MmPerformMemoryListCommand.c)
 *     PfGenerateTrace @ 0x1405761CC (PfGenerateTrace.c)
 */

__int64 __fastcall PfpLogScenarioEvent(int a1, char a2, char a3, unsigned __int16 a4, char a5)
{
  __int64 v5; // rbx
  signed int v9; // r14d
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  MmPerformMemoryListCommand();
  v9 = PfTSetTraceWorkerPriority(0x10u);
  PfGenerateTrace(&Thread, 1LL);
  v11[0] = v5;
  v11[1] = a2 & 3 | (4 * (a4 | ((unsigned __int8)(a3 & 3) << 16)));
  result = PfLogEvent(
             27,
             dword_14036DE5C
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                           + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
             v11,
             0x10u);
  if ( (a5 & 1) != 0 )
    result = PfGenerateTrace(&Thread, 0LL);
  if ( v9 <= 31 )
    return PfTSetTraceWorkerPriority(v9);
  return result;
}
