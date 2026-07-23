/*
 * XREFs of sub_18007C3E8 @ 0x18007C3E8
 * Callers:
 *     sub_180030B84 @ 0x180030B84 (sub_180030B84.c)
 *     RtlGetParentLocaleName @ 0x180031240 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180037850 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800F2550 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007C4C0 (RtlGetLocaleFileMappingAddress.c)
 */

char sub_18007C3E8()
{
  _WORD *Heap; // rbx
  ULONG *v1; // r9
  unsigned int *v2; // rdx
  char *v3; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER DefaultCasingTableSize; // [rsp+38h] [rbp+10h] BYREF

  if ( qword_18015D2B8 )
    return 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  if ( Heap )
  {
    if ( RtlGetLocaleFileMappingAddress(&BaseAddress, &DefaultLocaleId, &DefaultCasingTableSize, v1) >= 0 )
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
      if ( _InterlockedCompareExchange64(&qword_18015D2B8, (signed __int64)Heap, 0LL) )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
