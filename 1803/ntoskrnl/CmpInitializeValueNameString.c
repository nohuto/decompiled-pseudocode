/*
 * XREFs of CmpInitializeValueNameString @ 0x14054F5BC
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14054F244 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405DF734 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpMergeKeyValues @ 0x1406FE0DC (CmpMergeKeyValues.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140704D74 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x1404A33EC (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // r10
  __int16 v4; // dx
  __int16 v5; // bx
  __int64 result; // rax
  __int64 v7; // r11

  v3 = a2;
  v4 = *(_WORD *)(a1 + 2);
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v5 = 0x7FFF;
    *(_WORD *)v3 = 2 * v4;
    result = CmpCopyCompressedName(a3, 0x7FFFu, (unsigned __int8 *)(a1 + 20), *(unsigned __int16 *)(a1 + 2));
  }
  else
  {
    *(_WORD *)v3 = v4;
    v5 = v4;
    v7 = a1 + 20;
  }
  *(_QWORD *)(v3 + 8) = v7;
  *(_WORD *)(v3 + 2) = v5;
  return result;
}
