/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@W4Enum@Orientation@@@Z @ 0x18014AB98
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014A5BC (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18006B1E4 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x18014AA64 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x18014AAD8 (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::SetClipPoints(__int64 a1, unsigned int *a2, __int64 a3, int *a4, __int128 *a5)
{
  unsigned int *v6; // rdi
  __int64 v8; // rax
  unsigned int v9; // xmm2_4
  unsigned int v10; // xmm3_4
  unsigned int v11; // r13d
  int *v12; // r12
  unsigned int v13; // r15d
  unsigned int v14; // edx
  unsigned int v15; // r11d
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // ecx
  unsigned int v19; // eax
  signed int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  signed int v23; // eax
  unsigned int i; // edi
  float *v25; // rax
  __int64 v26; // rdx
  struct MilPoint2F **v27; // r14
  float *v28; // rcx
  float v29; // xmm3_4
  float v30; // xmm4_4
  unsigned int v31; // ecx
  float v32; // xmm2_4
  float v33; // xmm0_4
  unsigned int v34; // edi
  _DWORD *v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // rdi
  unsigned int v40; // esi
  __int64 v41; // rax
  _BYTE *v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // edi
  unsigned int v45; // r8d
  __int64 v46; // rcx
  unsigned int v47; // eax
  signed int v48; // eax
  int v49; // r9d
  struct MilPoint2F *v50; // r8
  const struct MilPoint2F *v51; // rdx
  int v52; // xmm1_4
  __int64 v54; // [rsp+30h] [rbp-48h] BYREF
  int v55; // [rsp+38h] [rbp-40h] BYREF
  __int64 v56; // [rsp+40h] [rbp-38h]
  __int64 v57; // [rsp+48h] [rbp-30h]
  __int128 v58; // [rsp+50h] [rbp-28h] BYREF
  int v59; // [rsp+60h] [rbp-18h]
  int v60; // [rsp+64h] [rbp-14h]

  v6 = a2;
  if ( (unsigned int)a3 < 3 )
    return 0LL;
  v8 = (unsigned int)(a3 - 1);
  v9 = a2[2 * v8];
  v10 = a2[2 * v8 + 1];
  if ( a4 )
    v55 = a4[v8];
  else
    v55 = 0;
  v11 = v54;
  v12 = a4;
  v13 = v54;
  a3 = (unsigned int)a3;
  v56 = (unsigned int)a3;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a1 + 48);
    v15 = v13;
    v16 = *v6;
    v17 = v6[1];
    LODWORD(v57) = *v6;
    v18 = v14 + 1;
    HIDWORD(v57) = v17;
    *(_QWORD *)&v58 = __PAIR64__(v10, v9);
    v19 = v14 + 1;
    if ( v14 + 1 < v14 )
      v19 = v11;
    *((_QWORD *)&v58 + 1) = __PAIR64__(v17, v16);
    v11 = v19;
    if ( v18 < v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18 < v14 ? 0x80070216 : 0, 0xB5u);
    }
    else
    {
      if ( v19 <= *(_DWORD *)(a1 + 44) )
      {
        *(_OWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v14) = v58;
        *(_DWORD *)(a1 + 48) = v19;
        goto LABEL_15;
      }
      v20 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 24, 0x10u, 1, &v58);
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xC0u);
    }
    a3 = v56;
    v15 = v13;
