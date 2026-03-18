/*
 * XREFs of KeIsExecutingDpc @ 0x1400B2A00
 * Callers:
 *     KeAttachProcess @ 0x140033D40 (KeAttachProcess.c)
 *     MiAttachWorkingSet @ 0x1400B21D0 (MiAttachWorkingSet.c)
 *     KeStackAttachProcess @ 0x1400B25D0 (KeStackAttachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}
