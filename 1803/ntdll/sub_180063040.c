/*
 * XREFs of sub_180063040 @ 0x180063040
 * Callers:
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 * Callees:
 *     sub_1800629E8 @ 0x1800629E8 (sub_1800629E8.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall sub_180063040(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  BaseAddress = (PVOID)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
                      + ((a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 88LL) << 20));
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 24);
  RegionSize = v3 << 20;
  sub_1800629E8(a1, (char *)a2);
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
}
