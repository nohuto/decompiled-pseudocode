/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FAA0
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893FC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800B2D58 (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800B2FD0 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  char *v4; // rsi
  _DWORD *v5; // rdi
  __int64 v7; // rdx
  const struct FastRegion::Internal::CStripe *v8; // rcx
  const struct FastRegion::Internal::CStripe *v9; // r13
  const struct FastRegion::Internal::CStripe *v10; // r15
  const struct FastRegion::Internal::CStripe *v11; // r11
  char *v12; // rbp
  char *v13; // rbx
  const struct FastRegion::Internal::CStripe *v14; // r12
  int v15; // eax
  const struct FastRegion::Internal::CStripe *v16; // rdx
  const struct FastRegion::Internal::CStripe *v17; // rdi
  const struct FastRegion::Internal::CStripe *v18; // rsi
  const struct FastRegion::Internal::CStripe *v19; // r8
  const struct FastRegion::Internal::CStripe *v20; // rcx
  const struct FastRegion::Internal::CStripe *v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  char *v24; // rbx
  char *v25; // rax
  char *v26; // rdx
  int v27; // ecx
  int v28; // eax
  const struct FastRegion::Internal::CStripe *v29; // r8
  const struct FastRegion::Internal::CStripe *v30; // rdx
  char *v31; // rcx
  int v32; // eax

  v3 = *(int *)a2;
  v4 = (char *)a3 + 12;
  v5 = (_DWORD *)((char *)a2 + 12);
  v7 = *(int *)a3;
  v8 = (const struct FastRegion::Internal::CStripe *)v5;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v10 = (const struct FastRegion::Internal::CStripe *)&v5[2 * v3];
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v12 = (char *)this + 12;
  v13 = (char *)this + 12;
  v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v7 + 12);
  *((_DWORD *)this + 4) = 8 * (v7 + v3);
  v15 = *((_DWORD *)a3 + 3);
  if ( *v5 > v15 )
  {
    v18 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    while ( 1 )
    {
      v28 = *(_DWORD *)v18;
      if ( *v5 < *(_DWORD *)v18 )
      {
        v17 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
        v29 = (const struct FastRegion::Internal::CStripe *)((char *)v18 - 8);
        goto LABEL_29;
      }
      v29 = v18;
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
      if ( *v5 <= v28 )
        break;
      if ( v18 == v14 )
        goto LABEL_12;
    }
    v17 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
    if ( v18 == v14 )
      goto LABEL_12;
LABEL_29:
    v30 = v8;
LABEL_30:
    FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CRgnData *)((char *)this + 12), v30, v29);
    v31 = (char *)this + 20;
    v32 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
    goto LABEL_31;
  }
  if ( *v5 < v15 )
  {
    v17 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
    while ( *(_DWORD *)v17 < v15 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      if ( v17 == v10 )
        goto LABEL_12;
    }
    v29 = v17;
    if ( *(_DWORD *)v17 <= v15 )
    {
      v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
      v18 = (const struct FastRegion::Internal::CStripe *)(v4 + 8);
      if ( v17 == v10 )
        goto LABEL_12;
      v30 = v9;
    }
    else
    {
      v18 = (const struct FastRegion::Internal::CStripe *)(v4 + 8);
      v29 = (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8);
      v30 = v11;
    }
    goto LABEL_30;
  }
  v16 = (const struct FastRegion::Internal::CStripe *)v5;
  v17 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
  v18 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
  FastRegion::Internal::CStripe::Intersect(
    (FastRegion::Internal::CRgnData *)((char *)this + 12),
    v16,
    (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
  if ( *((_DWORD *)this + 6) - 12 - *((_DWORD *)this + 4) != -20 )
    v13 = (char *)this + 20;
  while ( 1 )
  {
    v19 = v18;
    v20 = v18;
    v21 = v17;
    if ( *(_DWORD *)v17 >= *(_DWORD *)v18 )
      break;
    v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
    if ( v17 == v10 )
      goto LABEL_8;
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v18 - 8);
LABEL_23:
    FastRegion::Internal::CStripe::Intersect((FastRegion::Internal::CStripe *)v13, v21, v19);
    if ( v13 == v12 )
    {
      v31 = v13 + 8;
      v32 = *((_DWORD *)v13 + 3) - *((_DWORD *)v13 + 1);
LABEL_31:
      if ( (_DWORD)v31 + v32 - (_DWORD)v13 )
        v13 = v31;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v13) )
    {
      v13 += 8;
    }
  }
  if ( *(_DWORD *)v17 <= *(_DWORD *)v18 )
  {
    v17 = (const struct FastRegion::Internal::CStripe *)((char *)v17 + 8);
    v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
    if ( v17 == v10 || v18 == v14 )
    {
LABEL_8:
      v22 = *((_DWORD *)v17 - 2);
      goto LABEL_9;
    }
    goto LABEL_23;
  }
  v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
  if ( v18 != v14 )
  {
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v17 - 8);
    v21 = v20;
    goto LABEL_23;
  }
  v22 = *((_DWORD *)v18 - 2);
LABEL_9:
  *(_DWORD *)v13 = v22;
  if ( v13 != v12 && &v13[*((int *)v13 + 1)] != &v13[*((int *)v13 - 1) - 8] )
    v13 += 8;
LABEL_12:
  v23 = (v13 - (char *)this - 12) >> 3;
  *(_DWORD *)this = v23;
  if ( (_DWORD)v23 )
  {
    v24 = v13 - 8;
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v25 = &v24[*((int *)v24 + 1)];
    while ( 1 )
    {
      v24 -= 8;
      if ( v24 < v12 )
        break;
      v26 = v25;
      v25 = &v24[*((int *)v24 + 1)];
      if ( v25 != v26 )
      {
        if ( *((_DWORD *)this + 1) > *(_DWORD *)v25 )
          *((_DWORD *)this + 1) = *(_DWORD *)v25;
        v27 = *((_DWORD *)v26 - 1);
        if ( *((_DWORD *)this + 2) < v27 )
          *((_DWORD *)this + 2) = v27;
      }
    }
  }
}
