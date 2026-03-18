/*
 * XREFs of BcdGetElementData @ 0x1407E1FC8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402BEE64 (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x1407E21A4 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
