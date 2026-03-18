/*
 * XREFs of CmpInitializeValueNameString @ 0x14059D1F8
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14044C6E4 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405A55BC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405A6C70 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpMergeKeyValues @ 0x140699A74 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x14047442C (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int16 v8; // cx

  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    *(_WORD *)a2 = 2 * *(_WORD *)(a1 + 2);
    result = CmpCopyCompressedName(a3, 0x7FFFu, (unsigned __int8 *)(a1 + 20), *(unsigned __int16 *)(a1 + 2));
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
