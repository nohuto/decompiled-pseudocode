/*
 * XREFs of RtlDetectHeapLeaks @ 0x180048460
 * Callers:
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     sub_1800F0584 @ 0x1800F0584 (sub_1800F0584.c)
 *     sub_1800F0948 @ 0x1800F0948 (sub_1800F0948.c)
 *     sub_1800F0C00 @ 0x1800F0C00 (sub_1800F0C00.c)
 */

void RtlDetectHeapLeaks(void)
{
  struct _PEB *v0; // rbx
  struct _PEB *v1; // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x2000000) == 0
    && (qword_18015ABC8 || (byte_18015D430 & 3) != 0) )
  {
    dword_18015D780 = 0;
    qword_18015AA70 = RtlCreateHeap(3u, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( qword_18015AA70 )
    {
      v0 = NtCurrentPeb();
      if ( v0->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Inspecting leaks at process shutdown ...\n");
      if ( (unsigned __int8)sub_1800F0584() )
      {
        qword_18015D778 = (__int64)v0->ProcessHeaps[v0->NumberOfHeaps - 1];
        sub_1800F0948();
        sub_1800F0C00();
        RtlDestroyHeap(qword_18015AA70);
        qword_18015AA70 = 0LL;
        v1 = NtCurrentPeb();
        if ( dword_18015D780 )
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("%ld leaks detected.\n", dword_18015D780);
          if ( (byte_18015D430 & 2) != 0 )
            __debugbreak();
        }
        else
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("No leaks detected.\n");
        }
      }
      else
      {
        RtlDestroyHeap(qword_18015AA70);
      }
    }
  }
}
