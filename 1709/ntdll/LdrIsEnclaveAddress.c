/*
 * XREFs of LdrIsEnclaveAddress @ 0x1800D01C0
 * Callers:
 *     RtlGuardCheckImageBase @ 0x18007981C (RtlGuardCheckImageBase.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 */

char __fastcall LdrIsEnclaveAddress(PVOID BaseAddress)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 *v4; // rdi
  __int64 v5; // rax
  _BYTE MemoryInformation[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 0);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    v5 = v2[13];
    if ( v5
      && BaseAddress == *(PVOID *)(v5 + 184)
      && ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryRegionInformationEx,
           MemoryInformation,
           0x20uLL,
           0LL) >= 0 )
    {
      v3 = (MemoryInformation[12] & 0x40) != 0;
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    LdrpDereferenceEnclave(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
