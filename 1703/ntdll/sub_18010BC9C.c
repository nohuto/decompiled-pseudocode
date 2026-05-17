/*
 * XREFs of sub_18010BC9C @ 0x18010BC9C
 * Callers:
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

unsigned __int64 __fastcall sub_18010BC9C(__int64 a1)
{
  __int64 Heap; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rbx

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C4D8 + 786432, 80LL);
  v4 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 8) = 0LL;
    *(_QWORD *)(Heap + 16) = 0LL;
    *(_DWORD *)(Heap + 24) = 0;
    *(_DWORD *)(Heap + 28) = 0;
    *(_QWORD *)Heap = a1;
    if ( (int)RtlInitializeCriticalSectionEx(Heap + 40, 0LL, 0LL, v3) < 0 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
      return 0LL;
    }
  }
  return v4;
}
