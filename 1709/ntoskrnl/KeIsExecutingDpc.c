/*
 * XREFs of KeIsExecutingDpc @ 0x140141520
 * Callers:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KeStackAttachProcess @ 0x1400BD8C0 (KeStackAttachProcess.c)
 *     KeAttachProcess @ 0x1401216C0 (KeAttachProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}
