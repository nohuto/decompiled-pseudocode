/*
 * XREFs of ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800302B0
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800345F0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180089710 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x1800B2D00 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800B2FD0 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x1800B302C (-Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800B3170 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Subtract(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rdi
  int *v5; // r14
  __int64 v7; // rcx
  const struct FastRegion::Internal::CStripe *v8; // r11
  const struct FastRegion::Internal::CStripe *v9; // r10
  const struct FastRegion::Internal::CStripe *v10; // r13
  const struct FastRegion::Internal::CStripe *v11; // r15
  char *v12; // rbp
  const struct FastRegion::Internal::CStripe *v13; // r12
  const struct FastRegion::Internal::CStripe *v14; // rdx
  char *v15; // rbx
  int v16; // ecx
  int v17; // eax
  const struct FastRegion::Internal::CStripe *i; // rdi
  const struct FastRegion::Internal::CStripe *v19; // r14
  char *v20; // r8
  int *v21; // r9
  char *v22; // r10
  char *v23; // rcx
  int *v24; // rdx
  FastRegion::Internal::CRgnData *v25; // rbp
  int v26; // eax
  FastRegion::Internal::CRgnData *v27; // r12
  char *v28; // rsi
  char *v29; // r15
  char *v30; // r13
  int *v31; // r9
  int v32; // eax
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  char *v35; // rcx
  int v36; // eax
  const struct FastRegion::Internal::CStripe *v37; // r8
  const struct FastRegion::Internal::CStripe *v38; // r15
  const struct FastRegion::Internal::CStripe *v39; // rdx
  const struct FastRegion::Internal::CStripe *v40; // r9
  __int64 v41; // rax
  char *v42; // rbx
  char *v43; // rax
  unsigned __int64 j; // rbx
  char *v45; // rcx
  int v46; // edx
  int v47; // ecx
  const struct FastRegion::Internal::CStripe *v48; // r8
  FastRegion::Internal::CStripe *v49; // rcx
  const struct FastRegion::Internal::CStripe *v50; // rdx
  int v51; // eax
  int v52; // r11d
  __int64 v53; // r9
  char *v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r10
  _DWORD *v57; // r8
  char *v58; // rdx
  int v59; // eax
  const struct FastRegion::Internal::CStripe *v60; // rdx
  int v61; // eax
  const struct FastRegion::Internal::CStripe *v62; // rdx
  const struct FastRegion::Internal::CStripe *v63; // r8
  char *v64; // r10
  signed __int64 v65; // r8
  int v66; // r11d
  int v67; // eax
  const struct FastRegion::Internal::CStripe *v68; // [rsp+E0h] [rbp+8h]
  const struct FastRegion::Internal::CStripe *v69; // [rsp+F0h] [rbp+18h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a2 + 12);
  v5 = (int *)((char *)a3 + 12);
  v7 = *(int *)a3;
  v8 = (const struct FastRegion::Internal::CStripe *)v4;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v68 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 8 * v3 + 12);
  v12 = (char *)this + 12;
  v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v14 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 8 * v7 + 12);
  *((_DWORD *)this + 4) = 8 * (v7 + v3);
  v15 = (char *)this + 12;
  v16 = *((_DWORD *)a3 + 3);
  v17 = *v4;
  v69 = v14;
  if ( *v4 > v16 )
  {
    v47 = *((_DWORD *)a3 + 5);
    v19 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
    if ( v17 < v47 )
    {
LABEL_75:
      i = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
      FastRegion::Internal::CStripe::Subtract(
        (FastRegion::Internal::CRgnData *)((char *)this + 12),
        v9,
        (const struct FastRegion::Internal::CStripe *)((char *)v19 - 8),
        v9);
      v35 = (char *)this + 20;
      v36 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
    }
    else
    {
      while ( 1 )
      {
        v48 = v19;
        v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
        if ( v17 <= v47 )
          break;
        if ( v19 == v14 )
        {
          i = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
          v50 = v9;
          v49 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
LABEL_38:
          FastRegion::Internal::CStripe::Copy(v49, v50);
          if ( *((_DWORD *)this + 6) - *((_DWORD *)this + 4) != -8 )
            v15 = (char *)this + 20;
LABEL_40:
          for ( i = (const struct FastRegion::Internal::CStripe *)((char *)i + 8);
                i != v68;
                i = (const struct FastRegion::Internal::CStripe *)((char *)i + 8) )
          {
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v15,
              (const struct FastRegion::Internal::CStripe *)((char *)i - 8));
            if ( v15 == v12 )
            {
              if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
                v15 += 8;
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v15) )
            {
              v15 += 8;
            }
          }
LABEL_22:
          *(_DWORD *)v15 = *((_DWORD *)i - 2);
          if ( v15 != v12 )
            goto LABEL_23;
          goto LABEL_25;
        }
        v47 = *(_DWORD *)v19;
        if ( v17 < *(_DWORD *)v19 )
          goto LABEL_75;
      }
      i = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
      v49 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
      if ( v19 == v14 )
      {
        v50 = v8;
        goto LABEL_38;
      }
      FastRegion::Internal::CStripe::Subtract(v49, v9, v48, v9);
      v35 = (char *)this + 20;
      v36 = *((_DWORD *)this + 6) - *((_DWORD *)this + 4);
    }
LABEL_17:
    if ( (_DWORD)v35 + v36 - (_DWORD)v15 )
      v15 = v35;
    goto LABEL_19;
  }
  if ( v17 < v16 )
  {
    i = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CRgnData *)((char *)this + 12), v9);
    if ( *((_DWORD *)this + 6) - *((_DWORD *)this + 4) != -8 )
      v15 = (char *)this + 20;
    while ( *(_DWORD *)i < *v5 )
    {
      v60 = i;
      i = (const struct FastRegion::Internal::CStripe *)((char *)i + 8);
      if ( i == v68 )
        goto LABEL_22;
      FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v15, v60);
      if ( v15 == v12 )
      {
        if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
          v15 += 8;
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v15) )
      {
        v15 += 8;
      }
    }
    v61 = *v5;
    v62 = i;
    v19 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
    if ( *(_DWORD *)i <= v61 )
    {
      i = (const struct FastRegion::Internal::CStripe *)((char *)i + 8);
      if ( i == v68 )
        goto LABEL_22;
      v63 = v10;
    }
    else
    {
      v62 = (const struct FastRegion::Internal::CStripe *)((char *)i - 8);
      v63 = v11;
    }
    FastRegion::Internal::CStripe::Subtract((FastRegion::Internal::CStripe *)v15, v62, v63, v13);
    if ( v15 != v12 )
      goto LABEL_68;
    goto LABEL_16;
  }
  i = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
  v19 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 20);
  *(_DWORD *)v12 = *((_DWORD *)i - 2);
  v20 = (char *)i + *((int *)i - 1) - 8;
  v21 = (int *)((char *)v19 + *((int *)v19 - 1) - 8);
  v22 = (char *)i + *((int *)i + 1);
  v23 = &v15[*((int *)this + 4)];
  v24 = (int *)((char *)v19 + *((int *)v19 + 1));
  if ( v20 != v22 && v21 != v24 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_5:
        v25 = this;
        v26 = *(_DWORD *)v20;
        v27 = this;
        v28 = v15;
        v29 = v15;
        v30 = v15;
        if ( *v21 > *(_DWORD *)v20 )
        {
          *(_DWORD *)v23 = v26;
          v23 += 4;
          v20 += 4;
          goto LABEL_47;
        }
        if ( *v21 >= v26 )
          break;
        v31 = v21 + 1;
        while ( 1 )
        {
          v66 = *v31;
          v67 = *(_DWORD *)v20;
          if ( *(_DWORD *)v20 < *v31 )
          {
            v20 += 4;
            goto LABEL_9;
          }
          v21 = v31 + 1;
          v15 = v30;
          this = v25;
          if ( v66 < v67 )
            break;
          *(_DWORD *)v23 = v67;
          v20 += 4;
          v23 += 4;
          if ( v21 == v24 )
            goto LABEL_12;
LABEL_47:
          v51 = *v21;
          v52 = *(_DWORD *)v20;
          if ( *(_DWORD *)v20 < *v21 )
          {
            *(_DWORD *)v23 = v52;
            v20 += 4;
            v23 += 4;
            v15 = v30;
            this = v25;
            if ( v20 == v22 )
              goto LABEL_12;
            goto LABEL_5;
          }
          if ( v51 < v52 )
          {
            *(_DWORD *)v23 = v51;
            v28 = v30;
            v23 += 4;
            goto LABEL_8;
          }
          *(_DWORD *)v23 = v52;
          v20 += 4;
          v23 += 4;
          v31 = v21 + 1;
          v15 = v30;
          this = v25;
          if ( v20 == v22 )
            goto LABEL_12;
LABEL_79:
          v28 = v15;
        }
        if ( v21 == v24 )
          goto LABEL_12;
      }
      v20 += 4;
LABEL_8:
      v31 = v21 + 1;
LABEL_9:
      v32 = *v31;
      if ( *v31 > *(_DWORD *)v20 )
        break;
      if ( v32 < *(_DWORD *)v20 )
      {
        *(_DWORD *)v23 = v32;
        v21 = v31 + 1;
        v23 += 4;
        v15 = v28;
        this = v25;
        if ( v21 != v24 )
          goto LABEL_47;
        goto LABEL_12;
      }
      v20 += 4;
      v21 = v31 + 1;
      v15 = v29;
      this = v25;
      if ( v20 == v22 || v21 == v24 )
        goto LABEL_12;
    }
    v20 += 4;
    v15 = v30;
    this = v27;
    if ( v20 != v22 )
      goto LABEL_79;
  }
LABEL_12:
  v33 = 0LL;
  v34 = (unsigned __int64)(v22 - v20 + 3) >> 2;
  if ( v20 > v22 )
    v34 = 0LL;
  if ( v34 )
  {
    v65 = v20 - v23;
    do
    {
      ++v33;
      *(_DWORD *)v23 = *(_DWORD *)&v23[v65];
      v23 += 4;
    }
    while ( v33 != v34 );
  }
  v12 = (char *)this + 12;
  *((_DWORD *)v15 + 3) = (_DWORD)v23 - (_DWORD)v15 - 8;
  if ( v15 == (char *)this + 12 )
  {
LABEL_16:
    v35 = v15 + 8;
    v36 = *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1);
    goto LABEL_17;
  }
  if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v15) )
    goto LABEL_69;
LABEL_19:
  while ( 1 )
  {
    v37 = v19;
    v38 = v19;
    v39 = i;
    v40 = i;
    if ( *(_DWORD *)i <= *(_DWORD *)v19 )
      break;
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
    if ( v19 == v69 )
    {
      v53 = *((int *)v15 + 1);
      *(_DWORD *)v15 = *((_DWORD *)v19 - 2);
      v54 = &v15[v53];
      v55 = (*((int *)i + 1) - (*((int *)i - 1) - 8LL)) >> 2;
      v56 = (int)v55;
      if ( (int)v55 > 0 )
      {
        v57 = v54;
        v58 = (char *)((const struct FastRegion::Internal::CStripe *)((char *)i + *((int *)i - 1) - 8)
                     - (const struct FastRegion::Internal::CStripe *)v54);
        do
        {
          *v57 = *(_DWORD *)((char *)v57 + (_QWORD)v58);
          ++v57;
          --v56;
        }
        while ( v56 );
      }
      v59 = (_DWORD)v54 + 4 * v55 - ((_DWORD)v15 + 8);
      *((_DWORD *)v15 + 3) = v59;
      if ( v15 == v12 )
      {
        if ( v59 - *((_DWORD *)v15 + 1) != -8 )
          v15 += 8;
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v15) )
      {
        v15 = v64;
      }
      goto LABEL_40;
    }
    v39 = (const struct FastRegion::Internal::CStripe *)((char *)i - 8);
    v40 = v38;
LABEL_89:
    FastRegion::Internal::CStripe::Subtract((FastRegion::Internal::CStripe *)v15, v39, v37, v40);
    if ( v15 == v12 )
      goto LABEL_16;
LABEL_68:
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v15) )
LABEL_69:
      v15 += 8;
  }
  if ( *(_DWORD *)i >= *(_DWORD *)v19 )
  {
    i = (const struct FastRegion::Internal::CStripe *)((char *)i + 8);
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
    if ( i == v68 )
      goto LABEL_22;
    if ( v19 == v69 )
    {
      FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v15, v39, v37);
      if ( v15 == v12 )
      {
        if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
          v15 += 8;
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v15) )
      {
        v15 += 8;
      }
      goto LABEL_40;
    }
    v40 = v39;
    goto LABEL_89;
  }
  i = (const struct FastRegion::Internal::CStripe *)((char *)i + 8);
  if ( i != v68 )
  {
    v37 = (const struct FastRegion::Internal::CStripe *)((char *)v19 - 8);
    goto LABEL_89;
  }
  *(_DWORD *)v15 = *((_DWORD *)i - 2);
  if ( v15 == v12 )
    goto LABEL_25;
LABEL_23:
  if ( &v15[*((int *)v15 + 1)] != &v15[*((int *)v15 - 1) - 8] )
    v15 += 8;
LABEL_25:
  v41 = (v15 - (char *)this - 12) >> 3;
  *(_DWORD *)this = v41;
  if ( (_DWORD)v41 )
  {
    v42 = v15 - 8;
    *((_DWORD *)this + 1) = 0x7FFFFFFF;
    *((_DWORD *)this + 2) = 0x80000000;
    v43 = &v42[*((int *)v42 + 1)];
    for ( j = (unsigned __int64)(v42 - 8); j >= (unsigned __int64)v12; j -= 8LL )
    {
      v45 = v43;
      v43 = (char *)(j + *(int *)(j + 4));
      if ( v43 != v45 )
      {
        if ( *((_DWORD *)this + 1) > *(_DWORD *)v43 )
          *((_DWORD *)this + 1) = *(_DWORD *)v43;
        v46 = *((_DWORD *)v45 - 1);
        if ( *((_DWORD *)this + 2) < v46 )
          *((_DWORD *)this + 2) = v46;
      }
    }
  }
}
