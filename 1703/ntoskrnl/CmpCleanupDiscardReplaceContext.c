/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x1404CFF1C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406697FC (CmpCleanupLightWeightUoWData.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140674B74 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpCleanupDiscardReplacePost @ 0x14066D480 (CmpCleanupDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCleanupDiscardReplaceContext(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1 + 2;
    if ( (_QWORD *)*v3 != v3 )
    {
      result = CmpEnumerateAllHigherLayerKcbs(
                 v2,
                 (unsigned int)CmpCleanupDiscardReplacePre,
                 (unsigned int)CmpCleanupDiscardReplacePost,
                 (_DWORD)a1,
                 1,
                 0);
      if ( (_QWORD *)*v3 != v3 )
        return CmpCleanupDiscardReplacePost(*a1, a1);
    }
  }
  return result;
}
