/*
 * XREFs of sub_14050F2F4 @ 0x14050F2F4
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x14050EB18 (WbRemoveWarbirdProcess.c)
 *     WbDispatchOperation @ 0x14050F10C (WbDispatchOperation.c)
 *     WbGetWarbirdProcess @ 0x14050F32C (WbGetWarbirdProcess.c)
 *     WbCreateWarbirdProcess @ 0x140582D70 (WbCreateWarbirdProcess.c)
 * Callees:
 *     WbFreeWarbirdProcess @ 0x1405399A8 (WbFreeWarbirdProcess.c)
 */

signed __int64 __fastcall sub_14050F2F4(volatile signed __int64 *a1)
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
