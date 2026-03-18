/*
 * XREFs of AnFwFadeCompletion @ 0x1407CF3B8
 * Callers:
 *     BgpFwLibraryDisable @ 0x1407CE670 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x1407D3050 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1407D33F0 (BgpConsoleDisplayString.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x1407CFD10 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x1407CFF98 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_14035A1B0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_1403A2A70, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_1403581E8 )
    {
      BgpGxRectangleDestroy(qword_1403581E8);
      qword_1403581E8 = 0LL;
    }
    if ( qword_140358210 )
    {
      BgpGxRectangleDestroy(qword_140358210);
      qword_140358210 = 0LL;
    }
    if ( qword_140358218 )
    {
      BgpGxRectangleDestroy(qword_140358218);
      qword_140358218 = 0LL;
    }
    if ( qword_140358220 )
    {
      BgpGxRectangleDestroy(qword_140358220);
      qword_140358220 = 0LL;
    }
    if ( qword_140358248 )
    {
      BgpGxRectangleDestroy(qword_140358248);
      qword_140358248 = 0LL;
    }
    if ( qword_140358250 )
    {
      BgpGxRectangleDestroy(qword_140358250);
      qword_140358250 = 0LL;
    }
  }
}
