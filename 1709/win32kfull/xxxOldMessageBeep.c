/*
 * XREFs of xxxOldMessageBeep @ 0x1C01A1DD4
 * Callers:
 *     xxxMessageBeep @ 0x1C013EAE0 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 *     UserBeep @ 0x1C01A1E74 (UserBeep.c)
 */

__int64 __fastcall xxxOldMessageBeep(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  if ( (gdwPUDFlags & 0x80000) != 0 )
  {
    if ( gdwInAtomicOperation )
    {
      a1 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation);
    v4 = UserBeep(440LL, 125LL);
    EnterCrit(0LL, 1LL);
    return v4;
  }
  else
  {
    xxxSoundSentry(a1, a2, a3, a4);
    return 1LL;
  }
}
