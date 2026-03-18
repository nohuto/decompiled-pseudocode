/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140758B1C
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140758AC0 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140837A54 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x140758C40 (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
