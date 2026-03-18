/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180025D44
 * Callers:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180025700 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800258E0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x1800262B4 (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800756BC (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x180075718 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180075770 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rsi
  int *v5; // r14
  __int64 v7; // rcx
  const struct FastRegion::Internal::CStripe *v8; // rbp
  char *v9; // r15
  char *v10; // rbx
  const struct FastRegion::Internal::CStripe *v11; // r13
  int v12; // eax
  const struct FastRegion::Internal::CStripe *v13; // rsi
  const struct FastRegion::Internal::CStripe *v14; // r14
  _DWORD *v15; // rbp
  const struct FastRegion::Internal::CStripe *v16; // rcx
  const struct FastRegion::Internal::CStripe *v17; // r8
  const struct FastRegion::Internal::CStripe *v18; // rdx
  const struct FastRegion::Internal::CStripe *v19; // r9
  int v20; // eax
  const struct FastRegion::Internal::CStripe *v21; // r8
  const struct FastRegion::Internal::CStripe *v22; // rdx
  FastRegion::Internal::CStripe *v23; // rcx
  char *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  char *v27; // rbx
  char *v28; // rax
  char *v29; // rdx
  int v30; // ecx
  int v31; // eax
  const struct FastRegion::Internal::CStripe *v32; // rdx
  const struct FastRegion::Internal::CStripe *v33; // r9
  char *v34; // rcx
  int v35; // eax
  _DWORD *v36; // rbp
  const struct FastRegion::Internal::CStripe *v37; // rdx
  _DWORD *v38; // rbp
  const struct FastRegion::Internal::CStripe *v39; // [rsp+B0h] [rbp+8h]
  struct FastRegion::Internal::CStripe *v40; // [rsp+B8h] [rbp+10h]
  const struct FastRegion::Internal::CStripe *v41; // [rsp+C8h] [rbp+20h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = (int *)((char *)a3 + 12);
  v7 = *(int *)a3;
  v8 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v41 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v40 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v9 = (char *)this + 12;
  v10 = (char *)this + 12;
  v39 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v7 + 12);
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  *((_DWORD *)this + 4) = 8 * (v7 + v3);
  v12 = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)a2 + 3) > v12 )
  {
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    v20 = *((_DWORD *)a3 + 5);
    if ( *v4 < v20 )
    {
LABEL_47:
      v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      v21 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
      v22 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
      v23 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
    }
    else
    {
      while ( 1 )
      {
        v21 = v14;
        v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
        if ( *v4 <= v20 )
          break;
        if ( v14 == v39 )
        {
          v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
          v22 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
          v23 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
LABEL_13:
          FastRegion::Internal::CStripe::Copy(v23, v22);
          v24 = (char *)this + 20;
          v25 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
LABEL_14:
          if ( (_DWORD)v24 + v25 - (_DWORD)v10 )
            v10 = v24;
          goto LABEL_16;
        }
        v20 = *(_DWORD *)v14;
        if ( *v4 < *(_DWORD *)v14 )
          goto LABEL_47;
      }
      v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      v22 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
      v23 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
      if ( v14 == v39 )
        goto LABEL_13;
    }
    FastRegion::Internal::CStripe::Subtract(v23, v22, v21, v8);
    v34 = (char *)this + 20;
    v35 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
    goto LABEL_49;
  }
  if ( *((_DWORD *)a2 + 3) < v12 )
  {
    v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CRgnData *)((char *)this + 12),
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
    if ( *((_DWORD *)this + 6) - 12 - *((_DWORD *)this + 4) != -20 )
      v10 = (char *)this + 20;
    if ( *(_DWORD *)v13 >= *v5 )
    {
LABEL_35:
      v31 = *v5;
      v32 = v13;
      v14 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
      if ( *(_DWORD *)v13 <= v31 )
      {
        v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
        if ( v13 == v11 )
          goto LABEL_17;
        v33 = v41;
      }
      else
      {
        v33 = v40;
        v32 = (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8);
      }
      FastRegion::Internal::CStripe::Subtract((FastRegion::Internal::CStripe *)v10, v32, v33, v33);
      if ( v10 != v9 )
      {
        if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v10) )
          v10 += 8;
        goto LABEL_5;
      }
      v34 = v10 + 8;
      v35 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1);
