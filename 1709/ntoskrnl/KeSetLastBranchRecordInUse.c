/*
 * XREFs of KeSetLastBranchRecordInUse @ 0x140203DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSetLastBranchRecordInUse(char a1)
{
  KiLastBranchRecordInUse = a1;
}
