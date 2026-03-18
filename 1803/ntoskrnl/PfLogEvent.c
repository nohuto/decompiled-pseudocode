/*
 * XREFs of PfLogEvent @ 0x14008B980
 * Callers:
 *     PfpLogApplicationEvent @ 0x14006EDFC (PfpLogApplicationEvent.c)
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 *     PfpRpLogDeprioEvent @ 0x1400A25A8 (PfpRpLogDeprioEvent.c)
 *     PfHardFaultLog @ 0x1400BEC70 (PfHardFaultLog.c)
 *     PfLogForegroundProcess @ 0x1400C3840 (PfLogForegroundProcess.c)
 *     PfLogFileDataAccess @ 0x140271128 (PfLogFileDataAccess.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140471198 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PfpLogEventRequest @ 0x1405EC688 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1405EC760 (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14008BA6C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14008BB44 (PfFbLogEntryComplete.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_1403CD2E0);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_1403CD490 + 1, 1u);
  }
  else
  {
    MEMORY[0] = MEMORY[0] & 0xFFFFFFFFFFFFF003uLL | ((v8 & 0x3FF0 | 0x8000CuLL) >> 2);
    MEMORY[8] = a2;
    MEMORY[0] ^= (MEMORY[0] ^ (a1 << 12)) & 0x1F000;
    memmove((void *)0x10, a3, a4);
    PfFbLogEntryComplete(0LL);
    return 0;
  }
  return (unsigned int)v9;
}
