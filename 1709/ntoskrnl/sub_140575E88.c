/*
 * XREFs of sub_140575E88 @ 0x140575E88
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x1404FC020 (WbRemoveWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x140575D44 (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x140575EBC (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_140575E88(volatile signed __int64 *a1)
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
