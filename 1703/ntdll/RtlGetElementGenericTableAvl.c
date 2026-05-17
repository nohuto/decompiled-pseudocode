/*
 * XREFs of RtlGetElementGenericTableAvl @ 0x1800F2F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069720 @ 0x180069720 (sub_180069720.c)
 *     sub_180072F58 @ 0x180072F58 (sub_180072F58.c)
 */

_QWORD *__fastcall RtlGetElementGenericTableAvl(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r8d
  unsigned int v4; // edx
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _QWORD *i; // rax
  int v9; // edx
  _QWORD *k; // rax
  int v11; // r8d
  unsigned int v12; // r11d
  int v13; // r10d
  _QWORD *j; // rax
  int v15; // edx

  v2 = *(_DWORD *)(a1 + 44);
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = a1;
  v6 = *(_QWORD **)(a1 + 32);
  if ( v3 == -1 || v3 + 1 > v2 )
    return 0LL;
  if ( !v6 )
  {
    v6 = *(_QWORD **)(v5 + 16);
    for ( i = (_QWORD *)v6[1]; i; i = (_QWORD *)i[1] )
      v6 = i;
    v4 = 0;
    *(_QWORD *)(v5 + 32) = v6;
    *(_DWORD *)(v5 + 40) = 0;
  }
  if ( v4 != v3 )
  {
    if ( v4 <= v3 )
    {
      v12 = v2 - v3;
      if ( v3 - v4 > v12 )
      {
        v6 = *(_QWORD **)(v5 + 16);
        for ( j = (_QWORD *)v6[2]; j; j = (_QWORD *)j[2] )
          v6 = j;
        if ( v12 != 1 )
        {
          do
            v6 = sub_180069720(v6);
          while ( v15 != 1 );
        }
      }
      else if ( v3 != v4 )
      {
        do
          v6 = sub_180072F58(v6);
        while ( v13 != 1 );
      }
    }
    else if ( v3 < v4 >> 1 )
    {
      v6 = *(_QWORD **)(v5 + 16);
      for ( k = (_QWORD *)v6[1]; k; k = (_QWORD *)k[1] )
        v6 = k;
      for ( ; v3; v3 = v11 - 1 )
        v6 = sub_180072F58(v6);
    }
    else if ( v4 != v3 )
    {
      do
        v6 = sub_180069720(v6);
      while ( v9 != 1 );
    }
    *(_QWORD *)(v5 + 32) = v6;
    *(_DWORD *)(v5 + 40) = v3;
  }
  return v6 + 4;
}
