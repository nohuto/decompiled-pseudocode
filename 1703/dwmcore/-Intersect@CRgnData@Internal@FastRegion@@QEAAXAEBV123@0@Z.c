/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800747B0
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075A88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800755D4 (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800756BC (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  char *v6; // r14
  const struct FastRegion::Internal::CStripe *v8; // r10
  const struct FastRegion::Internal::CStripe *v9; // rbp
  const struct FastRegion::Internal::CStripe *v10; // r12
  FastRegion::Internal::CStripe *v11; // r13
  int v12; // eax
  const struct FastRegion::Internal::CStripe *v13; // rcx
  FastRegion::Internal::CStripe *v14; // rbx
  int v15; // eax
  const struct FastRegion::Internal::CStripe *v16; // rdx
  const struct FastRegion::Internal::CStripe *v17; // rsi
  const struct FastRegion::Internal::CStripe *v18; // r14
  _DWORD *v19; // rbp
  const struct FastRegion::Internal::CStripe *v20; // r8
  const struct FastRegion::Internal::CStripe *v21; // rcx
  const struct FastRegion::Internal::CStripe *v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  FastRegion::Internal::CStripe *v25; // rbx
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  int v28; // ecx
  int v29; // eax
  const struct FastRegion::Internal::CStripe *v30; // r8
  const struct FastRegion::Internal::CStripe *v31; // rdx
  const struct FastRegion::Internal::CStripe *v32; // [rsp+60h] [rbp+8h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v6 = (char *)a3 + 12;
  v8 = (const struct FastRegion::Internal::CStripe *)v4;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v10 = (const struct FastRegion::Internal::CStripe *)&v4[2 * v3];
  v11 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v12 = 8 * (v5 + v3) - ((_DWORD)this + 12);
  v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v5 + 12);
  v32 = v13;
  v14 = v11;
  *((_DWORD *)v11 + 1) = (_DWORD)this + v12 + 12;
  v15 = *((_DWORD *)a3 + 3);
  if ( *v4 > v15 )
  {
    v18 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    while ( 1 )
    {
      v29 = *(_DWORD *)v18;
      if ( *v4 < *(_DWORD *)v18 )
      {
        v17 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
        v30 = (const struct FastRegion::Internal::CStripe *)((char *)v18 - 8);
        goto LABEL_30;
      }
      v30 = v18;
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
      if ( *v4 <= v29 )
        break;
      if ( v18 == v13 )
        goto LABEL_13;
    }
    v17 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    if ( v18 == v13 )
      goto LABEL_13;
LABEL_30:
    v31 = v8;
    goto LABEL_31;
  }
  if ( *v4 < v15 )
  {
    v17 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    while ( *(_DWORD *)v17 < v15 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v10 )
        goto LABEL_13;
    }
    v30 = v17;
    if ( *(_DWORD *)v17 <= v15 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      v18 = (const struct FastRegion::Internal::CStripe *)(v6 + 8);
      if ( v17 == v10 )
        goto LABEL_13;
    }
    else
    {
      v18 = (const struct FastRegion::Internal::CStripe *)(v6 + 8);
      v30 = (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8);
    }
    v31 = v9;
LABEL_31:
    FastRegion::Internal::CStripe::Intersect(v11, v31, v30);
    if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
      v14 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
    goto LABEL_5;
  }
  v16 = (const struct FastRegion::Internal::CStripe *)v4;
  v17 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
  v18 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
  FastRegion::Internal::CStripe::Intersect(v11, v16, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
  if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
    v14 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
LABEL_5:
  v19 = (_DWORD *)((char *)v14 + 8);
  while ( 1 )
  {
    v20 = v18;
    v21 = v18;
    v22 = v17;
    if ( *(_DWORD *)v17 < *(_DWORD *)v18 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v10 )
        goto LABEL_9;
      v20 = (const struct FastRegion::Internal::CStripe *)((char *)v18 - 8);
      goto LABEL_24;
    }
    if ( *(_DWORD *)v17 <= *(_DWORD *)v18 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
      if ( v17 == v10 || v18 == v32 )
      {
LABEL_9:
        v23 = *((_DWORD *)v17 - 2);
        goto LABEL_10;
      }
      goto LABEL_24;
    }
    v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
    if ( v18 == v32 )
      break;
    v20 = (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8);
    v22 = v21;
LABEL_24:
    FastRegion::Internal::CStripe::Intersect(v14, v22, v20);
    if ( v14 == v11 )
    {
      if ( (_DWORD)v19 + v19[1] - *((_DWORD *)v14 + 1) - (_DWORD)v14 )
      {
LABEL_26:
        v14 = (FastRegion::Internal::CStripe *)((char *)v14 + 8);
        v19 += 2;
      }
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v14) )
    {
      goto LABEL_26;
    }
  }
  v23 = *((_DWORD *)v18 - 2);
LABEL_10:
  *(_DWORD *)v14 = v23;
  if ( v14 != v11 && (char *)v14 + *((int *)v14 + 1) != (char *)v14 + *((int *)v14 - 1) - 8 )
    v14 = (FastRegion::Internal::CStripe *)((char *)v14 + 8);
LABEL_13:
  v24 = (v14 - this - 12) >> 3;
  *(_DWORD *)this = v24;
  if ( (_DWORD)v24 )
  {
    v25 = (FastRegion::Internal::CStripe *)((char *)v14 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v26 = (_DWORD *)((char *)v25 + *((int *)v25 + 1));
    while ( 1 )
    {
      v25 = (FastRegion::Internal::CStripe *)((char *)v25 - 8);
      if ( v25 < v11 )
        break;
      v27 = v26;
      v26 = (_DWORD *)((char *)v25 + *((int *)v25 + 1));
      if ( v26 != v27 )
      {
        if ( *((_DWORD *)this + 1) > *v26 )
          *((_DWORD *)this + 1) = *v26;
        v28 = *(v27 - 1);
        if ( *((_DWORD *)this + 2) < v28 )
          *((_DWORD *)this + 2) = v28;
      }
    }
  }
}
