/*
 * XREFs of sub_1801058BC @ 0x1801058BC
 * Callers:
 *     sub_1801046E8 @ 0x1801046E8 (sub_1801046E8.c)
 * Callees:
 *     sub_18005E0E0 @ 0x18005E0E0 (sub_18005E0E0.c)
 *     sub_180105B24 @ 0x180105B24 (sub_180105B24.c)
 */

__int64 __fastcall sub_1801058BC(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // r8
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  _BitScanForward((unsigned int *)&v5, 0x20u);
  v6 = a1 + 16;
  v7 = (a4 >> 20) + 1;
  if ( (a4 & 0xFFFFF) == 0 )
    v7 = a4 >> 20;
  *(_DWORD *)(v6 + 72) = v5;
  result = sub_180105B24(v6, v7 << 8, a4 >> 20, 1LL);
  if ( (int)result >= 0 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    *(_DWORD *)a1 = 0;
    v10 = 0;
    v12[0] = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 8) = 0LL;
    v12[1] = 0LL;
    v12[2] = 0LL;
    while ( 1 )
    {
      HIDWORD(v12[0]) = v10;
      v11 = 0x200000LL;
      if ( v10 == 3 )
        v11 = 0x40000000LL;
      result = sub_18005E0E0(a1, (unsigned __int64)v12, (unsigned __int64 *)v11, v9);
      if ( (int)result < 0 )
        break;
      if ( ++v10 >= 4 )
        return 0LL;
    }
  }
  return result;
}
