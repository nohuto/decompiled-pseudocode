/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x1406D4BCC
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x140575E70 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1406C7310 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140004F20 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140236ED4 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_14034BB6D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_14034B0C8 != v2 )
  {
    qword_14034B0C8 = v2;
    if ( byte_14034B0F1 )
    {
      if ( PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
