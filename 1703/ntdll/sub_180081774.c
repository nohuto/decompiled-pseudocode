/*
 * XREFs of sub_180081774 @ 0x180081774
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

NTSTATUS sub_180081774()
{
  ULONG TagHeap; // eax
  NTSTATUS result; // eax
  struct _PEB *v2; // rax
  _DWORD SystemInformation[262]; // [rsp+20h] [rbp-418h] BYREF
  ULONG ReturnLength; // [rsp+440h] [rbp+8h] BYREF

  TagHeap = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap, 0, (PWSTR)L"Threadpool!", (PWSTR)L"Cleanup Group");
  ReturnLength = 0;
  dword_18015C000 = TagHeap;
  result = ZwQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( ReturnLength < 4 )
    {
      return -1073741595;
    }
    else
    {
      dword_18015BFF0 = SystemInformation[0] + 1;
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
