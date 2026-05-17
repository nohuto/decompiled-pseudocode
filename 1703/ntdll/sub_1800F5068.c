/*
 * XREFs of sub_1800F5068 @ 0x1800F5068
 * Callers:
 *     sub_18004A7E4 @ 0x18004A7E4 (sub_18004A7E4.c)
 * Callees:
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 */

__int64 __fastcall sub_1800F5068(__int64 a1, const WCHAR *a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  _WORD *v7; // rax
  __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = -1;
  v5 = 0;
  if ( !a3 )
    return v5;
  *a3 = 0LL;
  if ( (int)sub_180044C70(a1, a2, 1, &v9) < 0 )
    return v5;
  v6 = 0LL;
  v7 = (_WORD *)(28LL * v9 + 20 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
  while ( !*v7 )
  {
LABEL_7:
    ++v6;
    ++v7;
    if ( v6 >= 4 )
      goto LABEL_10;
  }
  if ( *v7 != 0xFFFF )
  {
    ++v5;
    goto LABEL_7;
  }
  v5 = -1;
LABEL_10:
  if ( v5 + 1 > 1 )
    *a3 = 28LL * v9 + 20 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  return v5;
}
