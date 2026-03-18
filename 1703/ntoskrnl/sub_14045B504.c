/*
 * XREFs of sub_14045B504 @ 0x14045B504
 * Callers:
 *     sub_14045B468 @ 0x14045B468 (sub_14045B468.c)
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 * Callees:
 *     sub_14045B538 @ 0x14045B538 (sub_14045B538.c)
 */

signed __int64 __fastcall sub_14045B504(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_14045B538();
  }
  return v2;
}
