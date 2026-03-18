/*
 * XREFs of BcdSetElementData @ 0x1407350DC
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14025FD34 (WheaPersistOfflinedPage.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}
