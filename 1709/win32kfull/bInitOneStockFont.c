/*
 * XREFs of bInitOneStockFont @ 0x1C03826F0
 * Callers:
 *     bInitStockFontsInternal @ 0x1C038220C (bInitStockFontsInternal.c)
 * Callees:
 *     ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00C09A4 (-bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     bInitOneStockFontInternal @ 0x1C03825CC (bInitOneStockFontInternal.c)
 */

__int64 __fastcall bInitOneStockFont(
        const WCHAR *a1,
        int a2,
        int a3,
        void *a4,
        unsigned int *KeyValueInformation,
        __int64 a6,
        unsigned __int16 *a7,
        void *a8)
{
  unsigned int v10; // ebx

  v10 = 0;
  if ( bQueryValueKey(a1, a4, KeyValueInformation, 0x200u) )
  {
    memmove(a8, KeyValueInformation + 3, KeyValueInformation[2]);
    return (unsigned int)bInitOneStockFontInternal(a7, a2, a3, 0);
  }
  return v10;
}
