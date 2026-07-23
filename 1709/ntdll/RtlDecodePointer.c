/*
 * XREFs of RtlDecodePointer @ 0x18006CE80
 * Callers:
 *     RtlUserThreadStart @ 0x18006CB60 (RtlUserThreadStart.c)
 *     RtlpCallVectoredHandlers @ 0x18006CBA8 (RtlpCallVectoredHandlers.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D2020 (LdrpLogFatalUserCallbackException.c)
 *     LdrpFatalExceptionFilter @ 0x1800D6B48 (LdrpFatalExceptionFilter.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E6AE0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E6BDC (RtlpPossibleDeadlock.c)
 *     TppExceptionFilter @ 0x18010ADF0 (TppExceptionFilter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A03E0 (NtQueryInformationProcess.c)
 */

PVOID __cdecl RtlDecodePointer(PVOID Ptr)
{
  int v2; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  return (PVOID)(__ROR8__(Ptr, 64 - (ProcessInformation & 0x3F)) ^ ProcessInformation);
}
