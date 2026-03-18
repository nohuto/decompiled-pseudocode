/*
 * XREFs of PspGetJobSilo @ 0x14012CFAC
 * Callers:
 *     PsIsProcessInSilo @ 0x140089050 (PsIsProcessInSilo.c)
 *     PsGetProcessSilo @ 0x14012CF90 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x14024E430 (PsGetJobSilo.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x1407146F0 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
