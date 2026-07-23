/*
 * XREFs of sub_18005EA08 @ 0x18005EA08
 * Callers:
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 * Callees:
 *     sub_18005EAA4 @ 0x18005EAA4 (sub_18005EAA4.c)
 *     sub_18005F008 @ 0x18005F008 (sub_18005F008.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18005EA08(__int64 a1)
{
  __int64 v2; // rax
  PVOID v3; // rcx
  __int64 v4; // rbx
  _WORD v6[20]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  RegionSize = (unsigned __int64)*(unsigned __int16 *)(a1 + 40) << 20;
  BaseAddress = 0LL;
  BaseAddress = (PVOID)sub_18005F008(a1, &RegionSize, RegionSize);
  if ( !BaseAddress )
    return 0LL;
  memset(v6, 0, 0x20uLL);
  v6[12] = *(_WORD *)(a1 + 40);
  v2 = sub_18005EAA4(a1, BaseAddress, v6);
  v3 = BaseAddress;
  v4 = v2;
  if ( v2 )
    v3 = 0LL;
  BaseAddress = v3;
  if ( v3 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return v4;
}
