/*
 * XREFs of AnFwDisplayProgressIndicator @ 0x14083D254
 * Callers:
 *     BgDisplayProgressIndicator @ 0x14083D014 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryDisable @ 0x14083D0D8 (BgpFwLibraryDisable.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x14005A690 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     LogFwStat @ 0x14083B8CC (LogFwStat.c)
 *     TxtpClearCache @ 0x14083C4B0 (TxtpClearCache.c)
 *     AnFwpDisableProgressTimer @ 0x14083C60C (AnFwpDisableProgressTimer.c)
 *     RaspClearCache @ 0x14083C73C (RaspClearCache.c)
 *     AnFwpProgressAnimationManual @ 0x140840924 (AnFwpProgressAnimationManual.c)
 */

__int64 __fastcall AnFwDisplayProgressIndicator(char a1, __int64 a2)
{
  bool v2; // al
  unsigned __int16 i; // ax

  LOBYTE(a2) = byte_1403D1808;
  if ( !a1 && !byte_1403D1808 )
    return 0LL;
  v2 = 0;
  if ( (dword_14039D7F0 & 0x100000) != 0 )
    v2 = (dword_14039D7F0 & 0x1000) != 0;
  if ( !a1 )
  {
    if ( (dword_14039D7F0 & 0xC00) != 0xC00 && !v2 )
      AnFwpDisableProgressTimer();
    word_14039B808 = -7989;
    BgpTxtDisplayCharacter(qword_14039D8B0, 0xE0CBu, 0, 0LL, 0LL);
    TxtpClearCache();
    if ( RasterizerInitialized )
      RaspClearCache();
    return 0LL;
  }
  if ( byte_1403D1808 )
  {
    if ( v2 )
      goto LABEL_18;
    return 3221225659LL;
  }
  else if ( qword_14039D8B0 )
  {
    if ( (dword_14039D7F0 & 0x40000) == 0 )
    {
      byte_1403D1808 = 1;
      if ( !v2 )
      {
        word_14039B808 = -8110;
        LogFwStat(1, 2, 0LL);
        for ( i = word_14039B808; i <= 0xE0CBu; i = ++word_14039B808 )
          BgpTxtDisplayCharacter(qword_14039D8B0, i, 1, 0LL, 0LL);
        word_14039B808 = -7989;
        BgpTxtDisplayCharacter(qword_14039D8B0, 0xE0CBu, 0, 0LL, 0LL);
        qword_1403D1810 = LogFwStat(0, 2, 0LL).QuadPart;
        KeInitializeTimerEx(&Timer, NotificationTimer);
        KeInitializeDpc(&stru_1403E9010, AnFwpProgressIndicatorTimer, 0LL);
        KeSetCoalescableTimer(&Timer, 0LL, 0x1Eu, 0, &stru_1403E9010);
        return 0LL;
      }
      qword_1403D1810 = 0LL;
      word_14039B808 = -8111;
LABEL_18:
      AnFwpProgressAnimationManual((unsigned int)dword_14039D7F0, a2);
      return 0LL;
    }
    return 3221225473LL;
  }
  else
  {
    return 3221225626LL;
  }
}
