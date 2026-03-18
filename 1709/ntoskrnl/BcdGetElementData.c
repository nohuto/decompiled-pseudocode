/*
 * XREFs of BcdGetElementData @ 0x14077935C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402898F4 (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x140779538 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
