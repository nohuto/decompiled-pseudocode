/*
 * XREFs of BgkDestroy @ 0x140758A14
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x14083795C (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1401EEB68 (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x14075777C (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x140758AC0 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x140758E08 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_14036E49C )
    return 0LL;
  BgkpDisableConsole();
  byte_14036E49D = 0;
  byte_14036E49C = 0;
  BgDisplayProgressIndicator(0);
  byte_14036E351 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_14036E350 = 0;
  byte_14036E488 = 0;
  if ( qword_14036E478 )
  {
    BgConsoleDestroyInterface();
    qword_14036E478 = 0LL;
  }
  return BgLibraryDestroy();
}
