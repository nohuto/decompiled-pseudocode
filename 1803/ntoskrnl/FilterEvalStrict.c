/*
 * XREFs of FilterEvalStrict @ 0x1404FDC24
 * Callers:
 *     FilterEvalStrict @ 0x1404FDC24 (FilterEvalStrict.c)
 *     FilterEval @ 0x14050ACAC (FilterEval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     FilterEvalStrict @ 0x1404FDC24 (FilterEvalStrict.c)
 *     PropertyEval @ 0x1404FDEB8 (PropertyEval.c)
 *     FindFilterOperatorClose @ 0x14050148C (FindFilterOperatorClose.c)
 */

__int64 __fastcall FilterEvalStrict(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax
  unsigned int v8; // edi
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  unsigned int v13; // esi
  _DWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  int v19; // r8d
  int v20; // eax
  bool v21; // zf
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v26; // [rsp+50h] [rbp-19h]
  int v27; // [rsp+54h] [rbp-15h]
  int v28; // [rsp+58h] [rbp-11h]
  __int64 v29; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-1h]
  _DWORD *v31; // [rsp+70h] [rbp+7h]
  _DWORD *v32; // [rsp+78h] [rbp+Fh]
  _DWORD *v33; // [rsp+80h] [rbp+17h]
  _DWORD *v34; // [rsp+88h] [rbp+1Fh]
  _DWORD *v35; // [rsp+90h] [rbp+27h]
  unsigned int *v36; // [rsp+98h] [rbp+2Fh]
  unsigned int v39; // [rsp+D8h] [rbp+6Fh] BYREF

  v28 = 1;
  v39 = 0;
  v35 = a4;
  v34 = a4;
  v33 = a4;
  v32 = a4;
  v31 = a4;
  v27 = 0;
  v24 = 0;
  v29 = 0LL;
  v25 = 0;
  if ( a3 < 3 )
    return 3221225485LL;
  v26 = *a4 & 0xFF00000;
  if ( !v26 )
    return 3221225485LL;
  *a5 = 0;
  result = FindFilterOperatorClose(a3, a4, &v39);
  v8 = result;
  if ( (_DWORD)result )
    return result;
  v9 = -1073741823;
  v10 = v26;
  v11 = &a4[14 * v39];
  v12 = a4 + 14;
  v36 = v11;
  LODWORD(v11) = a3 - v39;
  v13 = a3 - 1;
  v30 = (unsigned int)v11;
  if ( v26 == 3145728 || v26 == 0x100000 )
  {
    if ( v13 <= 1 )
      goto LABEL_14;
    while ( 1 )
    {
      v14 = a5;
      v39 = 0;
      *a5 = 0;
      if ( (*v12 & 0xFF00000) != 0 )
      {
        result = FindFilterOperatorClose(v13, v12, &v39);
        v22 = ++v39;
        if ( (_DWORD)result )
          return result;
        result = FilterEvalStrict((_DWORD)a1, a2, v22, (_DWORD)v12, (__int64)v14);
        v8 = result;
        if ( (_DWORD)result == -1073741823 )
        {
          v28 = 0;
        }
        else if ( (_DWORD)result )
        {
          return result;
        }
        v13 -= v39;
        v18 = 56LL * v39;
      }
      else
      {
        v8 = a1(a2, v12 + 2, &v24, &v25, &v29);
        if ( v8 == -1073741275 )
        {
          v8 = 0;
          if ( (*v12 & 0xFFF) != 1 )
          {
            v28 = 0;
            v18 = 56LL;
            v10 = v26;
            --v13;
            goto LABEL_12;
          }
          v15 = 0LL;
          v17 = 0LL;
          v16 = 0LL;
          v24 = 0;
          v29 = 0LL;
          v25 = 0;
        }
        else
        {
          v15 = v24;
          v16 = v29;
          v17 = v25;
        }
        if ( v8 )
          return v8;
        PropertyEval(v15, v16, v17, *v12, v12[10], *((_QWORD *)v12 + 6), v12[11], a5);
        --v13;
        v18 = 56LL;
      }
      v10 = v26;
      if ( *a5 == (v26 == 3145728) )
      {
        v12 = v36;
        v19 = 1;
        v13 = v30;
        v9 = -1073741823;
        goto LABEL_15;
      }
LABEL_12:
      v12 = (unsigned int *)((char *)v12 + v18);
      if ( v13 <= 1 )
        goto LABEL_13;
    }
  }
  if ( v26 != 5242880 )
    return 3221225485LL;
  if ( (*v12 & 0xFF00000) != 0 )
  {
    result = FindFilterOperatorClose(v13, v12, &v39);
    v23 = ++v39;
    if ( (_DWORD)result )
      return result;
    result = FilterEvalStrict((_DWORD)a1, a2, v23, (_DWORD)v12, (__int64)a5);
    v8 = result;
    if ( (_DWORD)result )
      return result;
    v12 += 14 * v39;
    v13 -= v39;
    goto LABEL_49;
  }
  result = a1(a2, v31 + 16, &v24, &v25, &v29);
  v8 = result;
  if ( (_DWORD)result == -1073741275 )
    return 3221225473LL;
  if ( !(_DWORD)result )
  {
    PropertyEval(v24, v29, v25, *v12, v34[24], *((_QWORD *)v33 + 13), v32[25], a5);
    v12 = v35 + 28;
    --v13;
LABEL_49:
    *a5 = *a5 == 0;
    v10 = v26;
LABEL_13:
    v9 = -1073741823;
LABEL_14:
    v19 = v27;
LABEL_15:
    if ( !v13 )
      return 3221225485LL;
    v20 = *v12 & 0xFF00000;
    switch ( v20 )
    {
      case 4194304:
        v21 = v10 == 3145728;
        break;
      case 2097152:
        v21 = v10 == 0x100000;
        break;
      case 6291456:
        v21 = v10 == 5242880;
        break;
      default:
        return 3221225485LL;
    }
    if ( v21 )
    {
      if ( v19 || v28 || v8 )
        return v8;
      return v9;
    }
    return 3221225485LL;
  }
  return result;
}
