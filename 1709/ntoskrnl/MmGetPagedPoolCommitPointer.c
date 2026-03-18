/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14013265C
 * Callers:
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140389348;
}
