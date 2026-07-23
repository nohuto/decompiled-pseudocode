/*
 * XREFs of sub_1800C9D70 @ 0x1800C9D70
 * Callers:
 *     LdrDeleteEnclave @ 0x1800C9790 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     ZwTerminateEnclave @ 0x18009E170 (ZwTerminateEnclave.c)
 *     sub_1800C9AFC @ 0x1800C9AFC (sub_1800C9AFC.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

NTSTATUS __fastcall sub_1800C9D70(PVOID *BaseAddress)
{
  NTSTATUS result; // eax
  PVOID v3; // rdx
  PVOID *v4; // rax

  result = ZwTerminateEnclave(BaseAddress[8], 4u);
  if ( result >= 0 )
  {
    BaseAddress[13] = 0LL;
    sub_1800C9AFC((__int64)BaseAddress, -1073741823);
    BaseAddress[8] = 0LL;
    RtlEnterCriticalSection(&CriticalSection);
    v3 = *BaseAddress;
    if ( *((PVOID **)*BaseAddress + 1) != BaseAddress || (v4 = (PVOID *)BaseAddress[1], *v4 != BaseAddress) )
      __fastfail(3u);
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    RtlLeaveCriticalSection(&CriticalSection);
    sub_1800C9DEC(BaseAddress);
    return 0;
  }
  return result;
}
