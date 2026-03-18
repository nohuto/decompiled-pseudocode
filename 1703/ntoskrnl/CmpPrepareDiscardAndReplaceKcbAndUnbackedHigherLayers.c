/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066DB80
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140674B74 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x14066DBF0 (CmpPrepareDiscardReplacePost.c)
 */

__int64 __fastcall CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx

  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)a2 = a1;
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int (__fastcall *)(volatile signed __int32 *, __int64))CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpPrepareDiscardReplacePost,
    a2,
    1,
    0);
  result = *(unsigned int *)(a2 + 8);
  if ( (int)result >= 0 )
  {
    CmpPrepareDiscardReplacePost(a1, a2);
    v5 = *(_DWORD *)(a2 + 8);
    result = 0LL;
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  return result;
}
