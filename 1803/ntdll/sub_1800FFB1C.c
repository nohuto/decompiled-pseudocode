/*
 * XREFs of sub_1800FFB1C @ 0x1800FFB1C
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 */

void *__fastcall sub_1800FFB1C(
        int a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int VirtualMemory; // r15d
  __int64 Heap; // rax
  void *v15; // rdi
  unsigned __int64 *v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+50h] [rbp-28h]

  if ( (unsigned __int64)a3 <= 0x10 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid ReserveSize parameter - %Ix\n", a3);
LABEL_6:
    sub_1801011EC(v11, v10);
    return 0LL;
  }
  if ( (unsigned __int64)a3 < a4 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid CommitSize parameter - %Ix\n", a4);
    goto LABEL_6;
  }
  if ( (a1 & 1) != 0 && a5 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not specify Lock parameter with HEAP_NO_SERIALIZE\n");
    goto LABEL_6;
  }
  if ( a2 )
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory < 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) invalid,  Status = %lx\n", a2, VirtualMemory);
      goto LABEL_6;
    }
    if ( v16 != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) != to BaseAddress (%p)\n", a2, v16);
      goto LABEL_6;
    }
    if ( v17 == 0x10000 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) is free or not writable\n", v16);
      goto LABEL_6;
    }
  }
  Heap = RtlCreateHeap(a1 | 0x10000060u, a2, a3, a4, a5, a6);
  v15 = (void *)Heap;
  if ( Heap )
  {
    if ( (*(_DWORD *)(Heap + 112) & 0x8000000) != 0 )
      *(_WORD *)(Heap + 304) = sub_1800244C4(1u);
    sub_18010180C(v15);
  }
  return v15;
}
