/*
 * XREFs of AnFwFadeCompletion @ 0x14083B3E4
 * Callers:
 *     ResFwFreeContext @ 0x14083B078 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x14083D0D8 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x14083FA30 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x14083FDE0 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x14083B8CC (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x14083D230 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_14039D7F0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_1403E9090, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_14039C978 )
    {
      BgpGxRectangleDestroy(qword_14039C978);
      qword_14039C978 = 0LL;
    }
    if ( qword_14039C9A0 )
    {
      BgpGxRectangleDestroy(qword_14039C9A0);
      qword_14039C9A0 = 0LL;
    }
    if ( qword_14039C9A8 )
    {
      BgpGxRectangleDestroy(qword_14039C9A8);
      qword_14039C9A8 = 0LL;
    }
    if ( qword_14039C9B0 )
    {
      BgpGxRectangleDestroy(qword_14039C9B0);
      qword_14039C9B0 = 0LL;
    }
    if ( qword_14039C9D8 )
    {
      BgpGxRectangleDestroy(qword_14039C9D8);
      qword_14039C9D8 = 0LL;
    }
    if ( qword_14039C9E0 )
    {
      BgpGxRectangleDestroy(qword_14039C9E0);
      qword_14039C9E0 = 0LL;
    }
  }
}
