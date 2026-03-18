/*
 * XREFs of PsGetDefaultWsMaximum @ 0x140063F54
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
