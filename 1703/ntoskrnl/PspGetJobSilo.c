/*
 * XREFs of PspGetJobSilo @ 0x14003A23C
 * Callers:
 *     PsGetProcessSilo @ 0x14003A228 (PsGetProcessSilo.c)
 *     PsIsProcessInSilo @ 0x140094938 (PsIsProcessInSilo.c)
 *     PsGetJobSilo @ 0x140239490 (PsGetJobSilo.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x1406DE24C (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
