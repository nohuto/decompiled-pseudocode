/*
 * XREFs of PfLogEvent @ 0x1400B9904
 * Callers:
 *     PfpRpLogDeprioEvent @ 0x140001FA0 (PfpRpLogDeprioEvent.c)
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     PfpLogApplicationEvent @ 0x1400B9690 (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x1400B9884 (PfLogForegroundProcess.c)
 *     PfLogFileDataAccess @ 0x1402398E0 (PfLogFileDataAccess.c)
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140430C28 (PfpPowerActionStartScenarioTracing.c)
 *     PfpLogEventRequest @ 0x1406F257C (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1406F268C (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryComplete @ 0x140012FE8 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x1400B99F0 (PfFbLogEntryReserve.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // edi
  __int64 v10; // rdx

  v8 = (a4 + 31) & 0xFFFFFFF0;
  v9 = PfFbLogEntryReserve(&stru_1403879E0);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140387B90 + 1, 1u);
  }
  else
  {
    MEMORY[0] = MEMORY[0] & 0xFFFFFFFFFFFFF003uLL | ((v8 & 0x3FF0 | 0x8000CuLL) >> 2);
    MEMORY[8] = a2;
    MEMORY[0] ^= (MEMORY[0] ^ (a1 << 12)) & 0x1F000;
    memmove((void *)0x10, a3, a4);
    PfFbLogEntryComplete(0LL, v10, v8);
    return 0;
  }
  return (unsigned int)v9;
}
