/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E640
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18007C160 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x18007F634 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18007F770 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x18007F920 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x18007FAD8 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rsi
  __int64 v5; // r10
  int *v6; // rdi
  int *v7; // r12
  __int64 v8; // r15
  const struct FastRegion::Internal::CStripe *v9; // rbp
  const struct FastRegion::Internal::CStripe *v10; // r14
  int *v11; // rbx
  char *v12; // r13
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r10
  const struct FastRegion::Internal::CStripe *v16; // rdi
  _DWORD *v17; // r10
  char *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  char *v22; // r8
  int v23; // eax
  int v24; // ecx
  char *v25; // rsi
  const struct FastRegion::Internal::CStripe *v26; // r8
  int *v27; // r14
  __int64 v28; // r9
  _DWORD *v29; // r9
  char *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r10
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  int v35; // r11d
  __int64 v36; // rcx
  __int64 v37; // rdx
  _DWORD *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  char *j; // rsi
  int v42; // eax
  char *i; // rdi
  int v44; // ecx
  int v45; // ecx
  _DWORD *v46; // rcx
  __int64 v47; // r9
  __int64 v48; // r8
  int *v49; // rbp
  int v50; // ecx
  const struct FastRegion::Internal::CStripe *v51; // r9
  __int64 v52; // r9
  _DWORD *v53; // r9
  char *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r10
  _DWORD *v57; // rcx
  __int64 v58; // rdx
  int v59; // r11d
  __int64 v60; // rcx
  __int64 v61; // rdx
  _DWORD *v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  _DWORD *v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rax
  const struct FastRegion::Internal::CStripe *v70; // r11
  __int64 v71; // r9
  __int64 v72; // rdx
  _DWORD *v73; // rcx
  int v74; // edx
  __int64 v75; // rcx
  __int64 v76; // r8
  _DWORD *v77; // rcx
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  int *v81; // rcx
  const struct FastRegion::Internal::CStripe *v82; // rdx
  FastRegion::Internal::CStripe *v83; // rcx
  int v84; // eax
  int v85; // ecx
  int *v86; // r10
  int v87; // ecx
  int *v88; // r10
  int v89; // ecx
  int *v90; // rcx
  int *v91; // rcx
  char *v95; // [rsp+88h] [rbp+20h]

  v3 = *(int *)a3;
  v4 = (_DWORD *)((char *)a3 + 12);
  v5 = *(int *)a2;
  v6 = (int *)((char *)a2 + 12);
  v7 = (int *)((char *)this + 12);
  v8 = 0LL;
  v9 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
  v10 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v11 = (int *)((char *)this + 12);
  v95 = (char *)a3 + 8 * v3 + 12;
  v12 = (char *)a2 + 8 * v5 + 12;
  *((_DWORD *)this + 4) = 8 * (v3 + v5);
  v13 = *((_DWORD *)a3 + 3);
  v14 = *((_DWORD *)a2 + 3);
  if ( v14 >= v13 )
  {
    v25 = (char *)a3 + 20;
    if ( v14 <= v13 )
    {
      v27 = (int *)((char *)a3 + 12);
      v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
      FastRegion::Internal::CStripe::Union(
        (FastRegion::Internal::CStripe *)v11,
        (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12),
        (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
      v81 = v7 + 2;
      if ( (_DWORD)v7 + 8 + v7[3] - v7[1] - (_DWORD)v11 )
LABEL_71:
        v11 = v81;
LABEL_37:
      v49 = (int *)((char *)v16 - 8);
LABEL_38:
      while ( 1 )
      {
        v50 = *(_DWORD *)v25;
        v51 = v16;
        v42 = *(_DWORD *)v16;
        if ( *(_DWORD *)v16 < *(_DWORD *)v25 )
          break;
        v25 += 8;
        if ( v42 <= v50 )
        {
          v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
          v49 += 2;
          if ( v16 == (const struct FastRegion::Internal::CStripe *)v12 )
          {
            if ( v25 == v95 )
              goto LABEL_23;
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v11,
              (const struct FastRegion::Internal::CStripe *)(v25 - 8),
              v51);
            if ( v11 != v7 )
              goto LABEL_108;
            v90 = v11 + 2;
            if ( v11[3] - v11[1] == -8 )
              goto LABEL_19;
LABEL_160:
            v11 = v90;
            goto LABEL_19;
          }
          v27 = (int *)(v25 - 8);
          if ( v25 == v95 )
          {
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v11,
              v51,
              (const struct FastRegion::Internal::CStripe *)(v25 - 8));
            if ( v11 != v7 )
              goto LABEL_97;
            v91 = v11 + 2;
            if ( v11[3] - v11[1] != -8 )
              goto LABEL_156;
            goto LABEL_21;
          }
LABEL_79:
          FastRegion::Internal::CStripe::Union(
            (FastRegion::Internal::CStripe *)v11,
            v51,
            (const struct FastRegion::Internal::CStripe *)v27);
          if ( v11 == v7 )
          {
            if ( v11[3] - v11[1] != -8 )
              v11 += 2;
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
          {
            v11 += 2;
          }
        }
        else
        {
          v27 = (int *)(v25 - 8);
          if ( v25 == v95 )
          {
            v52 = v11[1];
            *v11 = *v27;
            v53 = (int *)((char *)v11 + v52);
            v54 = (char *)v49 + v49[1];
            v55 = ((__int64)v16 + *((int *)v16 + 1) - (_QWORD)v54) >> 2;
            v56 = (int)v55;
            if ( (int)v55 > 0 )
            {
              v57 = v53;
              v58 = v54 - (char *)v53;
              do
              {
                *v57 = *(_DWORD *)((char *)v57 + v58);
                ++v57;
                --v56;
              }
              while ( v56 );
            }
            v59 = (_DWORD)v53 + 4 * v55 - ((_DWORD)v11 + 8);
            v11[3] = v59;
            v60 = v11[1];
            if ( v11 == v7 )
            {
              if ( (_DWORD)v53 + 4 * (_DWORD)v55 - (_DWORD)v11 == (_DWORD)v60 )
                goto LABEL_21;
            }
            else
            {
              v61 = (__int64)v11 + *(v11 - 1) - 8;
              v62 = (int *)((char *)v11 + v60);
              v63 = (int)(((__int64)v62 - v61) >> 2);
              if ( v63 == ((__int64)v11 + v59 - (_QWORD)v62 + 8) >> 2 )
              {
                if ( v63 <= 0 )
                  goto LABEL_21;
                v64 = v61 - (_QWORD)v62;
                while ( *v62 == *(_DWORD *)((char *)v62 + v64) )
                {
                  ++v8;
                  ++v62;
                  if ( v8 >= v63 )
                    goto LABEL_21;
                }
              }
            }
            v11 += 2;
            goto LABEL_21;
          }
          FastRegion::Internal::CStripe::Union(
            (FastRegion::Internal::CStripe *)v11,
            (const struct FastRegion::Internal::CStripe *)(v25 - 8),
            (const struct FastRegion::Internal::CStripe *)v49);
          if ( v11 == v7 )
          {
            if ( v11[3] - v11[1] != -8 )
              v11 += 2;
          }
          else
          {
            v65 = (int *)((char *)v11 + v11[1]);
            v66 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
            if ( v66 != (v11[3] - (__int64)v11[1] + 8) >> 2 )
              goto LABEL_125;
            v67 = 0LL;
            if ( v66 > 0 )
            {
              while ( *v65 == *(_DWORD *)((char *)v65 + *(v11 - 1) - 8LL - v11[1]) )
              {
                ++v67;
                ++v65;
                if ( v67 >= v66 )
                  goto LABEL_38;
              }
LABEL_125:
              v11 += 2;
            }
          }
        }
      }
      v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
      v49 += 2;
      if ( v16 == (const struct FastRegion::Internal::CStripe *)v12 )
      {
        FastRegion::Internal::CStripe::Copy(
          (FastRegion::Internal::CStripe *)v11,
          (const struct FastRegion::Internal::CStripe *)v27,
          v51);
        goto LABEL_107;
      }
      goto LABEL_79;
    }
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v11,
      (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12));
    if ( (_DWORD)v7 + 8 + v7[3] - v7[1] - (_DWORD)v11 )
      v11 = v7 + 2;
    v84 = *(_DWORD *)v25;
    v85 = *v6;
    if ( *v6 >= *(_DWORD *)v25 )
    {
      while ( 1 )
      {
        v25 += 8;
        if ( v85 <= v84 )
          break;
        if ( v25 == v95 )
        {
          v86 = v11 + 2;
          *v11 = *((_DWORD *)v25 - 2);
          v87 = v11[1] - 8;
          v11[3] = v87;
          if ( v11 == v7 )
          {
            if ( v87 - v11[1] != -8 )
LABEL_94:
              v11 = v86;
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
          {
            goto LABEL_94;
          }
          v16 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
          v82 = v9;
          v83 = (FastRegion::Internal::CStripe *)v11;
LABEL_96:
          FastRegion::Internal::CStripe::Copy(v83, v82);
          if ( v11 == v7 )
          {
            v91 = v11 + 2;
            if ( v11[3] - v11[1] != -8 )
LABEL_156:
              v11 = v91;
          }
          else
          {
LABEL_97:
            if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
              v11 += 2;
          }
LABEL_21:
          for ( i = (char *)v16 + 8; i != v12; i += 8 )
          {
            FastRegion::Internal::CStripe::Copy(
              (FastRegion::Internal::CStripe *)v11,
              (const struct FastRegion::Internal::CStripe *)(i - 8));
            if ( v11 == v7 )
            {
              if ( v11[3] - v11[1] != -8 )
                v11 += 2;
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
            {
              v11 += 2;
            }
          }
          v42 = *((_DWORD *)i - 2);
          goto LABEL_23;
        }
        FastRegion::Internal::CStripe::Copy(
          (FastRegion::Internal::CStripe *)v11,
          (const struct FastRegion::Internal::CStripe *)(v25 - 8));
        if ( v11 == v7 )
        {
          if ( v11[3] - v11[1] != -8 )
            v11 += 2;
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
        {
          v11 += 2;
        }
        v84 = *(_DWORD *)v25;
        v85 = *v6;
        if ( *v6 < *(_DWORD *)v25 )
          goto LABEL_130;
      }
      v16 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
      v83 = (FastRegion::Internal::CStripe *)v11;
      v82 = (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8);
      if ( v25 == v95 )
        goto LABEL_96;
      v27 = (int *)(v25 - 8);
      v26 = (const struct FastRegion::Internal::CStripe *)(v25 - 8);
LABEL_84:
      FastRegion::Internal::CStripe::Union(v83, v82, v26);
      if ( v11 != v7 )
      {
        if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
          v11 += 2;
        goto LABEL_37;
      }
      v81 = v11 + 2;
      if ( v11[3] - v11[1] != -8 )
        goto LABEL_71;
      goto LABEL_37;
    }
LABEL_130:
    v27 = (int *)(v25 - 8);
    v16 = (const struct FastRegion::Internal::CStripe *)(v6 + 2);
    v26 = (const struct FastRegion::Internal::CStripe *)(v25 - 8);
    v82 = v9;
LABEL_83:
    v83 = (FastRegion::Internal::CStripe *)v11;
    goto LABEL_84;
  }
  v15 = v7[1];
  v16 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  *v7 = v14;
  v17 = (int *)((char *)v11 + v15);
  v18 = (char *)a2 + *((int *)a2 + 4) + 12;
  v19 = (*((int *)a2 + 6) - (*((int *)a2 + 4) - 8LL)) >> 2;
  v20 = (int)v19;
  if ( (int)v19 > 0 )
  {
    v21 = v17;
    v22 = (char *)(v18 - (char *)v17);
    do
    {
      *v21 = *(_DWORD *)((char *)v21 + (_QWORD)v22);
      ++v21;
      --v20;
    }
    while ( v20 );
  }
  v7[3] = (_DWORD)v17 + 4 * v19 - ((_DWORD)v7 + 8);
  if ( (_DWORD)v17 + 4 * (_DWORD)v19 + -(int)v11 - v7[1] )
    v11 = v7 + 2;
  v23 = *v4;
  v24 = *(_DWORD *)v16;
  if ( *(_DWORD *)v16 >= *v4 )
  {
LABEL_8:
    v25 = (char *)(v4 + 2);
    v26 = v16;
    v27 = (int *)(v25 - 8);
    if ( v24 > v23 )
    {
      FastRegion::Internal::CStripe::Union(
        (FastRegion::Internal::CStripe *)v11,
        (const struct FastRegion::Internal::CStripe *)(v25 - 8),
        (const struct FastRegion::Internal::CStripe *)((char *)v16 - 8));
      if ( v11 == v7 )
      {
        v81 = v11 + 2;
        if ( v11[3] - v11[1] == -8 )
          goto LABEL_37;
        goto LABEL_71;
      }
      v46 = (int *)((char *)v11 + v11[1]);
      v47 = (int)((v11[1] - (*(v11 - 1) - 8LL)) >> 2);
      if ( v47 == (v11[3] - (__int64)v11[1] + 8) >> 2 )
      {
        if ( v47 <= 0 )
          goto LABEL_37;
        v48 = 0LL;
        while ( *v46 == *(_DWORD *)((char *)v46 + *(v11 - 1) - 8LL - v11[1]) )
        {
          ++v48;
          ++v46;
          if ( v48 >= v47 )
            goto LABEL_37;
        }
      }
      v11 += 2;
      goto LABEL_37;
    }
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    if ( v16 == (const struct FastRegion::Internal::CStripe *)v12 )
    {
      v28 = v11[1];
      *v11 = *v27;
      v29 = (int *)((char *)v11 + v28);
      v30 = (char *)v27 + v27[1];
      v31 = (__int64)&v25[*((int *)v25 + 1) - (_QWORD)v30] >> 2;
      v32 = (int)v31;
      if ( (int)v31 > 0 )
      {
        v33 = v29;
        v34 = v30 - (char *)v29;
        do
        {
          *v33 = *(_DWORD *)((char *)v33 + v34);
          ++v33;
          --v32;
        }
        while ( v32 );
      }
      v35 = (_DWORD)v29 + 4 * v31 - ((_DWORD)v11 + 8);
      v11[3] = v35;
      v36 = v11[1];
      if ( v11 == v7 )
      {
        if ( (_DWORD)v29 + 4 * (_DWORD)v31 - (_DWORD)v11 == (_DWORD)v36 )
          goto LABEL_19;
      }
      else
      {
        v37 = (__int64)v11 + *(v11 - 1) - 8;
        v38 = (int *)((char *)v11 + v36);
        v39 = (int)(((__int64)v38 - v37) >> 2);
        if ( v39 == ((__int64)v11 + v35 - (_QWORD)v38 + 8) >> 2 )
        {
          if ( v39 <= 0 )
            goto LABEL_19;
          v40 = v37 - (_QWORD)v38;
          while ( *v38 == *(_DWORD *)((char *)v38 + v40) )
          {
            ++v8;
            ++v38;
            if ( v8 >= v39 )
              goto LABEL_19;
          }
        }
      }
      v11 += 2;
      goto LABEL_19;
    }
    v82 = (const struct FastRegion::Internal::CStripe *)(v25 - 8);
    goto LABEL_83;
  }
  while ( 1 )
  {
    v68 = *(_DWORD *)v16;
    v16 = (const struct FastRegion::Internal::CStripe *)((char *)v16 + 8);
    *v11 = v68;
    if ( v16 == (const struct FastRegion::Internal::CStripe *)v12 )
      break;
    v69 = *((int *)v16 - 1);
    v70 = (const struct FastRegion::Internal::CStripe *)((char *)v11 + v11[1]);
    v71 = (*((int *)v16 + 1) - (v69 - 8)) >> 2;
    v72 = (int)v71;
    if ( (int)v71 > 0 )
    {
      v73 = (int *)((char *)v11 + v11[1]);
      do
      {
        *v73 = *(_DWORD *)((char *)v73 + (const struct FastRegion::Internal::CStripe *)((char *)v16 + v69 - 8) - v70);
        ++v73;
        --v72;
      }
      while ( v72 );
    }
    v74 = (_DWORD)v70 + 4 * v71 - ((_DWORD)v11 + 8);
    v11[3] = v74;
    v75 = v11[1];
    if ( v11 == v7 )
    {
      if ( (_DWORD)v70 + 4 * (_DWORD)v71 - (_DWORD)v11 == (_DWORD)v75 )
        goto LABEL_67;
      goto LABEL_66;
    }
    v76 = (__int64)v11 + *(v11 - 1) - 8;
    v77 = (int *)((char *)v11 + v75);
    v78 = (int)(((__int64)v77 - v76) >> 2);
    if ( v78 != ((__int64)v11 + v74 - (_QWORD)v77 + 8) >> 2 )
      goto LABEL_66;
    v79 = 0LL;
    if ( v78 > 0 )
    {
      v80 = v76 - (_QWORD)v77;
      while ( *v77 == *(_DWORD *)((char *)v77 + v80) )
      {
        ++v79;
        ++v77;
        if ( v79 >= v78 )
          goto LABEL_67;
      }
LABEL_66:
      v11 += 2;
    }
LABEL_67:
    v23 = *v4;
    v24 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 >= *v4 )
      goto LABEL_8;
  }
  v88 = v11 + 2;
  v89 = v11[1] - 8;
  v11[3] = v89;
  if ( v11 == v7 )
  {
    if ( v89 - v11[1] != -8 )
LABEL_112:
      v11 = v88;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
  {
    goto LABEL_112;
  }
  v25 = (char *)(v4 + 2);
  FastRegion::Internal::CStripe::Copy((FastRegion::Internal::CStripe *)v11, v10);
LABEL_107:
  if ( v11 == v7 )
  {
    v90 = v11 + 2;
    if ( v11[3] - v11[1] != -8 )
      goto LABEL_160;
  }
  else
  {
LABEL_108:
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
      v11 += 2;
  }
LABEL_19:
  for ( j = v25 + 8; j != v95; j += 8 )
  {
    FastRegion::Internal::CStripe::Copy(
      (FastRegion::Internal::CStripe *)v11,
      (const struct FastRegion::Internal::CStripe *)(j - 8));
    if ( v11 == v7 )
    {
      if ( v11[3] - v11[1] != -8 )
        v11 += 2;
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious((FastRegion::Internal::CStripe *)v11) )
    {
      v11 += 2;
    }
  }
  v42 = *((_DWORD *)j - 2);
LABEL_23:
  *v11 = v42;
  if ( v11 != v7 && (char *)v11 + v11[1] != (char *)v11 + *(v11 - 1) - 8 )
    v11 += 2;
  *(_DWORD *)this = ((char *)v11 - (char *)this - 12) >> 3;
  v44 = *((_DWORD *)a2 + 1);
  if ( v44 >= *((_DWORD *)a3 + 1) )
    v44 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 1) = v44;
  v45 = *((_DWORD *)a2 + 2);
  if ( v45 <= *((_DWORD *)a3 + 2) )
    v45 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 2) = v45;
}
