/*
 * XREFs of BgkDestroy @ 0x14083DC74
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1408E447C (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x140231798 (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x14083D014 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x14083D050 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x14083D8D4 (BgDisplayBackgroundUpdate.c)
 *     BgLibraryDestroy @ 0x14083F8BC (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_1403CDD5C )
    return 0LL;
  BgkpDisableConsole();
  byte_1403CDD5D = 0;
  byte_1403CDD5C = 0;
  BgDisplayProgressIndicator(0);
  byte_1403CDC2D = 0;
  BgDisplayBackgroundUpdate(0);
  byte_1403CDC2C = 0;
  byte_1403CDD48 = 0;
  if ( qword_1403CDD38 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_1403CDD38);
    qword_1403CDD38 = 0LL;
  }
  return BgLibraryDestroy();
}
