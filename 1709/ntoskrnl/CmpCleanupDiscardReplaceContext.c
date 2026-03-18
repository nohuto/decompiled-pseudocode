/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x140472B60
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpCleanupLightWeightPrepare @ 0x14044BA6C (CmpCleanupLightWeightPrepare.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14069EE20 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14069F714 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplacePost @ 0x140697AF0 (CmpCleanupDiscardReplacePost.c)
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
