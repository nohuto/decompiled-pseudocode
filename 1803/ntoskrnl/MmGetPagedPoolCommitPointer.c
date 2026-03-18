/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1400D2F04
 * Callers:
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_1403CC5C8;
}
