/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0
 * Callers:
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A7F0 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetContentLocalBoundsRect@CCompositionSurfaceBitmap@@UEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A980 (-GetContentLocalBoundsRect@CCompositionSurfaceBitmap@@UEAA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000AA10 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180076744 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x180079B40 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18007A100 (-GetRotation@CDxHandleBitmapRealization@@UEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180099FB0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18009A2A0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18009AB60 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1801861DC (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18018639C (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801863D0 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(
        CDxHandleBitmapRealization *this,
        CMILMatrix *a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  CDxHandleBitmapRealization *v6; // r9
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm5_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  bool v27; // cc
  float v28; // xmm7_4
  float v29; // xmm6_4
  enum DXGI_MODE_ROTATION (__fastcall *v30)(CDxHandleBitmapRealization *__hidden); // rax
  int v31; // eax
  int v32; // xmm1_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int128 v39; // xmm1
  int v40; // eax
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  void (__fastcall *v44)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *); // rax
  float v45; // xmm2_4
  float v46; // xmm1_4
  CMILMatrix *v47; // rcx
  float v48; // xmm2_4
  CMILMatrix *v49; // rcx
  float v50; // xmm1_4
  _OWORD *v51; // rax
  __int128 v52; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v53; // [rsp+38h] [rbp-D0h]
  __int128 v54; // [rsp+48h] [rbp-C0h]
  _BYTE v55[20]; // [rsp+58h] [rbp-B0h]
  unsigned int v56; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v57; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-48h]

  v3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_WORD *)a2 + 32) = 32085;
  v59 = v3;
  v6 = this;
  *(_DWORD *)&v55[16] = 0;
  *(_OWORD *)a2 = _xmm;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  if ( !*((_QWORD *)this + 38) )
    goto LABEL_14;
  v7 = (_DWORD *)((char *)this - 104);
  if ( *((int *)this + 34) < 2
    || (v8 = v7[44], v9 = v7[42], v8 <= v9)
    || (v10 = (unsigned int)v7[45], v11 = (unsigned int)v7[43], (int)v10 <= (int)v11) )
  {
    v44 = *(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *))(*((_QWORD *)v7 + 13)
                                                                                              + 24LL);
    if ( v44 == CDxHandleBitmapRealization::GetSize )
      CDxHandleBitmapRealization::GetSize(v6, &v56, &v57);
    else
      v44(v6, &v56, &v57);
    v15 = 0.0;
    v16 = 0.0;
    *(_QWORD *)&v59 = 0LL;
    v17 = (float)(int)v56;
    v22 = (float)(int)v57;
    *((float *)&v59 + 2) = (float)(int)v56;
    *((float *)&v59 + 3) = (float)(int)v57;
  }
  else
  {
    v12 = *((float *)a2 + 3);
    v13 = *((float *)a2 + 7);
    v14 = v12;
    v15 = (float)v9;
    *((_BYTE *)a2 + 64) = 84;
    v16 = (float)(int)v11;
    *(float *)&v59 = (float)v9;
    v17 = (float)v8;
    v18 = (float)(v12 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v11) ^ _xmm)) + *((float *)a2 + 1);
    *(float *)a2 = (float)(v14 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v9) ^ _xmm)) + *(float *)a2;
    v19 = (float)(v13 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v9) ^ _xmm)) + *((float *)a2 + 4);
    *((float *)a2 + 1) = v18;
    v20 = *((float *)a2 + 11);
    v21 = (float)(v13 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v11) ^ _xmm)) + *((float *)a2 + 5);
    v22 = (float)(int)v10;
    *((float *)a2 + 4) = v19;
    v23 = (float)(v20 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v9) ^ _xmm)) + *((float *)a2 + 8);
    v24 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v9) ^ _xmm) * *((float *)a2 + 15)) + *((float *)a2 + 12);
    v25 = (float)(v20 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v11) ^ _xmm)) + *((float *)a2 + 9);
    v26 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v11) ^ _xmm) * *((float *)a2 + 15)) + *((float *)a2 + 13);
    *((float *)&v59 + 1) = (float)(int)v11;
    *((float *)&v59 + 2) = (float)v8;
    *((float *)a2 + 12) = v24;
    *((float *)&v59 + 3) = (float)(int)v10;
    *((float *)a2 + 5) = v21;
    *((float *)a2 + 8) = v23;
    *((float *)a2 + 9) = v25;
    *((float *)a2 + 13) = v26;
  }
  v27 = v7[60] < 2;
  v28 = v22 - v16;
  v29 = v17 - v15;
  v52 = _xmm;
  v53 = _xmm;
  v54 = _xmm;
  *(_OWORD *)v55 = _xmm;
  *(_WORD *)&v55[16] = 32085;
  if ( !v27 )
  {
    v30 = *(enum DXGI_MODE_ROTATION (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)v7 + 96LL);
    v31 = v30 == CDxHandleBitmapRealization::GetRotation
        ? CDxHandleBitmapRealization::GetRotation((CDxHandleBitmapRealization *)v7)
        : ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, CDxHandleBitmapRealization *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v30)(
            v7,
            v10,
            v11,
            v6,
            v52,
            *((_QWORD *)&v52 + 1),
            v53,
            *((_QWORD *)&v53 + 1),
            v54,
            *((_QWORD *)&v54 + 1),
            *(_QWORD *)v55,
            *(_QWORD *)&v55[8],
            *(_DWORD *)&v55[16]);
    if ( v31 >= 2 )
    {
      switch ( v31 )
      {
        case 2:
          CMILMatrix::Rotate270((CMILMatrix *)&v52);
          v45 = v29;
          v46 = 0.0;
          break;
        case 3:
          CMILMatrix::Scale((CMILMatrix *)&v52, -1.0, -1.0, 1.0);
          v45 = v28;
          v46 = v29;
          break;
        case 4:
          CMILMatrix::Rotate90((CMILMatrix *)&v52);
          v45 = 0.0;
          v46 = v28;
          break;
        default:
          goto LABEL_10;
      }
      CMILMatrix::Translate((CMILMatrix *)&v52, v46, v45);
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)&v52);
    }
  }
