/*
 * XREFs of NdisProcessorIndexToNumber @ 0x1C0050FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NdisProcessorIndexToNumber(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNum)
{
  return KeGetProcessorNumberFromIndex(ProcIndex, ProcNum);
}
