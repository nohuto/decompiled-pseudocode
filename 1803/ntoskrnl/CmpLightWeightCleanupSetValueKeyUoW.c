/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x14054F7E4
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14054F694 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1407042E8 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
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
