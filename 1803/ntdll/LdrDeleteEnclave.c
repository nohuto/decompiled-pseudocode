/*
 * XREFs of LdrDeleteEnclave @ 0x1800C9790
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     sub_1800C9D70 @ 0x1800C9D70 (sub_1800C9D70.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

NTSTATUS __cdecl LdrDeleteEnclave(PVOID BaseAddress)
{
  __int64 *v1; // rax
  __int64 *v2; // rbx
  NTSTATUS v3; // edi
  PVOID BaseAddressa; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  BaseAddressa = BaseAddress;
  v1 = sub_18001EE04((unsigned __int64)BaseAddress, 1);
  v2 = v1;
  if ( v1 )
  {
    v3 = sub_1800C9D70(v1);
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v2 + 2));
    sub_1800C9DEC(v2);
    if ( v3 < 0 )
      return v3;
  }
  RegionSize = 0LL;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
}
