/*
 * XREFs of CmpLightWeightCleanupModifyKeyDataUoW @ 0x140703F30
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140703F80 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140704408 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x1407047C0 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140704968 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140704BCC (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140704F5C (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     CmpFreeIndexByCell @ 0x1406FF334 (CmpFreeIndexByCell.c)
 */

void __fastcall CmpLightWeightCleanupModifyKeyDataUoW(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rdx

  if ( (*a2)-- == 1 )
  {
    v5 = a2[3];
    if ( (_DWORD)v5 != -1 )
      CmpFreeIndexByCell(BugCheckParameter2, v5);
    v6 = a2[4];
    if ( (_DWORD)v6 != -1 )
      CmpFreeIndexByCell(BugCheckParameter2, v6);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
