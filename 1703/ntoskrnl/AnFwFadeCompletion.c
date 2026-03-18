/*
 * XREFs of AnFwFadeCompletion @ 0x140756C7C
 * Callers:
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140758B48 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140759E60 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x14075A200 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140757900 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x140757D34 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_140341A30 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140387580, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_14033FB58 )
    {
      BgpGxRectangleDestroy(qword_14033FB58);
      qword_14033FB58 = 0LL;
    }
    if ( qword_14033FB80 )
    {
      BgpGxRectangleDestroy(qword_14033FB80);
      qword_14033FB80 = 0LL;
    }
    if ( qword_14033FB88 )
    {
      BgpGxRectangleDestroy(qword_14033FB88);
      qword_14033FB88 = 0LL;
    }
    if ( qword_14033FB90 )
    {
      BgpGxRectangleDestroy(qword_14033FB90);
      qword_14033FB90 = 0LL;
    }
    if ( qword_14033FBB8 )
    {
      BgpGxRectangleDestroy(qword_14033FBB8);
      qword_14033FBB8 = 0LL;
    }
    if ( qword_14033FBC0 )
    {
      BgpGxRectangleDestroy(qword_14033FBC0);
      qword_14033FBC0 = 0LL;
    }
  }
}
