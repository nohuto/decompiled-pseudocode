/*
 * XREFs of RtlDetectHeapLeaks @ 0x180070460
 * Callers:
 *     LdrShutdownProcess @ 0x18006FA10 (LdrShutdownProcess.c)
 * Callees:
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800F349C @ 0x1800F349C (sub_1800F349C.c)
 *     sub_1800F3854 @ 0x1800F3854 (sub_1800F3854.c)
 *     sub_1800F3AF8 @ 0x1800F3AF8 (sub_1800F3AF8.c)
 */

void RtlDetectHeapLeaks(void)
{
  struct _PEB *v0; // rbx
  struct _PEB *v1; // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x2000000) == 0
    && (qword_180159B88 || (byte_18015C3BC & 3) != 0) )
  {
    dword_18015C750 = 0;
    qword_180159A28 = RtlCreateHeap(3u, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( qword_180159A28 )
    {
      v0 = NtCurrentPeb();
      if ( v0->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Inspecting leaks at process shutdown ...\n");
      if ( (unsigned __int8)sub_1800F349C() )
      {
        qword_18015C748 = (__int64)v0->ProcessHeaps[v0->NumberOfHeaps - 1];
        sub_1800F3854();
        sub_1800F3AF8();
        RtlDestroyHeap(qword_180159A28);
        qword_180159A28 = 0LL;
        v1 = NtCurrentPeb();
        if ( dword_18015C750 )
        {
          if ( v1->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("%ld leaks detected.\n", dword_18015C750);
          if ( (byte_18015C3BC & 2) != 0 )
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
        RtlDestroyHeap(qword_180159A28);
      }
    }
  }
}
