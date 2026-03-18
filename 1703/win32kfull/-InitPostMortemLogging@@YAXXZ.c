/*
 * XREFs of ?InitPostMortemLogging@@YAXXZ @ 0x1C0117570
 * Callers:
 *     InitModuleAllocations @ 0x1C0117520 (InitModuleAllocations.c)
 * Callees:
 *     InitQMiPTrace @ 0x1C0117600 (InitQMiPTrace.c)
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0117684 (-InitLogQMsg@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void InitPostMortemLogging(void)
{
  char v0; // al

  InitLogQMsg();
  FastGetProfileDwordW(0LL, 2LL, L"USERPostMortemLogging", (unsigned int)gdwPostMortemLogging, &gdwPostMortemLogging, 0);
  v0 = gdwPostMortemLogging;
  if ( (gdwPostMortemLogging & 1) != 0 )
  {
    InitQMiPTrace();
    v0 = gdwPostMortemLogging;
  }
  if ( (v0 & 2) != 0 )
  {
    gdwAtomicCheckLogSize = 12;
    gpAtomickCheckStacks = Win32AllocPoolZInit(768LL, 1297118037LL);
    v0 = gdwPostMortemLogging;
  }
  if ( (v0 & 4) != 0 )
  {
    gpLinkWindowLog = (struct LINKWINDOW_LOG *)Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
}
