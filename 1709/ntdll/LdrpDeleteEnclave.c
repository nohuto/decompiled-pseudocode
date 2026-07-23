/*
 * XREFs of LdrpDeleteEnclave @ 0x1800D0640
 * Callers:
 *     LdrDeleteEnclave @ 0x1800D0060 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A3730 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D03CC (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 */

NTSTATUS __fastcall LdrpDeleteEnclave(PVOID *BaseAddress)
{
  NTSTATUS result; // eax
  PVOID v3; // rdx
  PVOID *v4; // rax

  result = NtTerminateEnclave(BaseAddress[8], 4u);
  if ( result >= 0 )
  {
    BaseAddress[13] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)BaseAddress, -1073741823);
    BaseAddress[8] = 0LL;
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v3 = *BaseAddress;
    if ( *((PVOID **)*BaseAddress + 1) != BaseAddress || (v4 = (PVOID *)BaseAddress[1], *v4 != BaseAddress) )
      __fastfail(3u);
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    LdrpDereferenceEnclave(BaseAddress);
    return 0;
  }
  return result;
}
