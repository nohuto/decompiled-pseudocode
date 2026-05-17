/*
 * XREFs of RtlEncodePointer @ 0x180075AD0
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180075888 (RtlpAddVectoredHandler.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180075AB0 (RtlSetUnhandledExceptionFilter.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 */

__int64 __fastcall RtlEncodePointer(__int64 a1)
{
  NTSTATUS v2; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  return __ROR8__(a1 ^ ProcessInformation, ProcessInformation & 0x3F);
}
