/*
 * XREFs of sub_1800473D0 @ 0x1800473D0
 * Callers:
 *     sub_18003ADA8 @ 0x18003ADA8 (sub_18003ADA8.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 * Callees:
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 */

__int64 __fastcall sub_1800473D0(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  PVOID v5; // rax

  v2 = 0;
  v3 = a2 + 2;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (unsigned int)(a2 + 2) > 0xFFFE )
  {
    return (unsigned int)-1073741562;
  }
  else if ( (v3 & 1) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = sub_180043FE0(v3);
    *(_QWORD *)(a1 + 8) = v5;
    if ( v5 )
      *(_WORD *)(a1 + 2) = v3;
    else
      return (unsigned int)-1073741801;
  }
  return v2;
}
