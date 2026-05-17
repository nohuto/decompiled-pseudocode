/*
 * XREFs of RtlStackDbContextCleanup @ 0x18010CD5C
 * Callers:
 *     RtlpHpStackTraceDisable @ 0x18010057C (RtlpHpStackTraceDisable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextCleanup(__int64 a1)
{
  _BYTE *v1; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  _BYTE *i; // rdx
  _QWORD *v6; // r8
  _QWORD *j; // rcx
  _BYTE *v8; // rsi
  __int64 *v9; // rdi
  __int64 result; // rax
  _BYTE *k; // rdx
  __int64 *v12; // r8
  __int64 *m; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi

  v1 = *(_BYTE **)(a1 + 24);
  v3 = v1;
  while ( 1 )
  {
    if ( !v3 || (v4 = (_QWORD *)*v3, (*v3 & 1) != 0) )
    {
      for ( i = v1 + 8; ; i += 8 )
      {
        if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_10;
        }
        if ( (*i & 1) == 0 )
          break;
      }
      v3 = *(_QWORD **)i;
      v1 = i;
      v4 = *(_QWORD **)i;
    }
    else
    {
      v3 = (_QWORD *)*v3;
    }
LABEL_10:
    if ( !v4 )
      break;
    v6 = v3;
    for ( j = v1; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v3 )
      {
        *j = *v3;
        --*(_DWORD *)(a1 + 16);
        *v3 |= 0x8000000000000002uLL;
        v3 = j;
        goto LABEL_18;
      }
    }
    v6 = 0LL;
LABEL_18:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v6, *(_QWORD *)(a1 + 64));
  }
  v8 = *(_BYTE **)(a1 + 8);
  v9 = (__int64 *)v8;
  while ( 1 )
  {
    if ( !v9 || (result = *v9, (*v9 & 1) != 0) )
    {
      for ( k = v8 + 8; ; k += 8 )
      {
        if ( (unsigned __int64)k >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        {
          result = 0LL;
          goto LABEL_28;
        }
        if ( (*k & 1) == 0 )
          break;
      }
      v9 = *(__int64 **)k;
      v8 = k;
      result = *(_QWORD *)k;
    }
    else
    {
      v9 = (__int64 *)*v9;
    }
LABEL_28:
    if ( !result )
      break;
    v12 = v9;
    for ( m = (__int64 *)v8; (*m & 1) == 0; m = (__int64 *)*m )
    {
      if ( (__int64 *)*m == v9 )
      {
        *m = *v9;
        --*(_DWORD *)a1;
        *v9 |= 0x8000000000000002uLL;
        v9 = m;
        goto LABEL_36;
      }
    }
    v12 = 0LL;
LABEL_36:
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
