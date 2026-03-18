/*
 * XREFs of BgkDestroy @ 0x1407D0D0C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x14086FB18 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1401F4268 (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x1407CE034 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1407CE2B8 (BgDisplayBackgroundUpdate.c)
 *     BgConsoleDestroyInterface @ 0x1407D0938 (BgConsoleDestroyInterface.c)
 *     BgLibraryDestroy @ 0x1407D2EDC (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140389F20 )
    return 0LL;
  BgkpDisableConsole();
  byte_140389F22 = 0;
  byte_140389F20 = 0;
  BgDisplayProgressIndicator(0);
  byte_140389F21 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140389F18 = 0;
  byte_140389F19 = 0;
  if ( qword_140389F08 )
  {
    BgConsoleDestroyInterface((__int64 (__fastcall **)())qword_140389F08);
    qword_140389F08 = 0LL;
  }
  return BgLibraryDestroy();
}
