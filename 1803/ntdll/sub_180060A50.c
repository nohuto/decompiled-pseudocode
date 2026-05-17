/*
 * XREFs of sub_180060A50 @ 0x180060A50
 * Callers:
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_18006008C @ 0x18006008C (sub_18006008C.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 *     sub_1801050FC @ 0x1801050FC (sub_1801050FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180060A50(__int64 a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  __int64 v5; // rax
  char v7; // cl
  __int64 v8; // r11
  __int64 v9; // rbx
  char *v10; // r9
  int v11; // edx
  char *v12; // r8
  signed __int16 v13; // ax

  v5 = a1;
  v7 = *(_BYTE *)(a1 + 44);
  v8 = a2 >> v7;
  v9 = 2 * v8;
  v10 = (char *)(2 * v8 + v5 + *(unsigned __int16 *)(v5 + 46));
  _m_prefetchw(v10);
  LODWORD(v5) = a2 + a3 - 1;
  v11 = 0;
  LODWORD(v5) = (unsigned int)v5 >> v7;
  LODWORD(a1) = -1;
  v12 = &v10[2 * (unsigned int)(v5 - v8 + 1)];
  if ( v10 < v12 )
  {
    while ( 1 )
    {
      v13 = _InterlockedDecrement16((volatile signed __int16 *)v10);
      if ( a4 )
        goto LABEL_3;
      if ( !v13 )
        break;
LABEL_4:
      v10 += 2;
      v9 += 2LL;
      if ( v10 >= v12 )
        goto LABEL_5;
    }
    ++v11;
LABEL_3:
    if ( !v13 && (_DWORD)a1 == -1 )
      a1 = v9 >> 1;
    goto LABEL_4;
  }
LABEL_5:
  if ( a5 )
    *a5 = v11;
  return (unsigned int)a1;
}
