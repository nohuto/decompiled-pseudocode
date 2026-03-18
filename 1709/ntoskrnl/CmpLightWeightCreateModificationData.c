/*
 * XREFs of CmpLightWeightCreateModificationData @ 0x14069F310
 * Callers:
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14069F4B0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14069F714 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14069F8B8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14069EC58 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14069F3DC (CmpLightWeightDuplicateParentLists.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14069FE44 (CmpLightWeightUpdateModificationActions.c)
 */

__int64 __fastcall CmpLightWeightCreateModificationData(__int64 a1, unsigned int **a2)
{
  ULONG_PTR v4; // rbp
  unsigned int *TransientPoolWithTag; // rax
  unsigned int *v6; // rbx
  int updated; // edi

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  TransientPoolWithTag = (unsigned int *)CmpAllocateTransientPoolWithTag(a1, 0x14uLL, 0x77554D43u);
  v6 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *(_QWORD *)TransientPoolWithTag = 0LL;
    *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
    ++*TransientPoolWithTag;
    TransientPoolWithTag[3] = -1;
    TransientPoolWithTag[4] = -1;
    updated = CmpLightWeightDuplicateParentLists(v4);
    if ( updated >= 0 )
    {
      updated = CmpLightWeightUpdateModificationActions(
                  v6,
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
                  *(_QWORD *)(a1 + 56));
      if ( updated >= 0 )
      {
        updated = 0;
        *a2 = v6;
        v6 = 0LL;
      }
    }
    if ( v6 )
      CmpLightWeightCleanupModifyKeyDataUoW(v4, v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)updated;
}
