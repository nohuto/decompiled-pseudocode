/*
 * XREFs of RtlpInitializeHandleTableForAtomTable @ 0x14042B70C
 * Callers:
 *     RtlCreateAtomTableEx @ 0x1400137A0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExCreateHandleTable @ 0x14042B7E4 (ExCreateHandleTable.c)
 */

bool __fastcall RtlpInitializeHandleTableForAtomTable(__int64 a1)
{
  __int64 HandleTable; // rax

  HandleTable = ExCreateHandleTable(0LL, 0LL);
  *(_QWORD *)(a1 + 16) = HandleTable;
  return HandleTable != 0;
}
