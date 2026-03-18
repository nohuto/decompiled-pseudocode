/*
 * XREFs of ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FCCC
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z @ 0x1800B2D00 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@@Z.c)
 *     ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800B2E3C (-Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 *     ?IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ @ 0x1800B2FD0 (-IsEqualToPrevious@CStripe@Internal@FastRegion@@QEBA_NXZ.c)
 *     ?Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1800B3170 (-Copy@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z.c)
 */

void __fastcall FastRegion::Internal::CRgnData::Union(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2,
        const struct FastRegion::Internal::CRgnData *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // r14
  _DWORD *v5; // rsi
  const struct FastRegion::Internal::CStripe *v8; // rdx
  const struct FastRegion::Internal::CStripe *v9; // r13
  const struct FastRegion::Internal::CStripe *v10; // r8
  FastRegion::Internal::CStripe *v11; // rbp
  __int64 v12; // rcx
  const struct FastRegion::Internal::CStripe *v13; // r15
  const struct FastRegion::Internal::CStripe *v14; // r12
  const struct FastRegion::Internal::CStripe *v15; // rsi
  FastRegion::Internal::CStripe *v16; // rbx
  int v17; // eax
  const struct FastRegion::Internal::CStripe *v18; // r14
  const struct FastRegion::Internal::CStripe *v19; // r8
  const struct FastRegion::Internal::CStripe *v20; // rdx
  FastRegion::Internal::CStripe *v21; // rcx
  const struct FastRegion::Internal::CStripe *v22; // r12
  const struct FastRegion::Internal::CStripe *v23; // r10
  const struct FastRegion::Internal::CStripe *v24; // rcx
  const struct FastRegion::Internal::CStripe *v25; // r8
  const struct FastRegion::Internal::CStripe *v26; // r9
  const struct FastRegion::Internal::CStripe *v27; // r8
  int v28; // eax
  int v29; // eax
  int v30; // eax
  const struct FastRegion::Internal::CStripe *v31; // rdx
  const struct FastRegion::Internal::CStripe *v32; // rdx
  const struct FastRegion::Internal::CStripe *v33; // rdx
  int v34; // eax
  FastRegion::Internal::CStripe *v35; // r10
  const struct FastRegion::Internal::CStripe *v36; // rdx
  int v37; // eax
  int v38; // ecx
  const struct FastRegion::Internal::CStripe *v39; // rdx
  int v40; // eax
  FastRegion::Internal::CStripe *v41; // r10
  const struct FastRegion::Internal::CStripe *v42; // [rsp+20h] [rbp-78h]
  const struct FastRegion::Internal::CStripe *v46; // [rsp+B8h] [rbp+20h]

  v3 = *(int *)a2;
  v4 = (_DWORD *)((char *)a3 + 12);
  v5 = (_DWORD *)((char *)a2 + 12);
  v8 = (const struct FastRegion::Internal::CStripe *)v5;
  v9 = (const struct FastRegion::Internal::CStripe *)v5;
  v10 = (const struct FastRegion::Internal::CStripe *)v4;
  v46 = (const struct FastRegion::Internal::CStripe *)&v5[2 * v3];
  v11 = (FastRegion::Internal::CRgnData *)((char *)this + 12);
  v12 = *(int *)a3;
  v13 = (const struct FastRegion::Internal::CStripe *)v4;
  v14 = (const struct FastRegion::Internal::CStripe *)v4;
  v42 = (const struct FastRegion::Internal::CStripe *)&v4[2 * v12];
  *((_DWORD *)this + 4) = 8 * (v12 + v3);
  if ( *v5 >= *v4 )
  {
    if ( *v5 <= *v4 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
      v18 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
      FastRegion::Internal::CStripe::Union(v11, v8, v10);
      v16 = v11;
      if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
        v16 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
      goto LABEL_11;
    }
    v36 = (const struct FastRegion::Internal::CStripe *)v4;
    v18 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    FastRegion::Internal::CStripe::Copy(v11, v36);
    v16 = v11;
    v37 = *v5;
    if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
      v16 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
    v38 = *(_DWORD *)v18;
    if ( v37 < *(_DWORD *)v18 )
    {
LABEL_66:
      v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
      v20 = v9;
      goto LABEL_67;
    }
    while ( 1 )
    {
      v19 = v18;
      v39 = v18;
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
      if ( v37 <= v38 )
        break;
      if ( v18 == v42 )
      {
        *(_DWORD *)v16 = *((_DWORD *)v18 - 2);
        v40 = *((_DWORD *)v16 + 1) - 8;
        *((_DWORD *)v16 + 3) = v40;
        if ( v16 == v11 )
        {
          if ( v40 - *((_DWORD *)v16 + 1) != -8 )
            v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
        {
          v16 = v41;
        }
        v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
        v20 = v9;
        v21 = v16;
        goto LABEL_65;
      }
      FastRegion::Internal::CStripe::Copy(v16, v39);
      if ( v16 == v11 )
      {
        if ( *((_DWORD *)v16 + 3) - *((_DWORD *)v16 + 1) != -8 )
          v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
      {
        v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
      }
      v37 = *v5;
      v38 = *(_DWORD *)v18;
      if ( *v5 < *(_DWORD *)v18 )
        goto LABEL_66;
    }
    v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
    v20 = v9;
    v21 = v16;
    if ( v18 != v42 )
      goto LABEL_8;
LABEL_65:
    FastRegion::Internal::CStripe::Copy(v21, v20);
LABEL_16:
    if ( v16 == v11 )
    {
      if ( *((_DWORD *)v16 + 3) - *((_DWORD *)v16 + 1) != -8 )
        v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
    {
      v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
    }
    while ( 1 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v46 )
        break;
      FastRegion::Internal::CStripe::Copy(v16, (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8));
      if ( v16 == v11 )
      {
        if ( *((_DWORD *)v16 + 3) - *((_DWORD *)v16 + 1) != -8 )
          v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
      {
        v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
      }
    }
LABEL_20:
    v28 = *((_DWORD *)v15 - 2);
  }
  else
  {
    v15 = (const struct FastRegion::Internal::CStripe *)(v5 + 2);
    FastRegion::Internal::CStripe::Copy(v11, v8);
    v16 = v11;
    if ( *((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1) != -8 )
      v16 = (FastRegion::Internal::CStripe *)((char *)v11 + 8);
    while ( 1 )
    {
      v17 = *v4;
      if ( *(_DWORD *)v15 >= *v4 )
        break;
      v31 = v15;
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      if ( v15 == v46 )
      {
        *(_DWORD *)v16 = *((_DWORD *)v15 - 2);
        v34 = *((_DWORD *)v16 + 1) - 8;
        *((_DWORD *)v16 + 3) = v34;
        if ( v16 == v11 )
        {
          if ( v34 - *((_DWORD *)v16 + 1) != -8 )
            v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
        }
        else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
        {
          v16 = v35;
        }
        v18 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
        v33 = v14;
        v21 = v16;
LABEL_43:
        FastRegion::Internal::CStripe::Copy(v21, v33);
        goto LABEL_44;
      }
      FastRegion::Internal::CStripe::Copy(v16, v31);
      if ( v16 == v11 )
      {
        if ( *((_DWORD *)v16 + 3) - *((_DWORD *)v16 + 1) != -8 )
          v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
      {
        v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
      }
    }
    v18 = (const struct FastRegion::Internal::CStripe *)(v4 + 2);
    v19 = v15;
    if ( *(_DWORD *)v15 <= v17 )
    {
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v21 = v16;
      if ( v15 != v46 )
      {
        v20 = v14;
        goto LABEL_8;
      }
      v33 = v13;
      goto LABEL_43;
    }
    v19 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
    v20 = v14;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v21 = v16;
LABEL_8:
          FastRegion::Internal::CStripe::Union(v21, v20, v19);
          if ( v16 == v11 )
          {
            if ( *((_DWORD *)v16 + 3) - *((_DWORD *)v16 + 1) != -8 )
              v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
          }
          else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
          {
            v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
          }
LABEL_11:
          v22 = v18;
          v23 = v18;
          v24 = v18;
          v25 = v15;
          v26 = v18;
          v20 = v15;
          if ( *(_DWORD *)v15 >= *(_DWORD *)v18 )
            break;
          v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
          if ( v15 == v46 )
          {
            v32 = (const struct FastRegion::Internal::CStripe *)((char *)v18 - 8);
            goto LABEL_55;
          }
LABEL_67:
          v19 = (const struct FastRegion::Internal::CStripe *)((char *)v18 - 8);
        }
        if ( *(_DWORD *)v15 <= *(_DWORD *)v18 )
          break;
        v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
        if ( v18 == v42 )
        {
          v20 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
          v27 = v24;
LABEL_15:
          FastRegion::Internal::CStripe::Copy(v16, v20, v27);
          goto LABEL_16;
        }
        v19 = (const struct FastRegion::Internal::CStripe *)((char *)v15 - 8);
        v20 = v26;
      }
      v15 = (const struct FastRegion::Internal::CStripe *)((char *)v15 + 8);
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
      if ( v15 == v46 )
        break;
      if ( v18 == v42 )
      {
        v27 = v22;
        goto LABEL_15;
      }
      v19 = v24;
    }
    if ( v18 == v42 )
      goto LABEL_20;
    v32 = v23;
LABEL_55:
    FastRegion::Internal::CStripe::Copy(v16, v32, v25);
LABEL_44:
    if ( v16 == v11 )
    {
      if ( *((_DWORD *)v16 + 3) - *((_DWORD *)v16 + 1) != -8 )
        v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
    }
    else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
    {
      v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
    }
    while ( 1 )
    {
      v18 = (const struct FastRegion::Internal::CStripe *)((char *)v18 + 8);
      if ( v18 == v42 )
        break;
      FastRegion::Internal::CStripe::Copy(v16, (const struct FastRegion::Internal::CStripe *)((char *)v18 - 8));
      if ( v16 == v11 )
      {
        if ( *((_DWORD *)v16 + 3) - *((_DWORD *)v16 + 1) != -8 )
          v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
      }
      else if ( !FastRegion::Internal::CStripe::IsEqualToPrevious(v16) )
      {
        v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
      }
    }
    v28 = *((_DWORD *)v18 - 2);
  }
  *(_DWORD *)v16 = v28;
  if ( v16 != v11 && (char *)v16 + *((int *)v16 + 1) != (char *)v16 + *((int *)v16 - 1) - 8 )
    v16 = (FastRegion::Internal::CStripe *)((char *)v16 + 8);
  *(_DWORD *)this = (v16 - this - 12) >> 3;
  v29 = *((_DWORD *)a3 + 1);
  if ( *((_DWORD *)a2 + 1) < v29 )
    v29 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = v29;
  v30 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)a2 + 2) > v30 )
    v30 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v30;
}
