/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x14083D0AC
 * Callers:
 *     BgConsoleDestroyInterface @ 0x14083D050 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x1408E4574 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x14083D1D0 (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
