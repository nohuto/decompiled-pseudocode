/*
 * XREFs of ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E414
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080038 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18007F68C (-Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18007F920 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Intersect(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  FastRegion::Internal::CStripe *v6; // rbp
  const struct FastRegion::Internal::CStripe *v8; // r10
  FastRegion::Internal::CStripe *v9; // rbx
  const struct FastRegion::Internal::CStripe *v10; // r12
  char *v11; // r13
  int v12; // ecx
  char *v13; // rsi
  int v14; // eax
  const struct FastRegion::Internal::CStripe *v15; // rdi
  const struct FastRegion::Internal::CStripe *v16; // r14
  const struct FastRegion::Internal::CStripe *v17; // rdx
  const struct FastRegion::Internal::CStripe *v18; // r8
  char *v19; // rcx
  int v20; // eax
  int v21; // eax
  const struct FastRegion::Internal::CStripe *v22; // rdx
  int v23; // ecx
  const struct FastRegion::Internal::CStripe *v24; // r8
  __int64 v25; // rax
  FastRegion::Internal::CStripe *v26; // rbx
  _DWORD *v27; // rax
  _DWORD *v28; // rdx
  int v29; // ecx
  const struct FastRegion::Internal::CStripe *v30; // rdx
  const struct FastRegion::Internal::CStripe *v31; // rdx

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v6 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v8 = (const struct FastRegion::Internal::CStripe *)v4;
  v9 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v10 = (const struct FastRegion::Internal::CStripe *)&v4[2 * v3];
  v11 = (char *)a3 + 8 * v5 + 12;
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v12 = *((_DWORD *)a3 + 3);
  if ( *v4 < v12 )
  {
    v15 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    while ( *(_DWORD *)v15 < v12 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v10 )
        goto LABEL_20;
    }
    v31 = v15;
    v13 = (char *)a3 + 20;
    if ( *(_DWORD *)v15 <= v12 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v10 )
        goto LABEL_20;
      v18 = v31;
    }
    else
    {
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    }
    v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v17 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_6:
    FastRegion::Internal::CStripe::Intersect(v9, v17, v18);
    v19 = (char *)v6 + 8;
    v20 = *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1);
    goto LABEL_7;
  }
  v13 = (char *)a3 + 20;
  if ( *v4 > v12 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)v13;
      if ( *v4 < *(_DWORD *)v13 )
      {
        v15 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
        goto LABEL_5;
      }
      v13 += 8;
      if ( *v4 <= v14 )
        break;
      if ( v13 == v11 )
        goto LABEL_20;
    }
    v15 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    if ( v13 == v11 )
      goto LABEL_20;
LABEL_5:
    v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v17 = v8;
    v18 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    goto LABEL_6;
  }
  v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v30 = (const struct FastRegion::Internal::CStripe *)v4;
  v15 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
  FastRegion::Internal::CStripe::Intersect(v9, v30, (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
  if ( (_DWORD)v6 + 8 + *((_DWORD *)v6 + 3) - (_DWORD)v9 - *((_DWORD *)v6 + 1) )
    v9 = (FastRegion::Internal::CStripe *)((char *)v6 + 8);
  while ( 1 )
  {
    v21 = *(_DWORD *)v15;
    v22 = v15;
    v23 = *(_DWORD *)v13;
    if ( *(_DWORD *)v15 < *(_DWORD *)v13 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v10 )
        goto LABEL_17;
LABEL_11:
      v24 = v16;
      goto LABEL_12;
    }
    v13 += 8;
    if ( v21 <= v23 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v10 || v13 == v11 )
        goto LABEL_17;
      v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
      goto LABEL_11;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    if ( v13 == v11 )
      break;
    v24 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    v22 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_12:
    FastRegion::Internal::CStripe::Intersect(v9, v22, v24);
    if ( v9 == v6 )
    {
      v19 = (char *)v9 + 8;
      v20 = *((_DWORD *)v9 + 3) - *((_DWORD *)v9 + 1);
LABEL_7:
      if ( (_DWORD)v19 + v20 - (_DWORD)v9 )
        v9 = (FastRegion::Internal::CStripe *)v19;
      continue;
    }
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v9) )
      v9 = (FastRegion::Internal::CStripe *)((char *)v9 + 8);
  }
  v21 = *(_DWORD *)v16;
LABEL_17:
  *(_DWORD *)v9 = v21;
  if ( v9 != v6 && (char *)v9 + *((int *)v9 + 1) != (char *)v9 + *((int *)v9 - 1) - 8 )
    v9 = (FastRegion::Internal::CStripe *)((char *)v9 + 8);
LABEL_20:
  v25 = (v9 - this - 12) >> 3;
  *(_DWORD *)this = v25;
  if ( (_DWORD)v25 )
  {
    v26 = (FastRegion::Internal::CStripe *)((char *)v9 - 8);
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v27 = (_DWORD *)((char *)v26 + *((int *)v26 + 1));
    while ( 1 )
    {
      v26 = (FastRegion::Internal::CStripe *)((char *)v26 - 8);
      if ( v26 < v6 )
        break;
      v28 = v27;
      v27 = (_DWORD *)((char *)v26 + *((int *)v26 + 1));
      if ( v27 != v28 )
      {
        if ( *((_DWORD *)this + 1) > *v27 )
          *((_DWORD *)this + 1) = *v27;
        v29 = *(v28 - 1);
        if ( *((_DWORD *)this + 2) < v29 )
          *((_DWORD *)this + 2) = v29;
      }
    }
  }
}