LABEL_15:
    if ( a4 )
    {
      v21 = *(_DWORD *)(a1 + 80);
      v22 = v21 + 1;
      v13 = v21 + 1;
      if ( v21 + 1 < v21 )
        v13 = v15;
      if ( v22 < v21 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22 < v21 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v13 > *(_DWORD *)(a1 + 76) )
      {
        v23 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 56, 4u, 1, &v55);
        if ( v23 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * v21) = v55;
        *(_DWORD *)(a1 + 80) = v13;
      }
      a3 = v56;
      v55 = *v12;
    }
    v6 += 2;
    ++v12;
    v54 = v57;
    v56 = --a3;
    if ( !a3 )
      break;
    v10 = HIDWORD(v54);
    v9 = v54;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
  {
    v25 = (float *)(*(_QWORD *)(a1 + 24) + 16LL * i);
    if ( (float)((float)((float)(v25[3] - v25[1]) * (float)(v25[3] - v25[1]))
               + (float)((float)(v25[2] - *v25) * (float)(v25[2] - *v25))) <= 1.0e-12 )
    {
      DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)(a1 + 24), i);
      if ( a4 )
        DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)(a1 + 56), i);
      --i;
    }
  }
  v26 = *(unsigned int *)(a1 + 48);
  if ( (unsigned int)v26 >= 3 )
  {
    v27 = (struct MilPoint2F **)(a1 + 24);
    v28 = (float *)(*(_QWORD *)(a1 + 24) + 16LL * (unsigned int)(v26 - 1));
    v29 = v28[2] - *v28;
    v30 = v28[3] - v28[1];
    v31 = 0;
    do
    {
      v32 = (float)((float)(*((float *)*v27 + 4 * v31 + 3) - *((float *)*v27 + 4 * v31 + 1)) * v29)
          - (float)(v30 * (float)(*((float *)*v27 + 4 * v31 + 2) - *((float *)*v27 + 4 * v31)));
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & _xmm) > 0.000001 )
        break;
      ++v31;
    }
    while ( v31 < (unsigned int)v26 );
    if ( v32 <= 0.0 )
      v33 = FLOAT_1_0;
    else
      v33 = FLOAT_N1_0;
    v34 = 0;
    *(float *)(a1 + 16) = v33;
    if ( a4 )
    {
      v35 = *(_DWORD **)(a1 + 56);
      v36 = v26;
      do
      {
        v37 = v34 + 1;
        if ( (*v35 & 1) == 0 )
          v37 = v34;
        ++v35;
        v34 = v37;
        --v36;
      }
      while ( v36 );
    }
    v38 = v26 - v34;
    if ( v34 )
    {
      if ( v38 )
      {
        if ( v38 > 4 )
        {
          if ( v34 >= 2 )
          {
            v40 = 1;
            do
            {
              v41 = *(_QWORD *)(a1 + 56);
              if ( (*(_BYTE *)(v41 + 4LL * v40) & 1) != 0 && (*(_BYTE *)(v41 + 4LL * (v40 - 1)) & 1) != 0 )
              {
                *((_QWORD *)*v27 + 2 * v40 - 1) = *((_QWORD *)*v27 + 2 * v40 + 1);
                DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)(a1 + 24), v40);
                DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)(a1 + 56), v40);
                --v34;
                --v40;
              }
              ++v40;
            }
            while ( v40 < *(_DWORD *)(a1 + 48) );
            if ( v34 >= 2 )
            {
              v42 = *(_BYTE **)(a1 + 56);
              if ( (*v42 & 1) != 0 && (v42[4 * (*(_DWORD *)(a1 + 80) - 1)] & 1) != 0 )
              {
                *((_QWORD *)*v27 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * (unsigned int)--*(_DWORD *)(a1 + 48));
                --*(_DWORD *)(a1 + 80);
              }
            }
          }
          v43 = 0LL;
          LODWORD(v54) = 0;
          if ( *(_DWORD *)(a1 + 48) )
          {
            v44 = v54;
            do
            {
              v45 = v44;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 4 * v43) & 1) != 0 )
              {
                v46 = *(unsigned int *)(a1 + 112);
                v47 = v46 + 1;
                v44 = v46 + 1;
                if ( (int)v46 + 1 < (unsigned int)v46 )
                  v44 = v45;
                if ( v47 < (unsigned int)v46 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v47 < (unsigned int)v46 ? 0x80070216 : 0, 0xB5u);
                }
                else if ( v44 > *(_DWORD *)(a1 + 108) )
                {
                  v48 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 88, 4u, 1, &v54);
                  if ( v48 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v48, 0xC0u);
                }
                else
                {
                  *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v46) = v43;
                  *(_DWORD *)(a1 + 112) = v44;
                }
                LODWORD(v43) = v54;
              }
              v43 = (unsigned int)(v43 + 1);
              LODWORD(v54) = v43;
            }
            while ( (unsigned int)v43 < *(_DWORD *)(a1 + 48) );
          }
        }
        else
        {
          v39 = 0LL;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 4 * v39) & 1) != 0 )
            {
              DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((__int64 *)(a1 + 24), v39);
              DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((__int64 *)(a1 + 56), v39);
              LODWORD(v39) = v39 - 1;
            }
            v39 = (unsigned int)(v39 + 1);
          }
          while ( (unsigned int)v39 < *(_DWORD *)(a1 + 48) );
        }
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 80) = 0;
      }
    }
    v49 = *(_DWORD *)(a1 + 48);
    if ( v49 )
    {
      v50 = *v27;
      v51 = *v27;
      v52 = *((_DWORD *)a5 + 5);
      v58 = *a5;
      v59 = *((_DWORD *)a5 + 4);
      v60 = v52;
      MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v58, v51, v50, 2 * v49);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 0;
  }
  return 0LL;
}
