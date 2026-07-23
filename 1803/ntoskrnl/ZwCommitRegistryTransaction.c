/*
 * XREFs of ZwCommitRegistryTransaction @ 0x1401A8780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCommitRegistryTransaction(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
