/*
 * XREFs of LdrDeleteEnclave @ 0x1800D0060
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     LdrpDeleteEnclave @ 0x1800D0640 (LdrpDeleteEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 */

NTSTATUS __cdecl LdrDeleteEnclave(PVOID BaseAddress)
{
  __int64 *v1; // rax
  __int64 *v2; // rbx
  NTSTATUS v3; // edi
  PVOID BaseAddressa; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  BaseAddressa = BaseAddress;
  v1 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v2 = v1;
  if ( v1 )
  {
    v3 = LdrpDeleteEnclave(v1);
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v2 + 2));
    LdrpDereferenceEnclave(v2);
    if ( v3 < 0 )
      return v3;
  }
  RegionSize = 0LL;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
}
