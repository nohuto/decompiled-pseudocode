/*
 * XREFs of sub_14050F0D8 @ 0x14050F0D8
 * Callers:
 *     WbHeapExecuteCall @ 0x14050EC60 (WbHeapExecuteCall.c)
 *     sub_14050EE10 @ 0x14050EE10 (sub_14050EE10.c)
 *     WbGetWarbirdThread @ 0x14050EF0C (WbGetWarbirdThread.c)
 *     WbFreeWarbirdProcess @ 0x1405399A8 (WbFreeWarbirdProcess.c)
 *     sub_140584498 @ 0x140584498 (sub_140584498.c)
 * Callees:
 *     sub_140584440 @ 0x140584440 (sub_140584440.c)
 */

signed __int64 __fastcall sub_14050F0D8(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8));
    if ( !v2 )
      sub_140584440();
  }
  return v2;
}
