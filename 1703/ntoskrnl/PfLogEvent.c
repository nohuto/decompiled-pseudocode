/*
 * XREFs of PfLogEvent @ 0x14005F30C
 * Callers:
 *     PfHardFaultLog @ 0x14002A488 (PfHardFaultLog.c)
 *     PfLogForegroundProcess @ 0x14005F094 (PfLogForegroundProcess.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     PfpLogApplicationEvent @ 0x1400618B4 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x140061AAC (PfpRpLogDeprioEvent.c)
 *     PfLogFileDataAccess @ 0x140226EBC (PfLogFileDataAccess.c)
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140409D7C (PfpPowerActionStartScenarioTracing.c)
 *     PfpLogScenarioEvent @ 0x1405760BC (PfpLogScenarioEvent.c)
 *     PfpLogEventRequest @ 0x1405762E0 (PfpLogEventRequest.c)
 * Callees:
 *     PfFbLogEntryComplete @ 0x140060424 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x140060480 (PfFbLogEntryReserve.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_14036DA60);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_14036DC10 + 1, 1u);
  }
  else
  {
    MEMORY[0] = MEMORY[0] & 0xFFFFFFFFFFFFF003uLL | (((v8 + 15) & 0x3FF0 | 0x8000CuLL) >> 2);
    MEMORY[8] = a2;
    MEMORY[0] ^= (MEMORY[0] ^ (a1 << 12)) & 0x1F000;
    memmove((void *)0x10, a3, a4);
    PfFbLogEntryComplete(0LL);
    return 0;
  }
  return (unsigned int)v9;
}
