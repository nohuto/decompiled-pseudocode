/*
 * XREFs of RtlGetElementGenericTableAvl @ 0x1800EFFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800674E0 @ 0x1800674E0 (sub_1800674E0.c)
 *     sub_1800EFE7C @ 0x1800EFE7C (sub_1800EFE7C.c)
 */

_QWORD *__fastcall RtlGetElementGenericTableAvl(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // edx
  __int64 v4; // r10
  unsigned int v5; // r8d
  _QWORD *v6; // rcx
  _QWORD *i; // rax
  int v9; // edx
  _QWORD *k; // rax
  int v11; // r9d
  unsigned int v12; // r8d
  int v13; // r11d
  _QWORD *j; // rax
  int v15; // edx

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 40);
  v4 = a1;
  if ( v2 == -1 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 44);
  if ( v2 + 1 > v5 )
    return 0LL;
  v6 = *(_QWORD **)(a1 + 32);
  if ( !v6 )
  {
    v6 = *(_QWORD **)(v4 + 16);
    for ( i = (_QWORD *)v6[1]; i; i = (_QWORD *)i[1] )
      v6 = i;
    v3 = 0;
    *(_QWORD *)(v4 + 32) = v6;
    *(_DWORD *)(v4 + 40) = 0;
  }
  if ( v3 != v2 )
  {
    if ( v3 <= v2 )
    {
      v12 = v5 - v2;
      if ( v2 - v3 > v12 )
      {
        v6 = *(_QWORD **)(v4 + 16);
        for ( j = (_QWORD *)v6[2]; j; j = (_QWORD *)j[2] )
          v6 = j;
        if ( v12 != 1 )
        {
          do
            v6 = sub_1800674E0(v6);
          while ( v15 != 1 );
        }
      }
      else if ( v2 != v3 )
      {
        do
          v6 = sub_1800EFE7C(v6);
        while ( v13 != 1 );
      }
    }
    else if ( v2 < v3 >> 1 )
    {
      v6 = *(_QWORD **)(v4 + 16);
      for ( k = (_QWORD *)v6[1]; k; k = (_QWORD *)k[1] )
        v6 = k;
      for ( ; v2; v2 = v11 - 1 )
        v6 = sub_1800EFE7C(v6);
    }
    else if ( v3 != v2 )
    {
      do
        v6 = sub_1800674E0(v6);
      while ( v9 != 1 );
    }
    *(_QWORD *)(v4 + 32) = v6;
    *(_DWORD *)(v4 + 40) = v2;
  }
  return v6 + 4;
}
