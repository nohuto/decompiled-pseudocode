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
  __int64 Heap; // rbx
  unsigned int *v1; // rdx
  char *v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( qword_18015D2B8 )
    return 1;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 64LL);
  if ( Heap )
  {
    if ( (int)RtlGetLocaleFileMappingAddress(&v4, &dword_18015AA60, &v5) >= 0 )
    {
      v1 = (unsigned int *)(v4 + *(unsigned int *)(v4 + 16));
      v2 = (char *)v1 + *v1;
      *(_WORD *)(Heap + 8) = *((_WORD *)v2 + 12);
      *(_WORD *)(Heap + 12) = *((_WORD *)v2 + 11);
      *(_WORD *)(Heap + 10) = *((_WORD *)v2 + 16);
      *(_WORD *)(Heap + 56) = *((_WORD *)v2 + 13);
      *(_QWORD *)(Heap + 16) = (char *)v1 + *((unsigned int *)v2 + 7);
      *(_QWORD *)(Heap + 24) = (char *)v1 + *((unsigned int *)v2 + 9);
      *(_QWORD *)(Heap + 32) = (char *)v1 + *((unsigned int *)v2 + 10);
      *(_QWORD *)(Heap + 40) = (char *)v1 + *((unsigned int *)v2 + 14);
      if ( _InterlockedCompareExchange64(&qword_18015D2B8, Heap, 0LL) )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 1;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return 0;
}
