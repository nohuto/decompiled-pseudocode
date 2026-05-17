/*
 * XREFs of sub_1800FD9BC @ 0x1800FD9BC
 * Callers:
 *     sub_1800FF8DC @ 0x1800FF8DC (sub_1800FF8DC.c)
 *     sub_1800FFAA8 @ 0x1800FFAA8 (sub_1800FFAA8.c)
 * Callees:
 *     sub_180102CE0 @ 0x180102CE0 (sub_180102CE0.c)
 */

__int64 __fastcall sub_1800FD9BC(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r11
  __int64 *v4; // r9
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 result; // rax
  _QWORD *v9; // r10
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  *a3 = 0;
  v4 = *(__int64 **)(a1 + 288);
  while ( v4 != (__int64 *)(a1 + 288) )
  {
    *a2 += (unsigned int)(*((_DWORD *)v4 + 8) << 12);
    *a3 += *((_DWORD *)v4 + 15);
    v5 = *((_DWORD *)v4 + 14);
    v4 = (__int64 *)*v4;
    v3 += (unsigned int)(v5 << 12);
  }
  *a2 += *(_QWORD *)(a1 + 560);
  sub_180102CE0(a1, &v10, &v11, *a2);
  result = v7 + v10 - v11;
  *v9 = v6 + v10;
  return result;
}