LABEL_49:
      if ( (_DWORD)v34 + v35 - (_DWORD)v10 )
        v10 = v34;
      goto LABEL_5;
    }
    v36 = v10 + 8;
    while ( 1 )
    {
      v37 = v13;
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      if ( v13 == v11 )
        goto LABEL_17;
      FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v10, v37);
      if ( v10 == v9 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v10) )
        goto LABEL_62;
LABEL_63:
      if ( *(_DWORD *)v13 >= *v5 )
        goto LABEL_35;
    }
    if ( !((_DWORD)v36 + v36[1] - *((_DWORD *)v10 + 1) - (_DWORD)v10) )
      goto LABEL_63;
LABEL_62:
    v10 += 8;
    v36 += 2;
    goto LABEL_63;
  }
  v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
  FastRegion::Internal::CStripe::Subtract(
    (FastRegion::Internal::CRgnData *)((char *)this + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
  if ( *((_DWORD *)this + 6) - 12 - *((_DWORD *)this + 4) != -20 )
    v10 = (char *)this + 20;
LABEL_5:
  v15 = v10 + 8;
  while ( 1 )
  {
    v16 = v13;
    v17 = v14;
    v18 = v13;
    v19 = v13;
    if ( *(_DWORD *)v13 > *(_DWORD *)v14 )
    {
      v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8);
      if ( v14 == v39 )
        break;
      v19 = v17;
      goto LABEL_42;
    }
    if ( *(_DWORD *)v13 < *(_DWORD *)v14 )
    {
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      if ( v13 == v11 )
        goto LABEL_17;
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v14 - 8);
      goto LABEL_42;
    }
    v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
    v14 = (const struct FastRegion::Internal::CStripe *)((char *)v14 + 8);
    if ( v13 == v11 )
      goto LABEL_17;
    if ( v14 == v39 )
      break;
    v19 = v16;
    v18 = v16;
LABEL_42:
    FastRegion::Internal::CStripe::Subtract((FastRegion::Internal::CStripe *)v10, v18, v17, v19);
    if ( v10 == v9 )
    {
      if ( (_DWORD)v15 + v15[1] - *((_DWORD *)v10 + 1) - (_DWORD)v10 )
      {
LABEL_69:
        v10 += 8;
        v15 += 2;
      }
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v10) )
    {
      goto LABEL_69;
    }
  }
  FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v10, v18, v17);
  if ( v10 == v9 )
  {
    v24 = v10 + 8;
    v25 = *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1);
    goto LABEL_14;
  }
  if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v10) )
    v10 += 8;
LABEL_16:
  v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
  if ( v13 != v11 )
  {
    v38 = v10 + 8;
    while ( 1 )
    {
      FastRegion::Internal::CStripe::Copy(
        (FastRegion::Internal::CStripe *)v10,
        (const struct FastRegion::Internal::CStripe *)((char *)v13 - 8));
      if ( v10 == v9 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v10) )
        goto LABEL_77;
LABEL_78:
      v13 = (const struct FastRegion::Internal::CStripe *)((char *)v13 + 8);
      if ( v13 == v11 )
        goto LABEL_17;
    }
    if ( !((_DWORD)v38 + v38[1] - *((_DWORD *)v10 + 1) - (_DWORD)v10) )
      goto LABEL_78;
LABEL_77:
    v10 += 8;
    v38 += 2;
    goto LABEL_78;
  }
LABEL_17:
  *(_DWORD *)v10 = *((_DWORD *)v13 - 2);
  if ( v10 != v9 && &v10[*((int *)v10 + 1)] != &v10[*((int *)v10 - 1) - 8] )
    v10 += 8;
  v26 = (v10 - (char *)this - 12) >> 3;
  *(_DWORD *)this = v26;
  if ( (_DWORD)v26 )
  {
    v27 = v10 - 8;
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v28 = &v27[*((int *)v27 + 1)];
    while ( 1 )
    {
      v27 -= 8;
      if ( v27 < v9 )
        break;
      v29 = v28;
      v28 = &v27[*((int *)v27 + 1)];
      if ( v28 != v29 )
      {
        if ( *((_DWORD *)this + 1) > *(_DWORD *)v28 )
          *((_DWORD *)this + 1) = *(_DWORD *)v28;
        v30 = *((_DWORD *)v29 - 1);
        if ( *((_DWORD *)this + 2) < v30 )
          *((_DWORD *)this + 2) = v30;
      }
    }
  }
}
