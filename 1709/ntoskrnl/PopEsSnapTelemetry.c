/*
 * XREFs of PopEsSnapTelemetry @ 0x140708450
 * Callers:
 *     PopEsUpdateState @ 0x1405E2E84 (PopEsUpdateState.c)
 *     PopEsEnterSleepShutdown @ 0x1407083E0 (PopEsEnterSleepShutdown.c)
 * Callees:
 *     PopTraceEsState @ 0x140247B14 (PopTraceEsState.c)
 */

char __fastcall PopEsSnapTelemetry(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rsi
  char result; // al

  v1 = 0;
  v3 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( *(_BYTE *)(a1 + 1) )
    v1 = *(_DWORD *)(a1 + 12);
  if ( PopEsLastStateChangeTimeStamp )
    PopTraceEsState();
  PopEsAcOnline = *(_BYTE *)a1;
  PopEsLastBatteryThreshold = dword_1403661F0;
  result = byte_1403661F5;
  PopEsLastStateChangeTimeStamp = v3;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_1403661F5;
  return result;
}
