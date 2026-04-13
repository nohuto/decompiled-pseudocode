/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x180071C9C
 * Callers:
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x180071A6C (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180018090 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800181AC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180062E44 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::replace(
        _QWORD *Src,
        unsigned __int64 a2,
        char *a3,
        _QWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  _QWORD *v7; // rsi
  char *v8; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char *v15; // rcx
  char *v16; // r14
  unsigned __int64 v17; // r13
  bool v18; // cf
  _WORD *v19; // rax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  char *v28; // rdx
  char *v29; // rcx
  size_t v30; // r8
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  char *v35; // rsi
  _QWORD *v36; // rdx
  _QWORD *v37; // rcx
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx
  _QWORD *v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rsi
  _QWORD *v43; // rdx
  _QWORD *v44; // rcx
  _QWORD *v45; // rax

  v7 = a4;
  v8 = (char *)Src[2];
  if ( (unsigned __int64)v8 < a2 || (v11 = a4[2], v12 = a5, v11 < a5) )
    std::wstring::_Xran();
  v13 = a6;
  if ( &v8[-a2] < a3 )
    a3 = &v8[-a2];
  v14 = v11 - a5;
  if ( v14 < a6 )
    v13 = v14;
  v15 = (char *)(v8 - a3);
  if ( ~v13 <= v8 - a3 )
    std::wstring::_Xlen();
  v16 = (char *)(&v8[-a2] - a3);
  v17 = (unsigned __int64)&v15[v13];
  if ( v8 < &v15[v13] )
  {
    if ( v17 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( Src[3] >= v17 )
    {
      if ( !v17 )
      {
        v18 = Src[3] < 8uLL;
        Src[2] = 0LL;
        if ( v18 )
          v19 = Src;
        else
          v19 = (_WORD *)*Src;
        *v19 = 0;
      }
    }
    else
    {
      std::wstring::_Copy((const void **)Src, (unsigned __int64)&v15[v13], v8);
    }
  }
  v20 = Src[3];
  if ( Src != v7 )
  {
    if ( v20 < 8 )
      v21 = Src;
    else
      v21 = (_QWORD *)*Src;
    if ( v20 < 8 )
      v22 = Src;
    else
      v22 = (_QWORD *)*Src;
    if ( v16 )
    {
      memmove((char *)v22 + 2 * a2 + 2 * v13, (char *)v21 + 2 * (_QWORD)&a3[a2], 2LL * (_QWORD)v16);
      v20 = Src[3];
    }
    if ( v7[3] >= 8uLL )
      v7 = (_QWORD *)*v7;
    if ( v20 < 8 )
      v23 = Src;
    else
      v23 = (_QWORD *)*Src;
    if ( v13 )
      memcpy_0((char *)v23 + 2 * a2, (char *)v7 + 2 * a5, 2 * v13);
    goto LABEL_109;
  }
  if ( v13 > (unsigned __int64)a3 )
  {
    if ( a5 > a2 )
    {
      v35 = &a3[a2];
      if ( (unsigned __int64)&a3[a2] > a5 )
      {
        if ( v20 < 8 )
          v38 = Src;
        else
          v38 = (_QWORD *)*Src;
        if ( v20 < 8 )
          v39 = Src;
        else
          v39 = (_QWORD *)*Src;
        if ( a3 )
        {
          memmove((char *)v39 + 2 * a2, (char *)v38 + 2 * a5, 2LL * (_QWORD)a3);
          v20 = Src[3];
        }
        if ( v20 < 8 )
          v40 = Src;
        else
          v40 = (_QWORD *)*Src;
        if ( v20 < 8 )
          v41 = Src;
        else
          v41 = (_QWORD *)*Src;
        v42 = 2LL * (_QWORD)v35;
        if ( v16 )
        {
          memmove((char *)v41 + 2 * a2 + 2 * v13, (char *)v40 + v42, 2LL * (_QWORD)v16);
          v20 = Src[3];
        }
        if ( v20 < 8 )
          v43 = Src;
        else
          v43 = (_QWORD *)*Src;
        if ( v20 < 8 )
          v44 = Src;
        else
          v44 = (_QWORD *)*Src;
        if ( (char *)v13 != a3 )
        {
          v30 = 2 * (v13 - (_QWORD)a3);
          v28 = (char *)v43 + 2 * a5 + 2 * v13;
          v29 = (char *)v44 + v42;
          goto LABEL_108;
        }
        goto LABEL_109;
      }
      if ( v20 < 8 )
        v36 = Src;
      else
        v36 = (_QWORD *)*Src;
      if ( v20 < 8 )
        v37 = Src;
      else
        v37 = (_QWORD *)*Src;
      if ( v16 )
      {
        memmove((char *)v37 + 2 * a2 + 2 * v13, (char *)v36 + 2 * (_QWORD)v35, 2LL * (_QWORD)v16);
        v20 = Src[3];
      }
      if ( v20 < 8 )
        v33 = Src;
      else
        v33 = (_QWORD *)*Src;
      if ( v20 < 8 )
        v34 = Src;
      else
        v34 = (_QWORD *)*Src;
      if ( !v13 )
        goto LABEL_109;
      v12 = v13 + a5 - (_QWORD)a3;
    }
    else
    {
      if ( v20 < 8 )
        v31 = Src;
      else
        v31 = (_QWORD *)*Src;
      if ( v20 < 8 )
        v32 = Src;
      else
        v32 = (_QWORD *)*Src;
      if ( v16 )
      {
        memmove((char *)v32 + 2 * a2 + 2 * v13, (char *)v31 + 2 * (_QWORD)&a3[a2], 2LL * (_QWORD)v16);
        v20 = Src[3];
      }
      if ( v20 < 8 )
        v33 = Src;
      else
        v33 = (_QWORD *)*Src;
      if ( v20 < 8 )
        v34 = Src;
      else
        v34 = (_QWORD *)*Src;
      if ( !v13 )
        goto LABEL_109;
    }
    v28 = (char *)v33 + 2 * v12;
    v29 = (char *)v34 + 2 * a2;
    v30 = 2 * v13;
    goto LABEL_108;
  }
  if ( v20 < 8 )
    v24 = Src;
  else
    v24 = (_QWORD *)*Src;
  if ( v20 < 8 )
    v25 = Src;
  else
    v25 = (_QWORD *)*Src;
  if ( v13 )
  {
    memmove((char *)v25 + 2 * a2, (char *)v24 + 2 * a5, 2 * v13);
    v20 = Src[3];
  }
  if ( v20 < 8 )
    v26 = Src;
  else
    v26 = (_QWORD *)*Src;
  if ( v20 < 8 )
    v27 = Src;
  else
    v27 = (_QWORD *)*Src;
  if ( v16 )
  {
    v28 = (char *)v26 + 2 * (_QWORD)&a3[a2];
    v29 = (char *)v27 + 2 * a2 + 2 * v13;
    v30 = 2LL * (_QWORD)v16;
LABEL_108:
    memmove(v29, v28, v30);
  }
LABEL_109:
  v18 = Src[3] < 8uLL;
  Src[2] = v17;
  if ( v18 )
    v45 = Src;
  else
    v45 = (_QWORD *)*Src;
  *((_WORD *)v45 + v17) = 0;
  return Src;
}
