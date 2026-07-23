/*
 * XREFs of RtlDecodePointer @ 0x18006CEA0
 * Callers:
 *     RtlUserThreadStart @ 0x180073670 (RtlUserThreadStart.c)
 *     sub_1800CBC40 @ 0x1800CBC40 (sub_1800CBC40.c)
 *     sub_1800D0A98 @ 0x1800D0A98 (sub_1800D0A98.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E2150 (RtlpNotOwnerCriticalSection.c)
 *     sub_1800E224C @ 0x1800E224C (sub_1800E224C.c)
 *     sub_1801085E0 @ 0x1801085E0 (sub_1801085E0.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
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
