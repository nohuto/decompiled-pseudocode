/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x14044C0A4
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14044BA6C (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14044BABC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14044BF50 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
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
