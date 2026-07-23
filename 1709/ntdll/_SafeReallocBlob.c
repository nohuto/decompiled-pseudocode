/*
 * XREFs of _SafeReallocBlob @ 0x1800FF4B4
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1800FD634 (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguageList @ 0x1800FD694 (RtlpMuiRegResizeLanguageList.c)
 *     RtlpMuiRegResizeLanguages @ 0x1800FD6FC (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall SafeReallocBlob(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v7; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax

  v7 = a3;
  if ( !a1 )
    return 0LL;
  v10 = a4 * v7;
  if ( v10 > 0xFFFFFFFF || a2 + (unsigned int)v10 < a2 )
    return 0LL;
  v11 = a2 + v10;
  if ( a7 )
    *a7 = v11;
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1, v11);
}
