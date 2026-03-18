/*
 * XREFs of ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00C0724
 * Callers:
 *     FinishStockFontReinit @ 0x1C00BFF40 (FinishStockFontReinit.c)
 *     FinishStockFontInit @ 0x1C00C02A0 (FinishStockFontInit.c)
 *     bInitStockFontsInternal @ 0x1C038220C (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C03825CC (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C038420C (bInitSystemFont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetStockFont(void *a1, int a2, int a3)
{
  unsigned int v3; // r9d
  bool v4; // zf
  __int64 v5; // r8
  void **v6; // rdx

  v3 = 0;
  if ( a1 )
  {
    v4 = a3 == 0;
    v5 = a2;
    if ( v4 )
      v6 = gahStockObjects;
    else
      v6 = gahStockObjects96;
    v6[v5] = a1;
  }
  LOBYTE(v3) = a1 != 0LL;
  return v3;
}
