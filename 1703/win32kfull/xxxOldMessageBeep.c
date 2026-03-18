/*
 * XREFs of xxxOldMessageBeep @ 0x1C019634C
 * Callers:
 *     xxxMessageBeep @ 0x1C0137A80 (xxxMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 *     UserBeep @ 0x1C01963EC (UserBeep.c)
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
    UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
    v4 = UserBeep(440LL, 125LL);
    EnterCrit(0LL, 1LL);
    return v4;
  }
  else
  {
    xxxSoundSentry();
    return 1LL;
  }
}
