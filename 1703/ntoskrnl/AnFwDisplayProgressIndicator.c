/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x140757A8C
 * Callers:
 *     BgDisplayProgressIndicator @ 0x14075777C (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     BgpTxtDisplayCharacter @ 0x14014076C (BgpTxtDisplayCharacter.c)
 *     AnFwpProgressAnimationManual @ 0x1407551BC (AnFwpProgressAnimationManual.c)
 *     AnFwpDisableProgressTimer @ 0x140755A34 (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x140755AA0 (RaspClearCache.c)
 *     LogFwStat @ 0x140757900 (LogFwStat.c)
 *     TxtpClearCache @ 0x140757CB0 (TxtpClearCache.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1)
{
  bool v1; // al
  unsigned __int16 i; // ax
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( !a1 && !byte_14036F158 )
    return 0LL;
  v1 = 0;
  if ( (dword_140341A30 & 0x100000) != 0 )
    v1 = (dword_140341A30 & 0x1000) != 0;
  if ( !a1 )
  {
    v4 = dword_140341A30 & 0xC00;
    if ( (_DWORD)v4 != 3072 && !v1 )
      AnFwpDisableProgressTimer(v4);
    word_14033E0CC = -7989;
    BgpTxtDisplayCharacter(qword_140341AE0, 57547LL, 0, 0LL, 0LL);
    TxtpClearCache(v5);
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_14036F158 )
  {
    if ( v1 )
      goto LABEL_7;
    return 3221225659LL;
  }
  else if ( qword_140341AE0 )
  {
    if ( (dword_140341A30 & 0x40000) == 0 )
    {
      byte_14036F158 = 1;
      if ( !v1 )
      {
        word_14033E0CC = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_14033E0CC; i <= 0xE0CBu; i = ++word_14033E0CC )
          BgpTxtDisplayCharacter(qword_140341AE0, i, 1, 0LL, 0LL);
        word_14033E0CC = -7989;
        BgpTxtDisplayCharacter(qword_140341AE0, 57547LL, 0, 0LL, 0LL);
        qword_14036E360 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&Timer, NotificationTimer);
        KeInitializeDpc(&stru_140385DD0, (PKDEFERRED_ROUTINE)AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&Timer, 0LL, 0x1Eu, 0, &stru_140385DD0);
        return 0LL;
      }
      qword_14036E360 = 0LL;
      word_14033E0CC = -8111;
LABEL_7:
      AnFwpProgressAnimationManual();
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
