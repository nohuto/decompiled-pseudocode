/*
 * XREFs of sub_180109E7C @ 0x180109E7C
 * Callers:
 *     sub_1800FE9E4 @ 0x1800FE9E4 (sub_1800FE9E4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180109E7C(__int64 a1)
{
  _BYTE *v1; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _BYTE *i; // rdx
  _QWORD *v6; // r8
  _QWORD *j; // rcx
  _BYTE *v8; // rsi
  __int64 *v9; // rbx
  __int64 result; // rax
  _BYTE *k; // rdx
  __int64 *v12; // r8
  __int64 *m; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // [rsp+28h] [rbp-18h]
  __int64 *v17; // [rsp+28h] [rbp-18h]
  _BYTE *v18; // [rsp+30h] [rbp-10h]
  _BYTE *v19; // [rsp+30h] [rbp-10h]

  v1 = *(_BYTE **)(a1 + 24);
  v3 = v1;
  v18 = v1;
  v16 = v1;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_7;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v1 = v18;
      v3 = v16;
    }
    v4 = (_QWORD *)*v3;
    if ( (*v3 & 1) != 0 )
    {
LABEL_7:
      for ( i = v1 + 8; ; i += 8 )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_12;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v3 = *(_QWORD **)i;
      v1 = i;
      v16 = *(_QWORD **)i;
      v4 = *(_QWORD **)i;
      v18 = i;
    }
    else
    {
      v3 = (_QWORD *)*v3;
      v16 = v4;
    }
LABEL_12:
    if ( !v4 )
      break;
    v6 = v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v1 = v18;
      v3 = v16;
    }
    for ( j = v1; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v3 )
      {
        *j = *v3;
        --*(_DWORD *)(a1 + 16);
        *v3 |= 0x8000000000000002uLL;
        v3 = j;
        v16 = j;
        goto LABEL_22;
      }
    }
    v6 = 0LL;
    v1 = v18;
    v3 = v16;
LABEL_22:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v6, *(_QWORD *)(a1 + 64));
  }
  v8 = *(_BYTE **)(a1 + 8);
  v9 = (__int64 *)v8;
  v19 = v8;
  v17 = (__int64 *)v8;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_29;
    if ( (*v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v8 = v19;
      v9 = v17;
    }
    result = *v9;
    if ( (*v9 & 1) != 0 )
    {
LABEL_29:
      for ( k = v8 + 8; ; k += 8 )
      {
        if ( (unsigned __int64)k >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        {
          result = 0LL;
          goto LABEL_34;
        }
        if ( (*k & 1) == 0 )
          break;
      }
      v9 = *(__int64 **)k;
      v8 = k;
      v17 = *(__int64 **)k;
      result = *(_QWORD *)k;
      v19 = k;
    }
    else
    {
      v9 = (__int64 *)*v9;
      v17 = (__int64 *)result;
    }
LABEL_34:
    if ( !result )
      break;
    v12 = v9;
    if ( (*v9 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v8 = v19;
      v9 = v17;
    }
    for ( m = (__int64 *)v8; (*m & 1) == 0; m = (__int64 *)*m )
    {
      if ( (__int64 *)*m == v9 )
      {
        *m = *v9;
        --*(_DWORD *)a1;
        *v9 |= 0x8000000000000002uLL;
        v9 = m;
        v17 = m;
        goto LABEL_44;
      }
    }
    v12 = 0LL;
    v8 = v19;
    v9 = v17;
LABEL_44:
    (*(void (__fastcall **)(__int64 *, _QWORD))(a1 + 56))(v12, *(_QWORD *)(a1 + 64));
  }
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(_QWORD *)(a1 + 24);
  if ( v14 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v14, *(_QWORD *)(a1 + 64));
  if ( v15 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v15, *(_QWORD *)(a1 + 64));
  return result;
}