LABEL_10:
  v27 = v7[60] < 2;
  v52 = _xmm;
  v53 = _xmm;
  v54 = _xmm;
  *(_OWORD *)v55 = _xmm;
  *(_WORD *)&v55[16] = 32085;
  if ( !v27 )
  {
    v32 = v7[48];
    LODWORD(v52) = v7[47];
    LODWORD(v53) = v7[49];
    DWORD1(v52) = v32;
    v33 = v7[50];
    v54 = _xmm;
    v34 = v7[52];
    DWORD1(v53) = v33;
    v35 = v7[51];
    *(_QWORD *)&v55[12] = 0x40003F800000LL;
    *(_DWORD *)&v55[4] = v34;
    *(_DWORD *)v55 = v35;
    *((_QWORD *)&v52 + 1) = 0LL;
    *((_QWORD *)&v53 + 1) = 0LL;
    *(_DWORD *)&v55[8] = 0;
    if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(&v52) )
    {
      if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(a2, v36, v37, v38) )
      {
        v39 = v53;
        v40 = *(_DWORD *)&v55[16];
        *(_OWORD *)a2 = v52;
        v41 = v54;
        *((_OWORD *)a2 + 1) = v39;
        v42 = *(_OWORD *)v55;
        *((_OWORD *)a2 + 2) = v41;
        *((_OWORD *)a2 + 3) = v42;
        *((_DWORD *)a2 + 16) = v40;
        goto LABEL_14;
      }
      CMILMatrix::Ensure3DFlags((CMILMatrix *)&v52);
      if ( (v55[16] & 3) != 1 )
      {
        if ( (v55[16] & 0xC) == 4 )
        {
          v47 = a2;
LABEL_37:
          CMILMatrix::Translate(v47, *(float *)v55, *(float *)&v55[4], *(float *)&v55[8]);
          goto LABEL_14;
        }
        if ( (v55[16] & 0xC0) == 0x40 )
        {
          v48 = *((float *)&v53 + 1);
          v49 = a2;
          v50 = *(float *)&v52;
LABEL_36:
          CMILMatrix::Scale(v49, v50, v48, *((float *)&v54 + 2));
          goto LABEL_37;
        }
        if ( (v55[17] & 0xC) == 4 )
        {
          CMILMatrix::Rotate90(a2);
          v48 = *((float *)&v52 + 1);
          LODWORD(v50) = v53 ^ _xmm;
          goto LABEL_36;
        }
        v51 = (_OWORD *)Windows::Foundation::Numerics::operator*(&v58, a2, &v52);
        *(_OWORD *)a2 = *v51;
        *((_OWORD *)a2 + 1) = v51[1];
        *((_OWORD *)a2 + 2) = v51[2];
        *((_OWORD *)a2 + 3) = v51[3];
        *((_DWORD *)a2 + 16) = 0;
      }
    }
  }
LABEL_14:
  if ( a3 )
    *a3 = v59;
  return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
}
