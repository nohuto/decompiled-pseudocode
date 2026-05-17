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

struct _PEB *RtlDetectHeapLeaks()
{
  struct _PEB *result; // rax
  struct _PEB *v1; // rbx
  struct _PEB *v2; // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) == 0 )
  {
    result = NtCurrentPeb();
    if ( (result->NtGlobalFlag & 0x2000000) == 0 && (qword_180159B88 || (byte_18015C3BC & 3) != 0) )
    {
      dword_18015C750 = 0;
      result = (struct _PEB *)RtlCreateHeap(3uLL, 0LL, 0LL, 0LL, 0LL, 0LL);
      qword_180159A28 = (__int64)result;
      if ( result )
      {
        v1 = NtCurrentPeb();
        if ( v1->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Inspecting leaks at process shutdown ...\n");
        if ( (unsigned __int8)sub_1800F349C() )
        {
          qword_18015C748 = (__int64)v1->ProcessHeaps[v1->NumberOfHeaps - 1];
          sub_1800F3854();
          sub_1800F3AF8();
          RtlDestroyHeap(qword_180159A28);
          qword_180159A28 = 0LL;
          v2 = NtCurrentPeb();
          if ( dword_18015C750 )
          {
            if ( v2->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            result = (struct _PEB *)DbgPrint("%ld leaks detected.\n", dword_18015C750);
            if ( (byte_18015C3BC & 2) != 0 )
              __debugbreak();
          }
          else
          {
            if ( v2->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            return (struct _PEB *)DbgPrint("No leaks detected.\n");
          }
        }
        else
        {
          return (struct _PEB *)RtlDestroyHeap(qword_180159A28);
        }
      }
    }
  }
  return result;
}
