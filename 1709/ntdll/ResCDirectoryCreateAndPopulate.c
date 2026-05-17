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

unsigned __int64 __fastcall ResCDirectoryCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  __int64 Heap; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 result; // rax

  if ( a1 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 72LL);
    v7 = Heap;
    if ( Heap )
    {
      if ( (unsigned int)ResCDirectoryPopulate(Heap, a1, a2) )
      {
        result = v7;
        *(_QWORD *)(v7 + 16) = -1LL;
        *(_DWORD *)v7 = a3 & 0xFFFFFFFB;
        return result;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlSetLastWin32Error(0x57u);
  }
  return 0LL;
}
