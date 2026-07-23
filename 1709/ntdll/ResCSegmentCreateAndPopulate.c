/*
 * XREFs of ResCSegmentCreateAndPopulate @ 0x18008E23C
 * Callers:
 *     ResCKeSegmentOpenMapping @ 0x18008E1DC (ResCKeSegmentOpenMapping.c)
 *     _ResCCreateMappingExclusive @ 0x18010EF60 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x18010F2F8 (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ResCSegmentPopulate @ 0x18008E2BC (ResCSegmentPopulate.c)
 */

void *__fastcall ResCSegmentCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *Heap; // rax
  void *v7; // rbx

  if ( a1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
    v7 = Heap;
    if ( Heap )
    {
      *Heap = a3 & 0xFFFFFFFB;
      if ( (unsigned int)ResCSegmentPopulate(Heap, a1, a2) )
        return v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlSetLastWin32Error(87);
  }
  return 0LL;
}
