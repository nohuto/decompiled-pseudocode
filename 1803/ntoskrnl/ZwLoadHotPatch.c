/*
 * XREFs of ZwLoadHotPatch @ 0x1401A94C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadHotPatch(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
