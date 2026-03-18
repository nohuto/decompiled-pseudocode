/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FAB8C
 * Callers:
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCommitDiscardReplacePost @ 0x1406FABE0 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(ULONG_PTR BugCheckParameter2, int a2)
{
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter2,
    (unsigned int)CmpCleanupDiscardReplacePre,
    (unsigned int)CmpCommitDiscardReplacePost,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(BugCheckParameter2);
}
