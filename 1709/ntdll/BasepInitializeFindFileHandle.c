/*
 * XREFs of BasepInitializeFindFileHandle @ 0x18010EBD8
 * Callers:
 *     _ResFindFirstFileExW @ 0x18010FB90 (_ResFindFirstFileExW.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

unsigned __int64 __fastcall BasepInitializeFindFileHandle(__int64 a1)
{
  __int64 Heap; // rax
  unsigned __int64 v3; // rbx

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, BaseDllTag + 786432, 80LL);
  v3 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 8) = 0LL;
    *(_QWORD *)(Heap + 16) = 0LL;
    *(_DWORD *)(Heap + 24) = 0;
    *(_DWORD *)(Heap + 28) = 0;
    *(_QWORD *)Heap = a1;
    if ( (int)RtlInitializeCriticalSectionEx(Heap + 40, 0LL, 0) < 0 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
      return 0LL;
    }
  }
  return v3;
}
