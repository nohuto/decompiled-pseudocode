/*
 * XREFs of InitModuleAllocations @ 0x1C0122F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0123028 (-InitLogQMsg@@YAXXZ.c)
 *     InitQMiPTrace @ 0x1C01C0988 (InitQMiPTrace.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitModuleAllocations()
{
  __int64 result; // rax

  InitLogQMsg();
  FastGetProfileDwordW(0LL, 2LL, L"USERPostMortemLogging", (unsigned int)gdwPostMortemLogging, &gdwPostMortemLogging, 0);
  if ( (gdwPostMortemLogging & 1) != 0 )
    InitQMiPTrace();
  if ( (gdwPostMortemLogging & 2) != 0 )
  {
    gdwAtomicCheckLogSize = 12;
    gpAtomickCheckStacks = Win32AllocPoolZInit(768LL, 1297118037LL);
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
  {
    *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = Win32AllocPoolZInit(8704LL, 1297118037LL);
    guiLinkWindowLogSize = 64;
  }
  FastGetProfileDwordW(0LL, 2LL, L"USERExtraInstrumentations", gdwExtraInstrumentations, gdwExtraInstrumentations, 0);
  result = gdwExtraInstrumentations;
  if ( (gdwExtraInstrumentations & 4) != 0 )
  {
    result = gfRecordPnpNotification;
    gfRecordPnpNotification = 1;
  }
  return result;
}
