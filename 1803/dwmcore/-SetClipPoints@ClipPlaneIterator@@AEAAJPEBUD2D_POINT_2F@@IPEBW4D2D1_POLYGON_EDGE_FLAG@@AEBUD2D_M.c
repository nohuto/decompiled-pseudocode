/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801739FC
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18017341C (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800066AC (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x1801738B4 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x180173930 (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::SetClipPoints(
        ClipPlaneIterator *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3,
        const enum D2D1_POLYGON_EDGE_FLAG *a4,
        const struct D2D_MATRIX_3X2_F *a5)
{
  const struct D2D_POINT_2F *v6; // rdi
  __int64 v8; // rax
  FLOAT x; // xmm2_4
  FLOAT y; // xmm3_4
  unsigned int v11; // eax
  unsigned int v12; // r12d
  const enum D2D1_POLYGON_EDGE_FLAG *v13; // r13
  unsigned int v14; // r15d
  __int64 v15; // rdx
  unsigned int v16; // ecx
  FLOAT v17; // xmm1_4
  FLOAT v18; // xmm0_4
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // edx
  unsigned int i; // edi
  float *v26; // rax
  char *v27; // r12
  float *v28; // rcx
  float v29; // xmm3_4
  float v30; // xmm4_4
  unsigned int v31; // ecx
  float v32; // xmm2_4
  float v33; // xmm0_4
  unsigned int v34; // edi
  _BYTE *v35; // rcx
  __int64 v36; // rdx
  bool v37; // zf
  unsigned int v38; // eax
  unsigned int v39; // r9d
  unsigned int v40; // eax
  __int64 v41; // rdi
  unsigned int j; // esi
  __int64 v43; // rax
  _BYTE *v44; // rcx
  unsigned int v45; // edx
  unsigned int v46; // edi
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // eax
  int v50; // eax
  struct MilPoint2F *v51; // r8
  const struct MilPoint2F *v52; // rdx
  FLOAT dy; // xmm1_4
  unsigned int v55; // [rsp+30h] [rbp-48h] BYREF
  __int64 v56; // [rsp+38h] [rbp-40h]
  __int64 v57; // [rsp+40h] [rbp-38h]
  __int64 v58; // [rsp+48h] [rbp-30h]
  __int128 v59; // [rsp+50h] [rbp-28h] BYREF
  FLOAT dx; // [rsp+60h] [rbp-18h]
  FLOAT v61; // [rsp+64h] [rbp-14h]

  v6 = a2;
  if ( a3 < 3 )
    return 0LL;
  v8 = a3 - 1;
  x = a2[v8].x;
  y = a2[v8].y;
  if ( a4 )
    v11 = *((_DWORD *)a4 + v8);
  else
    v11 = 0;
  v55 = v11;
  v12 = v11;
  v13 = a4;
  v14 = v11;
  v15 = a3;
  v56 = a3;
  while ( 1 )
  {
    v16 = *((_DWORD *)this + 12);
    v17 = v6->x;
    v18 = v6->y;
    *(FLOAT *)&v57 = v6->x;
    v19 = v16 + 1;
    *((FLOAT *)&v57 + 1) = v18;
    *(_QWORD *)&v59 = __PAIR64__(LODWORD(y), LODWORD(x));
    if ( v16 + 1 >= v16 )
      v12 = v16 + 1;
    *((_QWORD *)&v59 + 1) = __PAIR64__(LODWORD(v18), LODWORD(v17));
    if ( v19 < v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19 < v16 ? 0x80070216 : 0, 0xB5u);
    }
    else
    {
      if ( v12 <= *((_DWORD *)this + 11) )
      {
        *(_OWORD *)(*((_QWORD *)this + 3) + 16LL * v16) = v59;
        *((_DWORD *)this + 12) = v12;
        goto LABEL_15;
      }
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 0x10u, 1, &v59);
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
    }
    v15 = v56;
LABEL_15:
    if ( a4 )
    {
      v21 = *((_DWORD *)this + 20);
      v22 = v21 + 1;
      if ( v21 + 1 >= v21 )
        v14 = v21 + 1;
      if ( v22 < v21 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22 < v21 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v14 > *((_DWORD *)this + 19) )
      {
        v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 4u, 1, &v55);
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * v21) = v55;
        *((_DWORD *)this + 20) = v14;
      }
      v15 = v56;
      v55 = *(_DWORD *)v13;
    }
    ++v6;
    v13 = (const enum D2D1_POLYGON_EDGE_FLAG *)((char *)v13 + 4);
    v58 = v57;
    v56 = --v15;
    if ( !v15 )
      break;
    y = *((FLOAT *)&v58 + 1);
    LODWORD(x) = v58;
  }
  v24 = *((_DWORD *)this + 12);
  for ( i = 0; i < v24; ++i )
  {
    v26 = (float *)(*((_QWORD *)this + 3) + 16LL * i);
    if ( (float)((float)((float)(v26[3] - v26[1]) * (float)(v26[3] - v26[1]))
               + (float)((float)(v26[2] - *v26) * (float)(v26[2] - *v26))) <= 1.0e-12 )
    {
      DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)this + 3, i);
      if ( a4 )
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)this + 7, i);
      --i;
    }
    v24 = *((_DWORD *)this + 12);
  }
  if ( v24 < 3 )
  {
    *((_DWORD *)this + 12) = 0;
    return 0LL;
  }
  v27 = (char *)this + 24;
  v28 = (float *)(*((_QWORD *)this + 3) + 16LL * (v24 - 1));
  v29 = v28[2] - *v28;
  v30 = v28[3] - v28[1];
  v31 = 0;
  do
  {
    v32 = (float)(v29
                * (float)(*(float *)(*(_QWORD *)v27 + 16LL * v31 + 12) - *(float *)(*(_QWORD *)v27 + 16LL * v31 + 4)))
        - (float)((float)(*(float *)(*(_QWORD *)v27 + 16LL * v31 + 8) - *(float *)(*(_QWORD *)v27 + 16LL * v31)) * v30);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & _xmm) > 0.000001 )
      break;
    ++v31;
  }
  while ( v31 < *((_DWORD *)this + 12) );
  if ( v32 <= 0.0 )
    v33 = FLOAT_1_0;
  else
    v33 = FLOAT_N1_0;
  v34 = 0;
  *((float *)this + 4) = v33;
  if ( a4 && *((_DWORD *)this + 12) )
  {
    v35 = (_BYTE *)*((_QWORD *)this + 7);
    v36 = *((unsigned int *)this + 12);
    do
    {
      v37 = (*v35 & 1) == 0;
      v38 = v34 + 1;
      v35 += 4;
      if ( v37 )
        v38 = v34;
      v34 = v38;
      --v36;
    }
    while ( v36 );
  }
  v39 = *((_DWORD *)this + 12);
  v40 = v39 - v34;
  if ( v34 )
  {
    if ( !v40 )
    {
      *((_DWORD *)this + 12) = 0;
      *(_BYTE *)this = 1;
      *((_DWORD *)this + 20) = 0;
      v39 = *((_DWORD *)this + 12);
      goto LABEL_79;
    }
    if ( v40 <= 4 )
    {
      v41 = 0LL;
      if ( !v39 )
        return 0LL;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4 * v41) & 1) != 0 )
        {
          DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)this + 3, v41);
          DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)this + 7, v41);
          LODWORD(v41) = v41 - 1;
        }
        v39 = *((_DWORD *)this + 12);
        v41 = (unsigned int)(v41 + 1);
      }
      while ( (unsigned int)v41 < v39 );
      goto LABEL_79;
    }
    if ( v34 >= 2 )
    {
      for ( j = 1; j < v39; ++j )
      {
        v43 = *((_QWORD *)this + 7);
        if ( (*(_BYTE *)(v43 + 4LL * j) & 1) != 0 && (*(_BYTE *)(v43 + 4LL * (j - 1)) & 1) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)v27 + 16LL * (j - 1) + 8) = *(_QWORD *)(*(_QWORD *)v27 + 16LL * j + 8);
          DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)this + 3, j);
          DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)this + 7, j--);
          --v34;
        }
        v39 = *((_DWORD *)this + 12);
      }
      if ( v34 >= 2 )
      {
        v44 = (_BYTE *)*((_QWORD *)this + 7);
        if ( (*v44 & 1) != 0 && (v44[4 * (*((_DWORD *)this + 20) - 1)] & 1) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)v27 + 8LL) = *(_QWORD *)(*((_QWORD *)this + 3)
                                                        + 16LL * (unsigned int)--*((_DWORD *)this + 12));
          --*((_DWORD *)this + 20);
          v39 = *((_DWORD *)this + 12);
        }
      }
    }
    v45 = 0;
    v55 = 0;
    if ( v39 )
    {
      v46 = v55;
      v47 = 0;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4LL * v47) & 1) != 0 )
        {
          v48 = *((unsigned int *)this + 28);
          v49 = v48 + 1;
          if ( (int)v48 + 1 >= (unsigned int)v48 )
            v46 = v48 + 1;
          if ( v49 < (unsigned int)v48 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49 < (unsigned int)v48 ? 0x80070216 : 0, 0xB5u);
          }
          else if ( v46 > *((_DWORD *)this + 27) )
          {
            v50 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 4u, 1, &v55);
            if ( v50 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xC0u);
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)this + 11) + 4 * v48) = v45;
            *((_DWORD *)this + 28) = v46;
          }
          v45 = v55;
        }
        v39 = *((_DWORD *)this + 12);
        v55 = ++v45;
        v47 = v45;
      }
      while ( v45 < v39 );
      goto LABEL_79;
    }
  }
  else
  {
LABEL_79:
    if ( v39 )
    {
      v51 = *(struct MilPoint2F **)v27;
      v52 = *(const struct MilPoint2F **)v27;
      dy = a5->dy;
      v59 = *(_OWORD *)&a5->m11;
      dx = a5->dx;
      v61 = dy;
      MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v59, v52, v51, 2 * v39);
    }
  }
  return 0LL;
}
