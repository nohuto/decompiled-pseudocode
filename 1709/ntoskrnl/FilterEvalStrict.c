/*
 * XREFs of FilterEvalStrict @ 0x140529CE0
 * Callers:
 *     FilterEval @ 0x1405297BC (FilterEval.c)
 *     FilterEvalStrict @ 0x140529CE0 (FilterEvalStrict.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     FilterEvalStrict @ 0x140529CE0 (FilterEvalStrict.c)
 *     FindFilterOperatorClose @ 0x140529F5C (FindFilterOperatorClose.c)
 *     PropertyEval @ 0x140529FE0 (PropertyEval.c)
 */

__int64 __fastcall FilterEvalStrict(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int v10; // ecx
  unsigned int *v11; // rax
  unsigned int FilterOperatorClose; // edx
  unsigned int v13; // esi
  unsigned int *v14; // rdi
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // eax
  bool v22; // zf
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-3Ch] BYREF
  int v27; // [rsp+48h] [rbp-38h]
  int v28; // [rsp+4Ch] [rbp-34h]
  int v29; // [rsp+50h] [rbp-30h]
  __int64 v30; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-20h]
  __int64 v32; // [rsp+68h] [rbp-18h]
  unsigned int *v33; // [rsp+70h] [rbp-10h]
  unsigned int v36; // [rsp+B0h] [rbp+30h] BYREF

  v29 = 1;
  v36 = 0;
  v28 = 0;
  v25 = 0;
  v30 = 0LL;
  v26 = 0;
  if ( a3 < 3 )
    return 3221225485LL;
  v27 = *a4 & 0xFF00000;
  if ( !v27 )
    return 3221225485LL;
  *a5 = 0;
  result = FindFilterOperatorClose(a3, a4, &v36);
  v9 = result;
  if ( (_DWORD)result )
    return result;
  v10 = v27;
  v11 = (unsigned int *)(v8 + 56LL * v36);
  FilterOperatorClose = -1073741823;
  v33 = v11;
  LODWORD(v11) = a3 - v36;
  v13 = a3 - 1;
  v31 = (unsigned int)v11;
  v14 = a4 + 14;
  v32 = 56LL;
  if ( v27 == 0x100000 || v27 == 3145728 )
  {
    if ( v13 <= 1 )
      goto LABEL_14;
    while ( 1 )
    {
      v15 = a5;
      v36 = 0;
      *a5 = 0;
      if ( (*v14 & 0xFF00000) != 0 )
      {
        result = FindFilterOperatorClose(v13, v14, &v36);
        v23 = ++v36;
        if ( (_DWORD)result )
          return result;
        result = FilterEvalStrict((_DWORD)a1, a2, v23, (_DWORD)v14, (__int64)v15);
        v9 = result;
        if ( (_DWORD)result == -1073741823 )
        {
          v29 = 0;
        }
        else if ( (_DWORD)result )
        {
          return result;
        }
        v13 -= v36;
        v19 = 56LL * v36;
      }
      else
      {
        v9 = a1(a2, v14 + 2, &v25, &v26, &v30);
        if ( v9 == -1073741275 )
        {
          v9 = 0;
          if ( (*v14 & 0xFFF) != 1 )
          {
            v29 = 0;
            v14 += 14;
            v10 = v27;
            --v13;
            goto LABEL_12;
          }
          v16 = 0LL;
          v18 = 0LL;
          v17 = 0LL;
          v25 = 0;
          v30 = 0LL;
          v26 = 0;
        }
        else
        {
          v16 = v25;
          v17 = v30;
          v18 = v26;
        }
        if ( v9 )
          return v9;
        PropertyEval(v16, v17, v18, *v14, v14[10], *((_QWORD *)v14 + 6), v14[11], a5);
        --v13;
        v19 = 56LL;
      }
      v14 = (unsigned int *)((char *)v14 + v19);
      v10 = v27;
      if ( *a5 == (v27 == 3145728) )
      {
        v14 = v33;
        v20 = 1;
        v13 = v31;
        FilterOperatorClose = -1073741823;
        goto LABEL_16;
      }
LABEL_12:
      if ( v13 <= 1 )
        goto LABEL_13;
    }
  }
  if ( v27 != 5242880 )
    return 3221225485LL;
  if ( (*v14 & 0xFF00000) != 0 )
  {
    FilterOperatorClose = FindFilterOperatorClose(v13, v14, &v36);
    v24 = ++v36;
    if ( FilterOperatorClose )
      return FilterOperatorClose;
    result = FilterEvalStrict((_DWORD)a1, a2, v24, (_DWORD)v14, (__int64)a5);
    v9 = result;
    if ( !(_DWORD)result )
    {
      v13 -= v36;
      v32 = 56LL * v36;
      goto LABEL_49;
    }
  }
  else
  {
    result = a1(a2, v14 + 2, &v25, &v26, &v30);
    v9 = result;
    if ( (_DWORD)result == -1073741275 )
      return 3221225473LL;
    if ( !(_DWORD)result )
    {
      PropertyEval(v25, v30, v26, *v14, v14[10], *((_QWORD *)v14 + 6), v14[11], a5);
      --v13;
LABEL_49:
      v14 = (unsigned int *)((char *)v14 + v32);
      *a5 = *a5 == 0;
      v10 = v27;
LABEL_13:
      FilterOperatorClose = -1073741823;
LABEL_14:
      v20 = v28;
LABEL_16:
      if ( !v13 )
        return 3221225485LL;
      v21 = *v14 & 0xFF00000;
      switch ( v21 )
      {
        case 2097152:
          v22 = v10 == 0x100000;
          break;
        case 4194304:
          v22 = v10 == 3145728;
          break;
        case 6291456:
          v22 = v10 == 5242880;
          break;
        default:
          return 3221225485LL;
      }
      if ( v22 )
      {
        if ( v20 || v29 || v9 )
          return v9;
        return FilterOperatorClose;
      }
      return 3221225485LL;
    }
  }
  return result;
}
