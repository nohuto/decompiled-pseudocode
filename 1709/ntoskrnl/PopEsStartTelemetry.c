/*
 * XREFs of PopEsStartTelemetry @ 0x1405E2F38
 * Callers:
 *     PopEsWorker @ 0x1405E2D50 (PopEsWorker.c)
 *     PopEsExitSleep @ 0x140708424 (PopEsExitSleep.c)
 * Callees:
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 */

char PopEsStartTelemetry()
{
  __int64 v0; // rbx
  int v1; // ecx
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopCurrentPowerState(&v3);
  v1 = 0;
  PopEsAcOnline = v3;
  if ( BYTE1(v3) )
    v1 = HIDWORD(v3);
  PopEsLastBatteryThreshold = dword_1403661F0;
  result = byte_1403661F5;
  PopEsLastBatteryCharge = v1;
  PopEsLastUserAwaySetting = byte_1403661F5;
  PopEsLastStateChangeTimeStamp = v0;
  return result;
}
