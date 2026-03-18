/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x1407CFA7C
 * Callers:
 *     BgDisplayProgressIndicator @ 0x1407CE034 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     BgpTxtDisplayCharacter @ 0x14013BA14 (BgpTxtDisplayCharacter.c)
 *     AnFwpDisableProgressTimer @ 0x1407CE49C (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x1407CF9E4 (RaspClearCache.c)
 *     LogFwStat @ 0x1407CFD10 (LogFwStat.c)
 *     TxtpClearCache @ 0x1407CFF14 (TxtpClearCache.c)
 *     AnFwpProgressAnimationManual @ 0x1407D3DA8 (AnFwpProgressAnimationManual.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1, __int64 a2)
{
  bool v2; // al
  unsigned __int16 i; // ax
  __int64 v5; // rcx
  __int64 v6; // rcx

  LOBYTE(a2) = byte_14038D870;
  if ( !a1 && !byte_14038D870 )
    return 0LL;
  v2 = 0;
  if ( (dword_14035A1B0 & 0x100000) != 0 )
    v2 = (dword_14035A1B0 & 0x1000) != 0;
  if ( !a1 )
  {
    v5 = dword_14035A1B0 & 0xC00;
    if ( (_DWORD)v5 != 3072 && !v2 )
      AnFwpDisableProgressTimer(v5);
    word_1403581C4 = -7989;
    BgpTxtDisplayCharacter(qword_14035A260, 57547LL, 0, 0LL, 0LL);
    TxtpClearCache(v6);
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_14038D870 )
  {
    if ( v2 )
      goto LABEL_18;
    return 3221225659LL;
  }
  else if ( qword_14035A260 )
  {
    if ( (dword_14035A1B0 & 0x40000) == 0 )
    {
      byte_14038D870 = 1;
      if ( !v2 )
      {
        word_1403581C4 = -8110;
        LogFwStat(1LL, 2LL, 0LL);
        for ( i = word_1403581C4; i <= 0xE0CBu; i = ++word_1403581C4 )
          BgpTxtDisplayCharacter(qword_14035A260, i, 1, 0LL, 0LL);
        word_1403581C4 = -7989;
        BgpTxtDisplayCharacter(qword_14035A260, 57547LL, 0, 0LL, 0LL);
        qword_14038D878 = LogFwStat(0LL, 2LL, 0LL);
        KeInitializeTimerEx(&stru_1403A29F0, NotificationTimer);
        KeInitializeDpc(&stru_1403A2970, AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&stru_1403A29F0, 0LL, 0x1Eu, 0, &stru_1403A2970);
        return 0LL;
      }
      qword_14038D878 = 0LL;
      word_1403581C4 = -8111;
LABEL_18:
      AnFwpProgressAnimationManual((unsigned int)dword_14035A1B0, a2);
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
