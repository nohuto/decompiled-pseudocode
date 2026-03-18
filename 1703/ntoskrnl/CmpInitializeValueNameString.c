/*
 * XREFs of CmpInitializeValueNameString @ 0x1404CC440
 * Callers:
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140573C38 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpMergeKeyValues @ 0x14066F3AC (CmpMergeKeyValues.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int16 v8; // cx

  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    *(_WORD *)a2 = 2 * *(_WORD *)(a1 + 2);
    result = CmpCopyCompressedName(a3, 0x7FFFLL, a1 + 20, *(unsigned __int16 *)(a1 + 2));
    *(_QWORD *)(v6 + 8) = v7;
    *(_WORD *)(v6 + 2) = 0x7FFF;
  }
  else
  {
    v8 = *(_WORD *)(a1 + 2);
    result = a1 + 20;
    *(_WORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = a1 + 20;
    *(_WORD *)(a2 + 2) = v8;
  }
  return result;
}
