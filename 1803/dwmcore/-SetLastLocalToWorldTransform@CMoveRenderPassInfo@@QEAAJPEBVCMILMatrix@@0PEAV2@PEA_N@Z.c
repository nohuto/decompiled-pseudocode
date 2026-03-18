/*
 * XREFs of ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z @ 0x180177CAC
 * Callers:
 *     ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1801778B0 (-ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x1801A8D98 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A5AA0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMoveRenderPassInfo::SetLastLocalToWorldTransform(
        CMoveRenderPassInfo *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        struct CMILMatrix *a4,
        bool *a5)
{
  __int64 v5; // r12
  __int64 v6; // r14
  const struct CMILMatrix *v9; // rsi
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  const struct CMILMatrix *v22; // rdx
  float v23; // xmm1_4
  bool v24; // zf
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  _DWORD *v28; // rax
  _DWORD *v29; // rax
  _OWORD *v30; // rcx
  __int64 v31; // rdx
  unsigned int v33; // [rsp+20h] [rbp-E0h]
  _OWORD v34[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+70h] [rbp-90h]
  _OWORD v36[4]; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+C0h] [rbp-40h]
  __m128 v38[3]; // [rsp+D0h] [rbp-30h] BYREF
  float v39; // [rsp+100h] [rbp+0h]
  float v40; // [rsp+104h] [rbp+4h]
  int v41; // [rsp+110h] [rbp+10h]
  unsigned int v42; // [rsp+160h] [rbp+60h]

  v5 = 0LL;
  v42 = 0;
  v6 = 0LL;
  v9 = a2;
  v11 = *(_QWORD *)(*((_QWORD *)this + 8) + 72LL);
  if ( *(_DWORD *)(v11 + 80) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 56) + 8 * v6);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 264LL))(v12) )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v11 + 80) )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(v11 + 56) + 8 * v6);
  }
LABEL_6:
  if ( a4 )
  {
    v13 = *((_QWORD *)this + 5);
    if ( v13 )
    {
      *(_OWORD *)a4 = *(_OWORD *)v13;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(v13 + 16);
      *((_OWORD *)a4 + 2) = *(_OWORD *)(v13 + 32);
      *((_OWORD *)a4 + 3) = *(_OWORD *)(v13 + 48);
      *((_DWORD *)a4 + 16) = *(_DWORD *)(v13 + 64);
    }
  }
  if ( a5 )
    *a5 = 0;
  if ( v5 && v9 && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v9, (__int64)a2) )
  {
    v14 = *((_QWORD *)this + 5);
    if ( v14 )
    {
      v15 = *((_OWORD *)v9 + 1);
      v16 = *((_DWORD *)v9 + 16);
      v36[0] = *(_OWORD *)v9;
      v17 = *((_OWORD *)v9 + 2);
      v36[1] = v15;
      v18 = *((_OWORD *)v9 + 3);
      v36[2] = v17;
      v36[3] = v18;
      v37 = v16;
      v19 = *(_DWORD *)(v14 + 64);
      v41 = 0;
      v35 = v19;
      v20 = *(_OWORD *)(v14 + 16);
      v34[0] = *(_OWORD *)v14;
      v34[1] = v20;
      v21 = *(_OWORD *)(v14 + 48);
      v34[2] = *(_OWORD *)(v14 + 32);
      v34[3] = v21;
      if ( a3 )
        CMILMatrix::Multiply((CMILMatrix *)v36, a3);
      v22 = (const struct CMILMatrix *)*((_QWORD *)this + 6);
      if ( v22 )
        CMILMatrix::Multiply((CMILMatrix *)v34, v22);
      CMILMatrix::SetToInverse(v38, (const struct CMILMatrix *)v34);
      CMILMatrix::Multiply((CMILMatrix *)v38, (const struct CMILMatrix *)v36);
      if ( CMILMatrix::IsTranslate<1>((__int64)v38) )
      {
        v23 = v39;
        v24 = v39 == 0.0;
        v25 = v40;
        *((float *)this + 14) = v39;
        *((float *)this + 15) = v25;
        if ( !v24 || v25 != 0.0 )
        {
          v26 = v23 + 6291456.25;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v26) << 10) >> 11) - v23)) & _xmm) <= 0.00390625 )
          {
            v27 = v25 + 6291456.25;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v27) << 10) >> 11) - v25)) & _xmm) <= 0.00390625 )
            {
              if ( a5 )
                *a5 = 1;
            }
          }
        }
      }
    }
    if ( !*((_QWORD *)this + 5) )
    {
      v28 = operator new(0x44uLL);
      if ( v28 )
        v28[16] = 0;
      else
        v28 = 0LL;
      *((_QWORD *)this + 5) = v28;
      if ( !v28 )
      {
        v33 = 320;
LABEL_32:
        v42 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v33);
LABEL_46:
        operator delete(*((void **)this + 5));
        *((_QWORD *)this + 5) = 0LL;
        return v42;
      }
    }
    if ( a3 && !*((_QWORD *)this + 6) )
    {
      v29 = operator new(0x44uLL);
      if ( v29 )
        v29[16] = 0;
      else
        v29 = 0LL;
      *((_QWORD *)this + 6) = v29;
      if ( !v29 )
      {
        v33 = 325;
        goto LABEL_32;
      }
    }
    v30 = (_OWORD *)*((_QWORD *)this + 6);
    if ( a3 )
    {
      *v30 = *(_OWORD *)a3;
      v30[1] = *((_OWORD *)a3 + 1);
      v30[2] = *((_OWORD *)a3 + 2);
      v30[3] = *((_OWORD *)a3 + 3);
      *((_DWORD *)v30 + 16) = *((_DWORD *)a3 + 16);
    }
    else
    {
      operator delete(v30);
      *((_QWORD *)this + 6) = 0LL;
    }
    v31 = *((_QWORD *)this + 5);
    *(_OWORD *)v31 = *(_OWORD *)v9;
    *(_OWORD *)(v31 + 16) = *((_OWORD *)v9 + 1);
    *(_OWORD *)(v31 + 32) = *((_OWORD *)v9 + 2);
    *(_OWORD *)(v31 + 48) = *((_OWORD *)v9 + 3);
    *(_DWORD *)(v31 + 64) = *((_DWORD *)v9 + 16);
    *((_QWORD *)this + 4) = *(_QWORD *)(*((_QWORD *)this + 8) + 384LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 232LL))(v5, *((_QWORD *)this + 9));
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_46;
  return v42;
}
