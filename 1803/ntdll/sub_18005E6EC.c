/*
 * XREFs of sub_18005E6EC @ 0x18005E6EC
 * Callers:
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 * Callees:
 *     sub_1800626D0 @ 0x1800626D0 (sub_1800626D0.c)
 */

unsigned __int64 __fastcall sub_18005E6EC(_QWORD *a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 i; // rbx
  int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // rdx
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx

  v4 = a2;
  v5 = a1[2];
  i = a1[1];
  if ( (v5 & 1) != 0 && i )
    i ^= (unsigned __int64)(a1 + 1);
  v9 = v5 & 1;
  v10 = 0LL;
  while ( i )
  {
    v11 = *(unsigned __int16 *)(i + 24);
    if ( v4 < v11 )
    {
      v12 = *(_QWORD *)i;
      v10 = i;
    }
    else
    {
      if ( v4 <= v11 )
        goto LABEL_15;
      v12 = *(_QWORD *)(i + 8);
    }
    if ( v9 && v12 )
      i ^= v12;
    else
      i = v12;
  }
  i = v10;
LABEL_15:
  if ( i )
  {
    if ( a3 > 1u )
    {
      v13 = a1[3];
      v14 = a3 - 1LL;
      while ( 1 )
      {
        v15 = (__int64)(i - *(_QWORD *)(v13 + 32)) >> *(_DWORD *)(v13 + 88);
        if ( v4 + v15 + a3 - (v14 & (v15 + a3 - 1LL)) - 1 <= v15 + (unsigned __int64)*(unsigned __int16 *)(i + 24) )
          break;
        v16 = *(_QWORD ***)(i + 8);
        v17 = i;
        if ( v16 )
        {
          v18 = *v16;
          for ( i = *(_QWORD *)(i + 8); v18; v18 = (_QWORD *)*v18 )
            i = (unsigned __int64)v18;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v17 )
              break;
            v17 = i;
          }
        }
        if ( !i )
          return i;
      }
      *a4 = sub_1800626D0(v13 + 16, v15 + a3 - (v14 & (v15 + a3 - 1LL)) - 1);
    }
    else
    {
      *a4 = i;
    }
  }
  return i;
}
