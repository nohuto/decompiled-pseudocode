/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14003CCA8
 * Callers:
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_14036D088;
}
