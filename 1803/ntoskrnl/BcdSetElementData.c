/*
 * XREFs of BcdSetElementData @ 0x1407E1FE4
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402BEE64 (WheaPersistOfflinedPage.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}
