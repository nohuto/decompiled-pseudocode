/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x14057DF08
 * Callers:
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140704BCC (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpCleanupDiscardReplacePost @ 0x1406FAAB0 (CmpCleanupDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
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
