/*
 * XREFs of RmpClientConnectToResourceManager @ 0x180006488
 * Callers:
 *     RmConnectToResourceManager @ 0x180006440 (RmConnectToResourceManager.c)
 * Callees:
 *     RmpClientConnectionAllocateState @ 0x180006500 (RmpClientConnectionAllocateState.c)
 *     RmpClientConnectionInitialize @ 0x1800071A8 (RmpClientConnectionInitialize.c)
 *     RmpClientConnectionCleanup @ 0x18000BCB0 (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmpClientConnectToResourceManager(__int64 a1, _QWORD *a2)
{
  PVOID Heap; // rax
  void *v5; // rbx
  int State; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x50uLL);
  v5 = Heap;
  if ( Heap )
  {
    RmpClientConnectionInitialize(Heap);
    State = RmpClientConnectionAllocateState(a1, v5);
    if ( State >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
    {
      RmpClientConnectionCleanup(v5);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
