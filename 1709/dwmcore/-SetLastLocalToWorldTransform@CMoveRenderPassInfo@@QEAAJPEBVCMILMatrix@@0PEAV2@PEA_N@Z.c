/*
 * XREFs of ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z @ 0x18014E3FC
 * Callers:
 *     ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18014E01C (-ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x180177FBC (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A560 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  __int128 v19; // xmm1
  int v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  const struct CMILMatrix *v26; // rdx
  _BYTE *v27; // r10
  float v28; // xmm1_4
  bool v29; // zf
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int v38; // [rsp+28h] [rbp-E0h]
  _OWORD v39[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v40; // [rsp+78h] [rbp-90h]
  _OWORD v41[4]; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+C8h] [rbp-40h]
  __m128 v43[3]; // [rsp+D8h] [rbp-30h] BYREF
  float v44; // [rsp+108h] [rbp+0h]
  float v45; // [rsp+10Ch] [rbp+4h]
  int v46; // [rsp+118h] [rbp+10h]
  unsigned int v47; // [rsp+178h] [rbp+70h]

  v47 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v11 = *(_QWORD *)(*((_QWORD *)this + 8) + 72LL);
  if ( *(_DWORD *)(v11 + 80) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 56) + 8 * v6);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 272LL))(v12) )
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
  if ( v5
    && a2
    && (CMILMatrix::Is2DAffine<1>((__int64)a2, 1)
     && (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 1)) & _xmm), v14 < 0.000081380211)
     && (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 4)) & _xmm), v15 < 0.000081380211)
     || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a2) & _xmm), v16 < 0.000081380211)
     && (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 5)) & _xmm), v17 < 0.000081380211)) )
  {
    v18 = *((_QWORD *)this + 5);
    if ( v18 )
    {
      v19 = *((_OWORD *)a2 + 1);
      v20 = *((_DWORD *)a2 + 16);
      v41[0] = *(_OWORD *)a2;
      v21 = *((_OWORD *)a2 + 2);
      v41[1] = v19;
      v22 = *((_OWORD *)a2 + 3);
      v41[2] = v21;
      v41[3] = v22;
      v42 = v20;
      v23 = *(_DWORD *)(v18 + 64);
      v46 = 0;
      v40 = v23;
      v24 = *(_OWORD *)(v18 + 16);
      v39[0] = *(_OWORD *)v18;
      v39[1] = v24;
      v25 = *(_OWORD *)(v18 + 48);
      v39[2] = *(_OWORD *)(v18 + 32);
      v39[3] = v25;
      if ( a3 )
        CMILMatrix::Multiply((CMILMatrix *)v41, a3);
      v26 = (const struct CMILMatrix *)*((_QWORD *)this + 6);
      if ( v26 )
        CMILMatrix::Multiply((CMILMatrix *)v39, v26);
      CMILMatrix::SetToInverse(v43, (const struct CMILMatrix *)v39);
      CMILMatrix::Multiply((CMILMatrix *)v43, (const struct CMILMatrix *)v41);
      if ( CMILMatrix::IsTranslate<1>((__int64)v43) )
      {
        v28 = v44;
        v29 = v44 == 0.0;
        v30 = v45;
        *((float *)this + 14) = v44;
        *((float *)this + 15) = v30;
        if ( !v29 || v30 != 0.0 )
        {
          v31 = v28 + 6291456.25;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v31) << 10) >> 11) - v28)) & _xmm) <= 0.00390625 )
          {
            v32 = v30 + 6291456.25;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v32) << 10) >> 11) - v30)) & _xmm) <= 0.00390625 )
            {
              if ( v27 )
                *v27 = 1;
            }
          }
        }
      }
    }
    if ( !*((_QWORD *)this + 5) )
    {
      v33 = operator new(0x44uLL);
      if ( v33 )
        v33[16] = 0;
      else
        v33 = 0LL;
      *((_QWORD *)this + 5) = v33;
      if ( !v33 )
      {
        v38 = 320;
LABEL_36:
        v47 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, v38);
LABEL_49:
        WPF::ProcessHeapImpl::Free(*((void **)this + 5));
        *((_QWORD *)this + 5) = 0LL;
        return v47;
      }
    }
    if ( a3 )
    {
      if ( !*((_QWORD *)this + 6) )
      {
        v34 = operator new(0x44uLL);
        if ( v34 )
          v34[16] = 0;
        else
          v34 = 0LL;
        *((_QWORD *)this + 6) = v34;
        if ( !v34 )
        {
          v38 = 325;
          goto LABEL_36;
        }
      }
      v35 = *((_QWORD *)this + 6);
      *(_OWORD *)v35 = *(_OWORD *)a3;
      *(_OWORD *)(v35 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v35 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v35 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v35 + 64) = *((_DWORD *)a3 + 16);
    }
    else
    {
      WPF::ProcessHeapImpl::Free(*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
    }
    v36 = *((_QWORD *)this + 5);
    *(_OWORD *)v36 = *(_OWORD *)a2;
    *(_OWORD *)(v36 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v36 + 32) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v36 + 48) = *((_OWORD *)a2 + 3);
    *(_DWORD *)(v36 + 64) = *((_DWORD *)a2 + 16);
    *((_QWORD *)this + 4) = *(_QWORD *)(*((_QWORD *)this + 8) + 360LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 232LL))(v5, *((_QWORD *)this + 9));
  }
  else
  {
    a2 = 0LL;
  }
  if ( !a2 )
    goto LABEL_49;
  return v47;
}
