/*
 * XREFs of sub_1800EB148 @ 0x1800EB148
 * Callers:
 *     sub_1800D3390 @ 0x1800D3390 (sub_1800D3390.c)
 * Callees:
 *     sub_1800EF244 @ 0x1800EF244 (sub_1800EF244.c)
 */

__int64 __fastcall sub_1800EB148(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  __int64 v4; // r11

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    *(_QWORD *)a2 = a1;
    *(_DWORD *)(a2 + 8) = sub_1800EF244(*(unsigned int *)(a1 + 20));
    v3 = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(v4 + 32) << 12;
    *(_QWORD *)(a2 + 24) += *(_QWORD *)(v4 + 104) << 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
