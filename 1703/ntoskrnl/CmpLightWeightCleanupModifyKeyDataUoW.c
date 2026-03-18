/*
 * XREFs of CmpLightWeightCleanupModifyKeyDataUoW @ 0x140673CA8
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1406697FC (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140673D30 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140674188 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140674640 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140674910 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140674B74 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140674EFC (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     CmpFreeIndexByCell @ 0x140670088 (CmpFreeIndexByCell.c)
 */

void __fastcall CmpLightWeightCleanupModifyKeyDataUoW(ULONG_PTR BugCheckParameter2, unsigned int *P)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rdx

  if ( (*P)-- == 1 )
  {
    v5 = P[3];
    if ( (_DWORD)v5 != -1 )
      CmpFreeIndexByCell(BugCheckParameter2, v5);
    v6 = P[4];
    if ( (_DWORD)v6 != -1 )
      CmpFreeIndexByCell(BugCheckParameter2, v6);
    CmpFreeTransientPoolWithTag(P, 0x77554D43u);
  }
}
