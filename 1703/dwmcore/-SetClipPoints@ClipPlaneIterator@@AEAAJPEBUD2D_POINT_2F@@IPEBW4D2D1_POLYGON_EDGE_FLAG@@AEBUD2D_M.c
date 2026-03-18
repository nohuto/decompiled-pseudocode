/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@W4Enum@Orientation@@@Z @ 0x180156C6C
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801566BC (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180130BA0 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x180156B38 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x180156BAC (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::SetClipPoints(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int *a4,
        __int128 *a5)
{
  __int64 *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  unsigned int v10; // r15d
  unsigned int *v11; // r13
  unsigned int v12; // r12d
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // xmm6_8
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int i; // edi
  float *v22; // rax
  __int64 v23; // rdx
  struct MilPoint2F **v24; // r14
  float *v25; // rcx
  float v26; // xmm3_4
  float v27; // xmm4_4
  unsigned int v28; // ecx
  float v29; // xmm2_4
  float v30; // xmm0_4
  unsigned int v31; // edi
  _BYTE *v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rdi
  unsigned int v36; // esi
  __int64 v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // edi
  __int64 v41; // rcx
  unsigned int v42; // eax
  int v43; // eax
  int v44; // r9d
  struct MilPoint2F *v45; // r8
  const struct MilPoint2F *v46; // rdx
  int v47; // xmm1_4
  unsigned int v49; // [rsp+30h] [rbp-48h] BYREF
  __int64 v50; // [rsp+38h] [rbp-40h]
  __int128 v51; // [rsp+40h] [rbp-38h] BYREF
  int v52; // [rsp+50h] [rbp-28h]
  int v53; // [rsp+54h] [rbp-24h]

  v6 = a2;
  if ( a3 < 3 )
    return 0LL;
  v8 = a3 - 1;
  v9 = a2[v8];
  if ( a4 )
    v49 = a4[v8];
  else
    v49 = 0;
  v10 = v49;
  v11 = a4;
  v12 = v49;
  v13 = a3;
  v50 = a3;
  do
  {
    v14 = *(_DWORD *)(a1 + 48);
    v15 = *v6;
    *(_QWORD *)&v51 = v9;
    *((_QWORD *)&v51 + 1) = v15;
    v16 = v14 + 1;
    if ( v14 + 1 >= v14 )
      v10 = v14 + 1;
    if ( v16 < v14 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16 < v14 ? 0x80070216 : 0, 0xB5u);
    }
    else
    {
      if ( v10 <= *(_DWORD *)(a1 + 44) )
      {
        *(_OWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v14) = v51;
        *(_DWORD *)(a1 + 48) = v10;
        goto LABEL_15;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 24, 0x10u, 1, &v51);
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
    }
    v13 = v50;
LABEL_15:
    if ( a4 )
    {
      v18 = *(_DWORD *)(a1 + 80);
      v19 = v18 + 1;
      if ( v18 + 1 >= v18 )
        v12 = v18 + 1;
      if ( v19 < v18 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19 < v18 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v12 > *(_DWORD *)(a1 + 76) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 56, 4u, 1, &v49);
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * v18) = v49;
        *(_DWORD *)(a1 + 80) = v12;
      }
      v13 = v50;
      v49 = *v11;
    }
    ++v6;
    ++v11;
    --v13;
    v9 = v15;
    v50 = v13;
  }
  while ( v13 );
  for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
  {
    v22 = (float *)(*(_QWORD *)(a1 + 24) + 16LL * i);
    if ( (float)((float)((float)(v22[3] - v22[1]) * (float)(v22[3] - v22[1]))
               + (float)((float)(v22[2] - *v22) * (float)(v22[2] - *v22))) <= 1.0e-12 )
    {
      DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)(a1 + 24), i);
      if ( a4 )
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)(a1 + 56), i);
      --i;
    }
  }
  v23 = *(unsigned int *)(a1 + 48);
  if ( (unsigned int)v23 >= 3 )
  {
    v24 = (struct MilPoint2F **)(a1 + 24);
    v25 = (float *)(*(_QWORD *)(a1 + 24) + 16LL * (unsigned int)(v23 - 1));
    v26 = v25[2] - *v25;
    v27 = v25[3] - v25[1];
    v28 = 0;
    do
    {
      v29 = (float)((float)(*((float *)*v24 + 4 * v28 + 3) - *((float *)*v24 + 4 * v28 + 1)) * v26)
          - (float)((float)(*((float *)*v24 + 4 * v28 + 2) - *((float *)*v24 + 4 * v28)) * v27);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v29) & _xmm) > 0.000001 )
        break;
      ++v28;
    }
    while ( v28 < (unsigned int)v23 );
    if ( v29 <= 0.0 )
      v30 = FLOAT_1_0;
    else
      v30 = FLOAT_N1_0;
    v31 = 0;
    *(float *)(a1 + 16) = v30;
    if ( a4 )
    {
      v32 = *(_BYTE **)(a1 + 56);
      v33 = v23;
      do
      {
        if ( (*v32 & 1) != 0 )
          ++v31;
        v32 += 4;
        --v33;
      }
      while ( v33 );
    }
    v34 = v23 - v31;
    if ( v31 )
    {
      if ( v34 )
      {
        if ( v34 > 4 )
        {
          if ( v31 >= 2 )
          {
            v36 = 1;
            do
            {
              v37 = *(_QWORD *)(a1 + 56);
              if ( (*(_BYTE *)(v37 + 4LL * v36) & 1) != 0 && (*(_BYTE *)(v37 + 4LL * (v36 - 1)) & 1) != 0 )
              {
                *((_QWORD *)*v24 + 2 * v36 - 1) = *((_QWORD *)*v24 + 2 * v36 + 1);
                DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)(a1 + 24), v36);
                DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)(a1 + 56), v36);
                --v31;
                --v36;
              }
              ++v36;
            }
            while ( v36 < *(_DWORD *)(a1 + 48) );
            if ( v31 >= 2 )
            {
              v38 = *(_BYTE **)(a1 + 56);
              if ( (*v38 & 1) != 0 && (v38[4 * (*(_DWORD *)(a1 + 80) - 1)] & 1) != 0 )
              {
                *((_QWORD *)*v24 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * (unsigned int)--*(_DWORD *)(a1 + 48));
                --*(_DWORD *)(a1 + 80);
              }
            }
          }
          v39 = 0LL;
          v49 = 0;
          if ( *(_DWORD *)(a1 + 48) )
          {
            v40 = v49;
            do
            {
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 4 * v39) & 1) != 0 )
              {
                v41 = *(unsigned int *)(a1 + 112);
                v42 = v41 + 1;
                if ( (int)v41 + 1 >= (unsigned int)v41 )
                  v40 = v41 + 1;
                if ( v42 < (unsigned int)v41 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v42 < (unsigned int)v41 ? 0x80070216 : 0, 0xB5u);
                }
                else if ( v40 > *(_DWORD *)(a1 + 108) )
                {
                  v43 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 88, 4u, 1, &v49);
                  if ( v43 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xC0u);
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v41) = v39;
                  *(_DWORD *)(a1 + 112) = v40;
                }
                LODWORD(v39) = v49;
              }
              v39 = (unsigned int)(v39 + 1);
              v49 = v39;
            }
            while ( (unsigned int)v39 < *(_DWORD *)(a1 + 48) );
          }
        }
        else
        {
          v35 = 0LL;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 4 * v35) & 1) != 0 )
            {
              DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)(a1 + 24), v35);
              DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)(a1 + 56), v35);
              LODWORD(v35) = v35 - 1;
            }
            v35 = (unsigned int)(v35 + 1);
          }
          while ( (unsigned int)v35 < *(_DWORD *)(a1 + 48) );
        }
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 80) = 0;
      }
    }
    v44 = *(_DWORD *)(a1 + 48);
    if ( v44 )
    {
      v45 = *v24;
      v46 = *v24;
      v47 = *((_DWORD *)a5 + 5);
      v51 = *a5;
      v52 = *((_DWORD *)a5 + 4);
      v53 = v47;
      MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v51, v46, v45, 2 * v44);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 0;
  }
  return 0LL;
}
