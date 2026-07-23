/*
 * XREFs of sub_18007D0E0 @ 0x18007D0E0
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x18007D190 (RtlCreateTagHeap.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

NTSTATUS sub_18007D0E0()
{
  ULONG TagHeap; // eax
  NTSTATUS result; // eax
  struct _PEB *v2; // rax
  _DWORD SystemInformation[262]; // [rsp+20h] [rbp-418h] BYREF
  ULONG ReturnLength; // [rsp+440h] [rbp+8h] BYREF

  TagHeap = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap, 0, (PWSTR)L"Threadpool!", (PWSTR)L"Cleanup Group");
  ReturnLength = 0;
  dword_18015D050 = TagHeap;
  result = ZwQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( ReturnLength < 4 )
    {
      return -1073741595;
    }
    else
    {
      dword_18015D044 = SystemInformation[0] + 1;
      v2 = NtCurrentPeb();
      v2->TppWorkerpListLock = 0LL;
      v2 = (struct _PEB *)((char *)v2 + 912);
      v2->Mutant = v2;
      *(_QWORD *)&v2->InheritedAddressSpace = v2;
      return 0;
    }
  }
  return result;
}
