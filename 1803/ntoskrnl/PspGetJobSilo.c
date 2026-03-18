/*
 * XREFs of PspGetJobSilo @ 0x1400CF63C
 * Callers:
 *     PsGetProcessSilo @ 0x1400CF620 (PsGetProcessSilo.c)
 *     PsIsProcessInSilo @ 0x1400F0EC0 (PsIsProcessInSilo.c)
 *     PsGetJobSilo @ 0x1402847C0 (PsGetJobSilo.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x1407788F0 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
