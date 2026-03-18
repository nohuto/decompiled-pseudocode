/*
 * XREFs of sub_14045AAB0 @ 0x14045AAB0
 * Callers:
 *     WbCreateWarbirdProcess @ 0x14045A96C (WbCreateWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x1404987CC (WbRemoveWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_14045AAB0(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1 + 29);
    if ( !v1 )
      WbFreeWarbirdProcess((PVOID)a1);
  }
  return v1;
}
