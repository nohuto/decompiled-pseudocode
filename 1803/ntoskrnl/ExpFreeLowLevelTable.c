/*
 * XREFs of ExpFreeLowLevelTable @ 0x140547724
 * Callers:
 *     ExpFreeHandleTable @ 0x140547650 (ExpFreeHandleTable.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x140547764 (ExpFreeTablePagedPool.c)
 */

__int64 __fastcall ExpFreeLowLevelTable(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  if ( v4 )
    ExpFreeTablePagedPool(a1, v4, 2048LL);
  return ExpFreeTablePagedPool(a1, a2, 4096LL);
}
