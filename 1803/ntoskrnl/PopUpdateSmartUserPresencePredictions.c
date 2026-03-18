/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14076C37C
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x1405E8F00 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14075F2E0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140077584 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14027FF14 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_1403AAA6D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_1403A9FA8 != v2 )
  {
    qword_1403A9FA8 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_1403A9FD1 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
