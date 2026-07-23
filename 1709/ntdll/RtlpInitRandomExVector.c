/*
 * XREFs of RtlpInitRandomExVector @ 0x1800FAC90
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpSubSegmentInitialize @ 0x18005E860 (RtlpSubSegmentInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlpInitRandomExVector(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  int v3; // eax
  int *v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // r10
  __int64 result; // rax
  int ProcessInformation; // [rsp+58h] [rbp+20h] BYREF

  v3 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  v4 = RtlpRandomExConstantVector;
  LODWORD(v5) = LdrSystemDllInitBlock.RngData ^ ProcessInformation;
  v6 = 128LL;
  do
  {
    v5 = (2147483629 * (unsigned __int64)(unsigned int)v5 + 2147483587) % 0x7FFFFFFF;
    *v4++ = v5;
    --v6;
  }
  while ( v6 );
  result = 1LL;
  RtlpRandomExAuxVarY = (2147483629 * (unsigned __int64)(unsigned int)v5 + 2147483587) % 0x7FFFFFFF;
  return result;
}
