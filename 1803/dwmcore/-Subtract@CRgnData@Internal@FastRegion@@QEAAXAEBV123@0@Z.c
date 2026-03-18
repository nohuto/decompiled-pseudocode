/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007EF50
 * Callers:
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800138B0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18007F634 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18007F920 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x18007F97C (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18007FAD8 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r10
  _DWORD *v4; // rdi
  __int64 v5; // r9
  const struct FastRegion::Internal::CStripe *v8; // r13
  char *v9; // rcx
  char *v10; // r14
  int v11; // eax
  char *v12; // rbx
  char *v13; // rsi
  const struct FastRegion::Internal::CStripe *v14; // rbp
  const struct FastRegion::Internal::CStripe *v15; // rdi
  const struct FastRegion::Internal::CStripe *v16; // r15
  int v17; // eax
  const struct FastRegion::Internal::CStripe *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  char *v21; // rbx
  char *v22; // rax
  char *v23; // rdx
  int v24; // ecx
  int v25; // eax
  bool v26; // zf
  FastRegion::Internal::CStripe *v27; // rcx
  const struct FastRegion::Internal::CStripe *v28; // r9
  const struct FastRegion::Internal::CStripe *v29; // rdx
  char *v30; // rcx
  int v31; // eax
  const struct FastRegion::Internal::CStripe *v32; // r8
  const struct FastRegion::Internal::CStripe *v33; // r9
  int v34; // eax
  int v35; // ecx
  const struct FastRegion::Internal::CStripe *v36; // rdx
  char *v37; // rcx
  int v38; // eax
  const struct FastRegion::Internal::CStripe *v39; // rsi
  char *v40; // [rsp+50h] [rbp+8h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = *(int *)a3;
  v8 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v9 = (char *)a3 + 8 * v5 + 12;
  *((_DWORD *)this + 4) = 8 * (v5 + v3);
  v10 = (char *)this + 12;
  v11 = *((_DWORD *)a3 + 3);
  v12 = (char *)this + 12;
  v40 = v9;
  if ( *((_DWORD *)a2 + 3) < v11 )
  {
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CRgnData *)((char *)this + 12),
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
    v34 = *(_DWORD *)v15;
    if ( *((_DWORD *)this + 6) - 12 - *((_DWORD *)this + 4) != -20 )
      v12 = (char *)this + 20;
    v35 = *((_DWORD *)a3 + 3);
    if ( v34 < v35 )
    {
      v39 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      do
      {
        v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
        v39 = (const struct FastRegion::Internal::CStripe *)((char *)v39 + 8);
        if ( v15 == v8 )
        {
          v17 = *(_DWORD *)v39;
          goto LABEL_9;
        }
        FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v12, v39);
        if ( v12 == v10 )
        {
          if ( *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1) != -8 )
            v12 += 8;
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
        {
          v12 += 8;
        }
        v34 = *(_DWORD *)v15;
        v35 = *((_DWORD *)a3 + 3);
      }
      while ( *(_DWORD *)v15 < v35 );
    }
    v13 = (char *)a3 + 20;
    if ( v34 <= v35 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v36 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
      if ( v15 == v8 )
      {
        v17 = *(_DWORD *)v36;
        goto LABEL_9;
      }
    }
    else
    {
      v36 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    }
    v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
    FastRegion::Internal::CStripe::Subtract(
      (FastRegion::Internal::CStripe *)v12,
      v36,
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12),
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    if ( v12 != v10 )
    {
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
        v12 += 8;
      goto LABEL_5;
    }
    v37 = v12 + 8;
    v38 = *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1);
    goto LABEL_50;
  }
  v13 = (char *)a3 + 20;
  if ( *v4 > v11 )
  {
    while ( 1 )
    {
      v25 = *(_DWORD *)v13;
      if ( *v4 < *(_DWORD *)v13 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v28 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v27 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
        goto LABEL_49;
      }
      v13 += 8;
      if ( *v4 <= v25 )
        break;
      if ( v13 == v9 )
      {
        v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
        v29 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
        v27 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
        goto LABEL_25;
      }
    }
    v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
    v26 = v13 == v9;
    v27 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
    v28 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
    if ( v26 )
    {
      v29 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
LABEL_25:
      FastRegion::Internal::CStripe::Copy(v27, v29);
      v30 = (char *)this + 20;
      v31 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
      goto LABEL_26;
    }
LABEL_49:
    v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    FastRegion::Internal::CStripe::Subtract(
      v27,
      (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
      (const struct FastRegion::Internal::CStripe *)(v13 - 8),
      v28);
    v37 = (char *)this + 20;
    v38 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
LABEL_50:
    if ( (_DWORD)v37 + v38 - (_DWORD)v12 )
      v12 = v37;
    goto LABEL_5;
  }
  v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v15 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  FastRegion::Internal::CStripe::Subtract(
    (FastRegion::Internal::CRgnData *)((char *)this + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12),
    (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12));
  if ( *((_DWORD *)this + 6) - 12 - *((_DWORD *)this + 4) != -20 )
    v12 = (char *)this + 20;
LABEL_5:
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
  while ( 1 )
  {
    v17 = *(_DWORD *)v15;
    v18 = v15;
    v19 = *(_DWORD *)v13;
    if ( *(_DWORD *)v15 < *(_DWORD *)v13 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      if ( v15 == v8 )
        goto LABEL_9;
      goto LABEL_36;
    }
    v13 += 8;
    if ( v17 <= v19 )
      break;
    v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    v18 = v16;
    v32 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
    if ( v13 == v40 )
      goto LABEL_31;
    v33 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_37:
    FastRegion::Internal::CStripe::Subtract((FastRegion::Internal::CStripe *)v12, v18, v32, v33);
    if ( v12 == v10 )
    {
      if ( *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1) != -8 )
        v12 += 8;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
    {
      v12 += 8;
    }
  }
  v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
  v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
  if ( v15 == v8 )
    goto LABEL_9;
  v14 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
  if ( v13 != v40 )
  {
LABEL_36:
    v33 = v18;
    v32 = v14;
    goto LABEL_37;
  }
  v32 = (const struct FastRegion::Internal::CStripe *)(v13 - 8);
LABEL_31:
  FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v12, v18, v32);
  while ( 1 )
  {
    if ( v12 == v10 )
    {
      v30 = v12 + 8;
      v31 = *((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1);
LABEL_26:
      if ( (_DWORD)v30 + v31 - (_DWORD)v12 )
        v12 = v30;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v12) )
    {
      v12 += 8;
    }
    v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
    if ( v15 == v8 )
      break;
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v12,
      (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8));
  }
  v17 = *((_DWORD *)v15 - 2);
LABEL_9:
  *(_DWORD *)v12 = v17;
  if ( v12 != v10 && &v12[*((int *)v12 + 1)] != &v12[*((int *)v12 - 1) - 8] )
    v12 += 8;
  v20 = (v12 - (char *)this - 12) >> 3;
  *(_DWORD *)this = v20;
  if ( (_DWORD)v20 )
  {
    v21 = v12 - 8;
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v22 = &v21[*((int *)v21 + 1)];
    while ( 1 )
    {
      v21 -= 8;
      if ( v21 < v10 )
        break;
      v23 = v22;
      v22 = &v21[*((int *)v21 + 1)];
      if ( v22 != v23 )
      {
        if ( *((_DWORD *)this + 1) > *(_DWORD *)v22 )
          *((_DWORD *)this + 1) = *(_DWORD *)v22;
        v24 = *((_DWORD *)v23 - 1);
        if ( *((_DWORD *)this + 2) < v24 )
          *((_DWORD *)this + 2) = v24;
      }
    }
  }
}
