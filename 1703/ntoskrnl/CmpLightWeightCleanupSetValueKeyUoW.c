/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x140673CF8
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1406697FC (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140674070 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14067450C (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 */

void __fastcall CmpLightWeightCleanupSetValueKeyUoW(ULONG_PTR a1, unsigned int *a2)
{
  ULONG_PTR v4; // rdx

  if ( (*a2)-- == 1 )
  {
    v4 = a2[2];
    if ( (_DWORD)v4 != -1 )
      HvFreeCell(a1, v4);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
