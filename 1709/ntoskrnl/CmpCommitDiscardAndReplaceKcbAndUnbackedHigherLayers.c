/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140697BB8
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14069EE20 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardReplacePost @ 0x140697C10 (CmpCommitDiscardReplacePost.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(__int64 a1, __int64 a2)
{
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpCommitDiscardReplacePost,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(a1, a2);
}
