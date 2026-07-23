/*
 * XREFs of sub_1800EFBEC @ 0x1800EFBEC
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D89C0 (RtlCompleteProcessCloning.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     sub_1800F0D88 @ 0x1800F0D88 (sub_1800F0D88.c)
 */

__int64 __fastcall sub_1800EFBEC(unsigned int a1)
{
  struct _PEB *v2; // rdi
  PVOID *ProcessHeaps; // r12
  ULONG NumberOfHeaps; // ebx
  __int64 v5; // rsi
  int v6; // r15d
  _DWORD *v7; // rcx
  char MemoryInformation[32]; // [rsp+38h] [rbp-70h] BYREF
  int v10; // [rsp+58h] [rbp-50h]

  v2 = NtCurrentPeb();
  if ( a1 )
  {
    ProcessHeaps = v2->ProcessHeaps;
    NumberOfHeaps = v2->NumberOfHeaps;
    v5 = 0LL;
    v6 = 0;
    while ( (unsigned int)v5 < v2->NumberOfHeaps )
    {
      ZwQueryVirtualMemory(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        ProcessHeaps[v5],
        MemoryBasicInformation,
        MemoryInformation,
        0x30uLL,
        0LL);
      if ( v10 == 4096 && ((v7 = ProcessHeaps[v5], v7[38] == -285217025) || v7[4] == -571548178) )
        ProcessHeaps[v6++] = v7;
      else
        --NumberOfHeaps;
      v5 = (unsigned int)(v5 + 1);
    }
    v2->NumberOfHeaps = NumberOfHeaps;
  }
  return sub_1800F0D88(a1, v2->NumberOfHeaps);
}
