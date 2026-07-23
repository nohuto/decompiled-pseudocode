/*
 * XREFs of RtlpLoadNlsData @ 0x18007F624
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800502E0 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlGetParentLocaleName @ 0x180050A40 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180051F50 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x1800526D0 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800F5FE0 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007F700 (RtlGetLocaleFileMappingAddress.c)
 */

char RtlpLoadNlsData()
{
  _WORD *Heap; // rbx
  ULONG *v1; // r9
  unsigned int *v2; // rdx
  char *v3; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER DefaultCasingTableSize; // [rsp+38h] [rbp+10h] BYREF

  if ( pTblPtrs )
    return 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  if ( Heap )
  {
    if ( RtlGetLocaleFileMappingAddress(&BaseAddress, &gSystemLocale, &DefaultCasingTableSize, v1) >= 0 )
    {
      v2 = (unsigned int *)((char *)BaseAddress + *((unsigned int *)BaseAddress + 4));
      v3 = (char *)v2 + *v2;
      Heap[4] = *((_WORD *)v3 + 12);
      Heap[6] = *((_WORD *)v3 + 11);
      Heap[5] = *((_WORD *)v3 + 16);
      Heap[28] = *((_WORD *)v3 + 13);
      *((_QWORD *)Heap + 2) = (char *)v2 + *((unsigned int *)v3 + 7);
      *((_QWORD *)Heap + 3) = (char *)v2 + *((unsigned int *)v3 + 9);
      *((_QWORD *)Heap + 4) = (char *)v2 + *((unsigned int *)v3 + 10);
      *((_QWORD *)Heap + 5) = (char *)v2 + *((unsigned int *)v3 + 14);
      if ( _InterlockedCompareExchange64(&pTblPtrs, (signed __int64)Heap, 0LL) )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
