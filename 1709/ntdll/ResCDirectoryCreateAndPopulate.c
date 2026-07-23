/*
 * XREFs of ResCDirectoryCreateAndPopulate @ 0x18008EB14
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18001B394 (ResCKeDirectoryOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     ResCDirectoryPopulate @ 0x18008EB98 (ResCDirectoryPopulate.c)
 */

_QWORD *__fastcall ResCDirectoryCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *Heap; // rax
  _QWORD *v7; // rbx
  _QWORD *result; // rax

  if ( a1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x48uLL);
    v7 = Heap;
    if ( Heap )
    {
      if ( (unsigned int)ResCDirectoryPopulate(Heap, a1, a2) )
      {
        result = v7;
        v7[2] = -1LL;
        *(_DWORD *)v7 = a3 & 0xFFFFFFFB;
        return result;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlSetLastWin32Error(87);
  }
  return 0LL;
}
