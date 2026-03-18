/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C50
 * Callers:
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007240 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800807D8 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800171F8 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x1800455E0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800457D0 (-GetRotation@CDxHandleBitmapRealization@@UEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3958 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A5D80 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800A5FB0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801C6F6C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1801C73BC (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int128 *a3)
{
  CDxHandleBitmapRealization *v5; // rbx
  float v6; // xmm6_4
  int v7; // eax
  int v8; // edx
  int v9; // r9d
  int v10; // r10d
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm1_4
  float v16; // xmm8_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  bool v26; // cc
  float v27; // xmm8_4
  float v28; // xmm7_4
  __int64 (__fastcall *v29)(CDxHandleBitmapRealization *); // rax
  enum DXGI_MODE_ROTATION v30; // eax
  bool v31; // al
  int v32; // xmm1_4
  unsigned int v33; // xmm0_4
  unsigned int v34; // xmm0_4
  __int128 v35; // xmm1
  int v36; // eax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  void (__fastcall *v40)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *); // rax
  CMILMatrix *v41; // rcx
  float v42; // xmm2_4
  CMILMatrix *v43; // rcx
  float v44; // xmm1_4
  _OWORD *v45; // rax
  __int128 v46; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v47; // [rsp+38h] [rbp-D0h]
  __int128 v48; // [rsp+48h] [rbp-C0h]
  __int128 v49; // [rsp+58h] [rbp-B0h]
  int v50; // [rsp+68h] [rbp-A0h]
  unsigned int v51; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v52; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v53; // [rsp+80h] [rbp-88h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-48h]

  v54 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_WORD *)(a2 + 64) = 32085;
  v50 = 0;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( *(_QWORD *)(a1 + 248) )
  {
    v5 = (CDxHandleBitmapRealization *)(a1 - 144);
    v6 = 0.0;
    if ( *(int *)(a1 + 128) < 2
      || (v7 = *((_DWORD *)v5 + 52), v8 = *((_DWORD *)v5 + 50), v7 <= v8)
      || (v9 = *((_DWORD *)v5 + 53), v10 = *((_DWORD *)v5 + 51), v9 <= v10) )
    {
      v40 = *(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *))(*(_QWORD *)a1 + 32LL);
      if ( v40 == CDxHandleBitmapRealization::GetSize )
        CDxHandleBitmapRealization::GetSize((CDxHandleBitmapRealization *)a1, &v51, &v52);
      else
        v40((CDxHandleBitmapRealization *)a1, &v51, &v52);
      *(_QWORD *)&v54 = 0LL;
      v14 = 0.0;
      v16 = (float)(int)v51;
      v20 = (float)(int)v52;
      *((float *)&v54 + 2) = (float)(int)v51;
      *((float *)&v54 + 3) = (float)(int)v52;
    }
    else
    {
      v11 = *(float *)(a2 + 12);
      v12 = *(float *)(a2 + 28);
      v13 = v11;
      v6 = (float)v8;
      *(_BYTE *)(a2 + 64) = 84;
      v14 = (float)v10;
      v15 = (float)(v11 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v10) ^ _xmm)) + *(float *)(a2 + 4);
      v16 = (float)v7;
      *(float *)a2 = (float)(v13 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v8) ^ _xmm)) + *(float *)a2;
      v17 = (float)(v12 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v8) ^ _xmm)) + *(float *)(a2 + 16);
      *(float *)(a2 + 4) = v15;
      v18 = (float)(v12 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v10) ^ _xmm)) + *(float *)(a2 + 20);
      v19 = *(float *)(a2 + 44);
      v20 = (float)v9;
      *(float *)(a2 + 16) = v17;
      *(float *)(a2 + 20) = v18;
      v21 = *(float *)(a2 + 60);
      v22 = (float)(v19 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v8) ^ _xmm)) + *(float *)(a2 + 32);
      *(float *)&v54 = (float)v8;
      *((float *)&v54 + 1) = (float)v10;
      v23 = (float)(v19 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v10) ^ _xmm)) + *(float *)(a2 + 36);
      *(float *)(a2 + 32) = v22;
      v24 = (float)(v21 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v8) ^ _xmm)) + *(float *)(a2 + 48);
      *((float *)&v54 + 2) = (float)v7;
      v25 = (float)(v21 * COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v10) ^ _xmm)) + *(float *)(a2 + 52);
      *((float *)&v54 + 3) = (float)v9;
      *(float *)(a2 + 36) = v23;
      *(float *)(a2 + 48) = v24;
      *(float *)(a2 + 52) = v25;
    }
    v26 = *((_DWORD *)v5 + 68) < 2;
    v27 = v16 - v6;
    v28 = v20 - v14;
    v46 = _xmm;
    v47 = _xmm;
    v48 = _xmm;
    v49 = _xmm;
    LOWORD(v50) = 32085;
    if ( !v26 )
    {
      v29 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v5 + 72LL);
      v30 = v29 == CDxHandleBitmapRealization::GetRotation
          ? (unsigned int)CDxHandleBitmapRealization::GetRotation(v5)
          : (unsigned int)v29(v5);
      if ( v30 != DXGI_MODE_ROTATION_IDENTITY )
      {
        CMILMatrix::SetToRotation((CMILMatrix *)&v46, v27, v28, v30);
        CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)&v46);
      }
    }
    v31 = 0;
    v26 = *((_DWORD *)v5 + 68) < 2;
    v46 = _xmm;
    v47 = _xmm;
    v48 = _xmm;
    v49 = _xmm;
    LOWORD(v50) = 32085;
    if ( !v26 )
    {
      v32 = *((_DWORD *)v5 + 56);
      LODWORD(v46) = *((_DWORD *)v5 + 55);
      v33 = *((_DWORD *)v5 + 57);
      DWORD1(v46) = v32;
      v47 = __PAIR64__(*((_DWORD *)v5 + 58), v33);
      LODWORD(v49) = *((_DWORD *)v5 + 59);
      v48 = _xmm;
      v34 = *((_DWORD *)v5 + 60);
      v50 = 0x4000;
      *(_QWORD *)((char *)&v49 + 4) = v34;
      *((float *)&v49 + 3) = FLOAT_1_0;
      *((_QWORD *)&v46 + 1) = 0LL;
      v31 = (unsigned __int8)CMILMatrix::IsIdentity<0>(&v46) == 0;
    }
    if ( v31 )
    {
      if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(a2) )
      {
        v35 = v47;
        v36 = v50;
        *(_OWORD *)a2 = v46;
        v37 = v48;
        *(_OWORD *)(a2 + 16) = v35;
        v38 = v49;
        *(_OWORD *)(a2 + 32) = v37;
        *(_OWORD *)(a2 + 48) = v38;
        *(_DWORD *)(a2 + 64) = v36;
        goto LABEL_16;
      }
      CMILMatrix::Ensure3DFlags((CMILMatrix *)&v46);
      if ( (v50 & 3) != 1 )
      {
        if ( (v50 & 0xC) == 4 )
        {
          v41 = (CMILMatrix *)a2;
LABEL_32:
          CMILMatrix::Translate(v41, *(float *)&v49, *((float *)&v49 + 1), *((float *)&v49 + 2));
          goto LABEL_16;
        }
        if ( (v50 & 0xC0) == 0x40 )
        {
          v42 = *((float *)&v47 + 1);
          v43 = (CMILMatrix *)a2;
          v44 = *(float *)&v46;
LABEL_31:
          CMILMatrix::Scale(v43, v44, v42, *((float *)&v48 + 2));
          goto LABEL_32;
        }
        if ( (BYTE1(v50) & 0xC) == 4 )
        {
          CMILMatrix::Rotate90((CMILMatrix *)a2);
          LODWORD(v44) = v47 ^ _xmm;
          v42 = *((float *)&v46 + 1);
          goto LABEL_31;
        }
        v45 = Windows::Foundation::Numerics::operator*((__int64)&v53, (__int128 *)a2, &v46);
        *(_OWORD *)a2 = *v45;
        *(_OWORD *)(a2 + 16) = v45[1];
        *(_OWORD *)(a2 + 32) = v45[2];
        *(_OWORD *)(a2 + 48) = v45[3];
        *(_DWORD *)(a2 + 64) = 0;
      }
    }
  }
LABEL_16:
  if ( a3 )
    *a3 = v54;
  return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
}
