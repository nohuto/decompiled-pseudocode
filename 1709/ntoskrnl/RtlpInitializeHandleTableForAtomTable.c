/*
 * XREFs of RtlpInitializeHandleTableForAtomTable @ 0x14045B0D8
 * Callers:
 *     RtlCreateAtomTableEx @ 0x140013790 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExCreateHandleTable @ 0x14045DA4C (ExCreateHandleTable.c)
 */

bool __fastcall RtlpInitializeHandleTableForAtomTable(__int64 a1)
{
  __int64 HandleTable; // rax

  HandleTable = ExCreateHandleTable(0LL, 0LL);
  *(_QWORD *)(a1 + 16) = HandleTable;
  return HandleTable != 0;
}
