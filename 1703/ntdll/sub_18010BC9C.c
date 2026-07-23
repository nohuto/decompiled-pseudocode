/*
 * XREFs of sub_18010BC9C @ 0x18010BC9C
 * Callers:
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

_RTL_CRITICAL_SECTION *__fastcall sub_18010BC9C(_RTL_CRITICAL_SECTION_DEBUG *a1)
{
  _RTL_CRITICAL_SECTION *Heap; // rax
  _RTL_CRITICAL_SECTION *v3; // rbx

  Heap = (_RTL_CRITICAL_SECTION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015C4D8 + 786432, 0x50uLL);
  v3 = Heap;
  if ( Heap )
  {
    *(_QWORD *)&Heap->LockCount = 0LL;
    Heap->OwningThread = 0LL;
    LODWORD(Heap->LockSemaphore) = 0;
    HIDWORD(Heap->LockSemaphore) = 0;
    Heap->DebugInfo = a1;
    if ( RtlInitializeCriticalSectionEx(Heap + 1, 0, 0) < 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      return 0LL;
    }
  }
  return v3;
}
