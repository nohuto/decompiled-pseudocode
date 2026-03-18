/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x1407D0AE4
 * Callers:
 *     BgConsoleDestroyInterface @ 0x1407D0938 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x14086F1D0 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x1407CF358 (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
