/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x140006260
 * Callers:
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x1406116A8 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x1406220CC (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140622178 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140654D50 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_14044B190;
}
