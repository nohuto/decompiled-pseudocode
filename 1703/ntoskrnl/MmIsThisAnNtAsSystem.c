/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x14012CA60
 * Callers:
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x1405839EC (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14059E748 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14059E7F4 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1405D5334 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_1403E3134;
}
