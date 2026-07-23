/*
 * XREFs of RtlpCreateTraverseNodes @ 0x18001BFDC
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18001BE40 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EB470 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     LdrpCalcAllocSize @ 0x18001C10C (LdrpCalcAllocSize.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpCreateTraverseNodes(_QWORD *a1)
{
  unsigned int v1; // ebx
  SIZE_T v3; // rax
  ULONG v4; // r9d
  PVOID Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = LdrpCalcAllocSize(42LL, 8LL);
    if ( v3 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v4, v3);
      if ( Heap )
        *a1 = Heap;
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
