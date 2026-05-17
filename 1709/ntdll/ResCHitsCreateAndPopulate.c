/*
 * XREFs of ResCHitsCreateAndPopulate @ 0x18008ED3C
 * Callers:
 *     ResCKeHitsOpenMapping @ 0x18008ECD8 (ResCKeHitsOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ResCHitsPopulate @ 0x18008EDBC (ResCHitsPopulate.c)
 */

unsigned __int64 __fastcall ResCHitsCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *Heap; // rax
  unsigned __int64 v7; // rbx

  if ( a1 )
  {
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 40LL);
    v7 = (unsigned __int64)Heap;
    if ( Heap )
    {
      *Heap = a3 & 0xFFFFFFFB;
      if ( (unsigned int)ResCHitsPopulate(Heap, a1, a2) )
        return v7;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlSetLastWin32Error(0x57u);
  }
  return 0LL;
}
