/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1400FFF60
 * Callers:
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     CcInitializeProcessor @ 0x1405C6974 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1405C6A20 (ObInitializeProcessor.c)
 *     PsChangeQuantumTable @ 0x1405E7654 (PsChangeQuantumTable.c)
 *     IopQueryProcessorInitValues @ 0x1405F18A8 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140400130;
}
