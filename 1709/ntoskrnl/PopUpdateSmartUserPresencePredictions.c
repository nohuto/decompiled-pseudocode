/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14070A4AC
 * Callers:
 *     PopWnfAudioCallback @ 0x140451960 (PopWnfAudioCallback.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1406F7C90 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140132AA4 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14024C0E4 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_1403661ED && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_140365728 != v2 )
  {
    qword_140365728 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140365751 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
