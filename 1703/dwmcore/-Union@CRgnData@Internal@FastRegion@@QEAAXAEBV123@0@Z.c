/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180074A10
 * Callers:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180073E60 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800756BC (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x180075718 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x180075770 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800757C8 (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rsi
  _DWORD *v5; // rdi
  FastRegion::Internal::CStripe *v6; // r14
  int v7; // ebp
  const struct FastRegion::Internal::CStripe *v8; // rdx
  const struct FastRegion::Internal::CStripe *v9; // r13
  const struct FastRegion::Internal::CStripe *v10; // r12
  __int64 v11; // rcx
  const struct FastRegion::Internal::CStripe *v12; // r15
  const struct FastRegion::Internal::CStripe *v13; // r8
  const struct FastRegion::Internal::CStripe *v14; // r11
  FastRegion::Internal::CStripe *v15; // rbx
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // r10
  const struct FastRegion::Internal::CStripe *v19; // rdi
  _DWORD *v20; // r10
  __int64 v21; // r9
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  char *v24; // r8
  int v25; // eax
  int v26; // eax
  const struct FastRegion::Internal::CStripe *v27; // r8
  const struct FastRegion::Internal::CStripe *v28; // rsi
  __int64 v29; // r8
  _DWORD *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r10
  _DWORD *v33; // r9
  char *v34; // rdx
  int v35; // eax
  _DWORD *v36; // rcx
  __int64 v37; // r8
  const struct FastRegion::Internal::CStripe *v38; // rsi
  int v39; // eax
  char *v40; // rdi
  int v41; // ecx
  int v42; // ecx
  _DWORD *v43; // rcx
  __int64 v44; // r9
  __int64 v45; // r8
  _DWORD *v46; // r15
  const struct FastRegion::Internal::CStripe *v47; // r10
  const struct FastRegion::Internal::CStripe *v48; // r11
  const struct FastRegion::Internal::CStripe *v49; // r8
  const struct FastRegion::Internal::CStripe *v50; // r12
  const struct FastRegion::Internal::CStripe *v51; // r13
  const struct FastRegion::Internal::CStripe *v52; // rdx
  const struct FastRegion::Internal::CStripe *v53; // r9
  __int64 v54; // r9
  _DWORD *v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r10
  _DWORD *v58; // r8
  char *v59; // rdx
  int v60; // eax
  _DWORD *v61; // rcx
  __int64 v62; // r9
  FastRegion::Internal::CStripe *v63; // rcx
  const struct FastRegion::Internal::CStripe *v64; // r8
  _DWORD *v65; // r15
  const struct FastRegion::Internal::CStripe *v66; // rdx
  const struct FastRegion::Internal::CStripe *v67; // rdx
  FastRegion::Internal::CStripe *v68; // rcx
  const struct FastRegion::Internal::CStripe *v69; // rdx
  int v70; // eax
  int v71; // ecx
  const struct FastRegion::Internal::CStripe *v72; // rdx
  FastRegion::Internal::CStripe *v73; // r11
  int v74; // eax
  const struct FastRegion::Internal::CStripe *v75; // rdx
  _DWORD *v76; // rsi
  FastRegion::Internal::CStripe *v77; // r11
  int v78; // eax
  _DWORD *v79; // rdi
  FastRegion::Internal::CStripe *v80; // rcx
  FastRegion::Internal::CStripe *v81; // rcx
  char *v82; // [rsp+20h] [rbp-78h]
  _DWORD *v83; // [rsp+28h] [rbp-70h]
  struct FastRegion::Internal::CStripe *v84; // [rsp+30h] [rbp-68h]
  struct FastRegion::Internal::CStripe *v85; // [rsp+38h] [rbp-60h]
  const struct FastRegion::Internal::CStripe *v89; // [rsp+B8h] [rbp+20h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a3 + 12);
  v5 = (_DWORD *)((char *)a2 + 12);
  v85 = (struct FastRegion::Internal::CStripe *)v4;
  v84 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v6 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v7 = (_DWORD)this + 12;
  v82 = (char *)a2 + 8 * v3 + 12;
  v8 = (const struct FastRegion::Internal::CStripe *)v5;
  v9 = (const struct FastRegion::Internal::CStripe *)v5;
  v10 = (const struct FastRegion::Internal::CStripe *)v5;
  v11 = *(int *)a3;
  v12 = (const struct FastRegion::Internal::CStripe *)v5;
  v13 = (const struct FastRegion::Internal::CRgnData *)((char *)a3 + 12);
  v14 = (const struct FastRegion::Internal::CStripe *)v4;
  v15 = v6;
  v89 = (const struct FastRegion::Internal::CStripe *)&v4[2 * v11];
  v16 = v7 + 8 * (v11 + v3) - (_DWORD)v6;
  v17 = 0LL;
  *((_DWORD *)v6 + 1) = v16;
  if ( *v5 >= *v4 )
  {
    if ( *v5 <= *v4 )
    {
      v19 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
      v28 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
      FastRegion::Internal::CStripe::Union(v6, v8, v13);
      v63 = (FastRegion::Internal::CStripe *)((char *)v6 + 8);
      if ( *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1) != -8 )
LABEL_50:
        v15 = v63;
LABEL_35:
      v46 = (_DWORD *)((char *)v15 + 8);
      while ( 1 )
      {
        v47 = v19;
        v48 = v28;
        v49 = v19;
        v50 = v19;
        v51 = v28;
        v52 = v28;
        v53 = v19;
        if ( *(_DWORD *)v19 < *(_DWORD *)v28 )
        {
          v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
          if ( v19 == (const struct FastRegion::Internal::CStripe *)v82 )
          {
            FastRegion::Internal::CStripe::Copy(
              v15,
              (const struct FastRegion::Internal::CStripe *)((char *)v28 - 8),
              v49);
            goto LABEL_88;
          }
          v64 = (const struct FastRegion::Internal::CStripe *)((char *)v28 - 8);
          v52 = v53;
        }
        else if ( *(_DWORD *)v19 <= *(_DWORD *)v28 )
        {
          v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
          v28 = (const struct FastRegion::Internal::CStripe *)((char *)v28 + 8);
          if ( v19 == (const struct FastRegion::Internal::CStripe *)v82 )
          {
            if ( v28 == v89 )
            {
              v39 = *((_DWORD *)v19 - 2);
              goto LABEL_22;
            }
            FastRegion::Internal::CStripe::Copy(v15, v52, v49);
            if ( v15 == v6 )
            {
              v80 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
              if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
                goto LABEL_150;
              goto LABEL_18;
            }
LABEL_89:
            if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
              v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
            goto LABEL_18;
          }
          if ( v28 == v89 )
          {
            FastRegion::Internal::CStripe::Copy(v15, v47, v48);
            if ( v15 == v6 )
            {
              v81 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
              if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
                goto LABEL_146;
              goto LABEL_20;
            }
LABEL_83:
            if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
              v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
            goto LABEL_20;
          }
          v64 = v51;
          v52 = v50;
        }
        else
        {
          v28 = (const struct FastRegion::Internal::CStripe *)((char *)v28 + 8);
          if ( v28 == v89 )
          {
            v54 = *((int *)v15 + 1);
            *(_DWORD *)v15 = *((_DWORD *)v28 - 2);
            v55 = (_DWORD *)((char *)v15 + v54);
            v56 = (*((int *)v19 + 1) - (*((int *)v19 - 1) - 8LL)) >> 2;
            v57 = (int)v56;
            if ( (int)v56 > 0 )
            {
              v58 = v55;
              v59 = (char *)((const struct FastRegion::Internal::CStripe *)((char *)v19 + *((int *)v19 - 1) - 8)
                           - (const struct FastRegion::Internal::CStripe *)v55);
              do
              {
                *v58 = *(_DWORD *)((char *)v58 + (_QWORD)v59);
                ++v58;
                --v57;
              }
              while ( v57 );
            }
            v60 = (_DWORD)v55 + 4 * v56 - ((_DWORD)v15 + 8);
            *((_DWORD *)v15 + 3) = v60;
            if ( v15 == v6 )
            {
              if ( v60 - *((_DWORD *)v15 + 1) == -8 )
                goto LABEL_20;
            }
            else
            {
              v61 = (_DWORD *)((char *)v15 + *((int *)v15 + 1));
              v62 = (int)((*((int *)v15 + 1) - (*((int *)v15 - 1) - 8LL)) >> 2);
              if ( v62 == (*((int *)v15 + 3) - (__int64)*((int *)v15 + 1) + 8) >> 2 )
              {
                if ( v62 <= 0 )
                  goto LABEL_20;
                while ( *v61 == *(_DWORD *)((char *)v61 + *((int *)v15 - 1) - 8LL - *((int *)v15 + 1)) )
                {
                  ++v17;
                  ++v61;
                  if ( v17 >= v62 )
                    goto LABEL_20;
                }
              }
            }
            v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
            goto LABEL_20;
          }
          v64 = (const struct FastRegion::Internal::CStripe *)((char *)v19 - 8);
        }
        FastRegion::Internal::CStripe::Union(v15, v52, v64);
        if ( v15 == v6 )
        {
          if ( (_DWORD)v46 + v46[1] - *((_DWORD *)v15 + 1) - (_DWORD)v15 )
          {
            v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
            v46 += 2;
          }
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
        {
          v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
          v46 += 2;
        }
      }
    }
    v69 = (const struct FastRegion::Internal::CStripe *)v4;
    v28 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    FastRegion::Internal::CStripe::Copy(v6, v69);
    if ( *((_DWORD *)v6 + 3) - *((_DWORD *)v6 + 1) != -8 )
      v15 = (FastRegion::Internal::CStripe *)((char *)v6 + 8);
    v70 = *(_DWORD *)v28;
    v71 = *v5;
    if ( *v5 >= *(_DWORD *)v28 )
    {
      v83 = (_DWORD *)((char *)v15 + 8);
      while ( 1 )
      {
        v27 = v28;
        v72 = v28;
        v28 = (const struct FastRegion::Internal::CStripe *)((char *)v28 + 8);
        if ( v71 <= v70 )
          break;
        if ( v28 == v89 )
        {
          v73 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
          *(_DWORD *)v15 = *((_DWORD *)v28 - 2);
          v74 = *((_DWORD *)v15 + 1) - 8;
          *((_DWORD *)v15 + 3) = v74;
          if ( v15 == v6 )
          {
            if ( v74 - *((_DWORD *)v15 + 1) != -8 )
LABEL_80:
              v15 = v73;
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
          {
            goto LABEL_80;
          }
          v19 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
          v75 = v10;
          v68 = v15;
LABEL_82:
          FastRegion::Internal::CStripe::Copy(v68, v75);
          if ( v15 != v6 )
            goto LABEL_83;
          v81 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
          if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
LABEL_146:
            v15 = v81;
LABEL_20:
          v40 = (char *)v19 + 8;
          if ( v40 == v82 )
          {
LABEL_21:
            v39 = *((_DWORD *)v40 - 2);
            goto LABEL_22;
          }
          v76 = (_DWORD *)((char *)v15 + 8);
          while ( 2 )
          {
            FastRegion::Internal::CStripe::Copy(v15, (const struct FastRegion::Internal::CStripe *)(v40 - 8));
            if ( v15 == v6 )
            {
              if ( (_DWORD)v76 + v76[1] - *((_DWORD *)v15 + 1) - (_DWORD)v15 )
              {
LABEL_95:
                v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
                v76 += 2;
              }
            }
            else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
            {
              goto LABEL_95;
            }
            v40 += 8;
            if ( v40 == v82 )
              goto LABEL_21;
            continue;
          }
        }
        FastRegion::Internal::CStripe::Copy(v15, v72);
        if ( v15 == v6 )
        {
          if ( (_DWORD)v83 + v83[1] - *((_DWORD *)v15 + 1) - (_DWORD)v15 )
          {
            v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
            v83 += 2;
          }
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
        {
          v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
          v83 += 2;
        }
        v70 = *(_DWORD *)v28;
        v71 = *v5;
        if ( *v5 < *(_DWORD *)v28 )
          goto LABEL_86;
      }
      v19 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
      v68 = v15;
      if ( v28 == v89 )
      {
        v75 = v9;
        goto LABEL_82;
      }
      v67 = v10;
LABEL_69:
      FastRegion::Internal::CStripe::Union(v68, v67, v27);
      if ( v15 != v6 )
      {
        if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
          v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
        goto LABEL_35;
      }
      v63 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
        goto LABEL_50;
      goto LABEL_35;
    }
LABEL_86:
    v19 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
    v27 = (const struct FastRegion::Internal::CStripe *)((char *)v28 - 8);
    v67 = v12;
LABEL_68:
    v68 = v15;
    goto LABEL_69;
  }
  v18 = *((int *)v6 + 1);
  v19 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
  *(_DWORD *)v6 = *((_DWORD *)v19 - 2);
  v20 = (_DWORD *)((char *)v6 + v18);
  v21 = (*((int *)v19 + 1) - (*((int *)v19 - 1) - 8LL)) >> 2;
  v22 = (int)v21;
  if ( (int)v21 > 0 )
  {
    v23 = v20;
    v24 = (char *)((const struct FastRegion::Internal::CStripe *)((char *)v19 + *((int *)v19 - 1) - 8)
                 - (const struct FastRegion::Internal::CStripe *)v20);
    do
    {
      *v23 = *(_DWORD *)((char *)v23 + (_QWORD)v24);
      ++v23;
      --v22;
    }
    while ( v22 );
  }
  v25 = (_DWORD)v20 + 4 * v21 - ((_DWORD)v6 + 8);
  *((_DWORD *)v6 + 3) = v25;
  if ( v25 - *((_DWORD *)v6 + 1) != -8 )
    v15 = (FastRegion::Internal::CStripe *)((char *)v6 + 8);
  if ( *(_DWORD *)v19 >= *v4 )
  {
LABEL_8:
    v26 = *v4;
    v27 = v19;
    v28 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    if ( *(_DWORD *)v19 > v26 )
    {
      FastRegion::Internal::CStripe::Union(v15, v14, (const struct FastRegion::Internal::CStripe *)((char *)v19 - 8));
      if ( v15 == v6 )
      {
        v63 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
        if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) == -8 )
          goto LABEL_35;
        goto LABEL_50;
      }
      v43 = (_DWORD *)((char *)v15 + *((int *)v15 + 1));
      v44 = (int)((*((int *)v15 + 1) - (*((int *)v15 - 1) - 8LL)) >> 2);
      if ( v44 == (*((int *)v15 + 3) - (__int64)*((int *)v15 + 1) + 8) >> 2 )
      {
        v45 = 0LL;
        if ( v44 <= 0 )
          goto LABEL_35;
        while ( *v43 == *(_DWORD *)((char *)v43 + *((int *)v15 - 1) - 8LL - *((int *)v15 + 1)) )
        {
          ++v45;
          ++v43;
          if ( v45 >= v44 )
            goto LABEL_35;
        }
      }
      v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      goto LABEL_35;
    }
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
    if ( v19 == (const struct FastRegion::Internal::CStripe *)v82 )
    {
      v29 = *((int *)v15 + 1);
      *(_DWORD *)v15 = *((_DWORD *)v28 - 2);
      v30 = (_DWORD *)((char *)v15 + v29);
      v31 = (*((int *)v28 + 1) - (*((int *)v28 - 1) - 8LL)) >> 2;
      v32 = (int)v31;
      if ( (int)v31 > 0 )
      {
        v33 = v30;
        v34 = (char *)((const struct FastRegion::Internal::CStripe *)((char *)v28 + *((int *)v28 - 1) - 8)
                     - (const struct FastRegion::Internal::CStripe *)v30);
        do
        {
          *v33 = *(_DWORD *)((char *)v33 + (_QWORD)v34);
          ++v33;
          --v32;
        }
        while ( v32 );
      }
      v35 = (_DWORD)v30 + 4 * v31 - ((_DWORD)v15 + 8);
      *((_DWORD *)v15 + 3) = v35;
      if ( v15 == v6 )
      {
        if ( v35 - *((_DWORD *)v15 + 1) == -8 )
          goto LABEL_18;
      }
      else
      {
        v36 = (_DWORD *)((char *)v15 + *((int *)v15 + 1));
        v37 = (int)((*((int *)v15 + 1) - (*((int *)v15 - 1) - 8LL)) >> 2);
        if ( v37 == (*((int *)v15 + 3) - (__int64)*((int *)v15 + 1) + 8) >> 2 )
        {
          if ( v37 <= 0 )
            goto LABEL_18;
          while ( *v36 == *(_DWORD *)((char *)v36 + *((int *)v15 - 1) - 8LL - *((int *)v15 + 1)) )
          {
            ++v17;
            ++v36;
            if ( v17 >= v37 )
              goto LABEL_18;
          }
        }
      }
      v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      goto LABEL_18;
    }
    v67 = v85;
    goto LABEL_68;
  }
  v65 = (_DWORD *)((char *)v15 + 8);
  while ( 1 )
  {
    v66 = v19;
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v19 + 8);
    if ( v19 == (const struct FastRegion::Internal::CStripe *)v82 )
      break;
    FastRegion::Internal::CStripe::Copy(v15, v66);
    if ( v15 == v6 )
    {
      if ( !((_DWORD)v65 + v65[1] - *((_DWORD *)v15 + 1) - (_DWORD)v15) )
        goto LABEL_63;
LABEL_62:
      v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v65 += 2;
      goto LABEL_63;
    }
    if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
      goto LABEL_62;
LABEL_63:
    if ( *(_DWORD *)v19 >= *v4 )
    {
      v14 = (const struct FastRegion::Internal::CStripe *)v4;
      goto LABEL_8;
    }
  }
  v77 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
  *(_DWORD *)v15 = *((_DWORD *)v19 - 2);
  v78 = *((_DWORD *)v15 + 1) - 8;
  *((_DWORD *)v15 + 3) = v78;
  if ( v15 == v6 )
  {
    if ( v78 - *((_DWORD *)v15 + 1) != -8 )
LABEL_100:
      v15 = v77;
  }
  else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
  {
    goto LABEL_100;
  }
  v28 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
  FastRegion::Internal::CStripe::Copy(v15, v84);
LABEL_88:
  if ( v15 != v6 )
    goto LABEL_89;
  v80 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
  if ( *((_DWORD *)v15 + 3) - *((_DWORD *)v15 + 1) != -8 )
LABEL_150:
    v15 = v80;
LABEL_18:
  v38 = (const struct FastRegion::Internal::CStripe *)((char *)v28 + 8);
  if ( v38 != v89 )
  {
    v79 = (_DWORD *)((char *)v15 + 8);
    while ( 1 )
    {
      FastRegion::Internal::CStripe::Copy(v15, (const struct FastRegion::Internal::CStripe *)((char *)v38 - 8));
      if ( v15 == v6 )
        break;
      if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v15) )
        goto LABEL_109;
LABEL_110:
      v38 = (const struct FastRegion::Internal::CStripe *)((char *)v38 + 8);
      if ( v38 == v89 )
        goto LABEL_19;
    }
    if ( !((_DWORD)v79 + v79[1] - *((_DWORD *)v15 + 1) - (_DWORD)v15) )
      goto LABEL_110;
LABEL_109:
    v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
    v79 += 2;
    goto LABEL_110;
  }
LABEL_19:
  v39 = *((_DWORD *)v38 - 2);
LABEL_22:
  *(_DWORD *)v15 = v39;
  if ( v15 != v6 && (char *)v15 + *((int *)v15 + 1) != (char *)v15 + *((int *)v15 - 1) - 8 )
    v15 = (FastRegion::Internal::CStripe *)((char *)v15 + 8);
  *(_DWORD *)this = (v15 - this - 12) >> 3;
  v41 = *((_DWORD *)a3 + 1);
  if ( *((_DWORD *)a2 + 1) < v41 )
    v41 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = v41;
  v42 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)a2 + 2) > v42 )
    v42 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v42;
}
