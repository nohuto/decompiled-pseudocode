/*
 * XREFs of sub_180063040 @ 0x180063040
 * Callers:
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 * Callees:
 *     sub_1800629E8 @ 0x1800629E8 (sub_1800629E8.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_180063040(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(_BYTE *)a2 & 4) == 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 88LL) << 20);
  if ( v2 )
    v3 = *(unsigned __int16 *)(a2 + 24);
  else
    v3 = *(_QWORD *)(a2 + 24);
  v5 = v3 << 20;
  sub_1800629E8(a1, (char *)a2);
  return ZwFreeVirtualMemory(-1LL, &v6, &v5, 0x8000LL);
}
