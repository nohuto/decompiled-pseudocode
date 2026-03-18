/*
 * XREFs of BcdGetElementData @ 0x1407350C0
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14025FD34 (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x14073529C (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
