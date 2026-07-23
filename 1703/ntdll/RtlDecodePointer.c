/*
 * XREFs of RtlDecodePointer @ 0x1800508D0
 * Callers:
 *     RtlUserThreadStart @ 0x180050C20 (RtlUserThreadStart.c)
 *     sub_1800D6480 @ 0x1800D6480 (sub_1800D6480.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E7490 (RtlpNotOwnerCriticalSection.c)
 *     sub_1800E758C @ 0x1800E758C (sub_1800E758C.c)
 *     sub_1801057D0 @ 0x1801057D0 (sub_1801057D0.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

PVOID __cdecl RtlDecodePointer(PVOID Ptr)
{
  int v2; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v2 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  return (PVOID)(__ROR8__(Ptr, 64 - (ProcessInformation & 0x3F)) ^ ProcessInformation);
}
