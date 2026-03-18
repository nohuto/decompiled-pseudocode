/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066D548
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(__int64 a1, __int64 a2)
{
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int)CmpCleanupDiscardReplacePre,
    (unsigned int)CmpCommitDiscardReplacePost,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(a1, a2);
}
