/*
 * XREFs of RtlEncodePointer @ 0x180077840
 * Callers:
 *     sub_180077618 @ 0x180077618 (sub_180077618.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180077820 (RtlSetUnhandledExceptionFilter.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

PVOID __cdecl RtlEncodePointer(PVOID Ptr)
{
  int v2; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v2 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  return (PVOID)__ROR8__((unsigned __int64)Ptr ^ ProcessInformation, ProcessInformation & 0x3F);
}
