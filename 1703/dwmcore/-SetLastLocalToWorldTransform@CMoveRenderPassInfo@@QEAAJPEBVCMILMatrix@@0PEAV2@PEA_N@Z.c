/*
 * XREFs of ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z @ 0x1800D0F4C
 * Callers:
 *     ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800D12A0 (-ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x180161168 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x180099DE0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMoveRenderPassInfo::SetLastLocalToWorldTransform(
        CMoveRenderPassInfo *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        struct CMILMatrix *a4,
        bool *a5)
{
  unsigned int v5; // r12d
  __int64 v6; // rsi
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  const struct CMILMatrix *v23; // rdx
  float v24; // xmm1_4
  bool v25; // zf
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  _DWORD *v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  _OWORD v35[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v36; // [rsp+78h] [rbp-90h]
  _OWORD v37[4]; // [rsp+88h] [rbp-80h] BYREF
  int v38; // [rsp+C8h] [rbp-40h]
  __m128 v39[3]; // [rsp+D8h] [rbp-30h] BYREF
  float v40; // [rsp+108h] [rbp+0h]
  float v41; // [rsp+10Ch] [rbp+4h]
  int v42; // [rsp+118h] [rbp+10h]

  v5 = 0;
  v6 = 0LL;
  v11 = *(_QWORD *)(*((_QWORD *)this + 8) + 32LL);
  if ( *(_DWORD *)(v11 + 80) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 56) + 8 * v6);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 264LL))(v12) )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v11 + 80) )
        goto LABEL_4;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 56) + 8 * v6);
  }
  else
  {
LABEL_4:
    v13 = 0LL;
  }
  if ( a4 )
  {
    v14 = *((_QWORD *)this + 5);
    if ( v14 )
    {
      *(_OWORD *)a4 = *(_OWORD *)v14;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(v14 + 16);
      *((_OWORD *)a4 + 2) = *(_OWORD *)(v14 + 32);
      *((_OWORD *)a4 + 3) = *(_OWORD *)(v14 + 48);
      *((_DWORD *)a4 + 16) = *(_DWORD *)(v14 + 64);
    }
  }
  if ( a5 )
    *a5 = 0;
  if ( v13 && a2 && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)a2) )
  {
    v15 = *((_QWORD *)this + 5);
    if ( v15 )
    {
      v16 = *((_OWORD *)a2 + 1);
      v17 = *((_DWORD *)a2 + 16);
      v37[0] = *(_OWORD *)a2;
      v18 = *((_OWORD *)a2 + 2);
      v37[1] = v16;
      v19 = *((_OWORD *)a2 + 3);
      v37[2] = v18;
      v37[3] = v19;
      v38 = v17;
      v20 = *(_DWORD *)(v15 + 64);
      v42 = 0;
      v36 = v20;
      v21 = *(_OWORD *)(v15 + 16);
      v35[0] = *(_OWORD *)v15;
      v35[1] = v21;
      v22 = *(_OWORD *)(v15 + 48);
      v35[2] = *(_OWORD *)(v15 + 32);
      v35[3] = v22;
      if ( a3 )
        CMILMatrix::Multiply((CMILMatrix *)v37, a3);
      v23 = (const struct CMILMatrix *)*((_QWORD *)this + 6);
      if ( v23 )
        CMILMatrix::Multiply((CMILMatrix *)v35, v23);
      CMILMatrix::SetToInverse(v39, (const struct CMILMatrix *)v35);
      CMILMatrix::Multiply((CMILMatrix *)v39, (const struct CMILMatrix *)v37);
      if ( (unsigned __int8)CMILMatrix::IsTranslate<1>((__int64)v39) )
      {
        v24 = v40;
        v25 = v40 == 0.0;
        v26 = v41;
        *((float *)this + 14) = v40;
        *((float *)this + 15) = v26;
        if ( !v25 || v26 != 0.0 )
        {
          v27 = v24 + 6291456.25;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v27) << 10) >> 11) - v24)) & _xmm) <= 0.00390625 )
          {
            v28 = v26 + 6291456.25;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)(LODWORD(v28) << 10) >> 11) - v26)) & _xmm) <= 0.00390625 )
            {
              if ( a5 )
                *a5 = 1;
            }
          }
        }
      }
    }
    if ( *((_QWORD *)this + 5)
      || ((v29 = operator new(0x44uLL)) == 0LL ? (v29 = 0LL) : (_DWORD *)(v29[16] = 0),
          (*((_QWORD *)this + 5) = v29) != 0LL) )
    {
      if ( !a3 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 6));
        *((_QWORD *)this + 6) = 0LL;
        goto LABEL_35;
      }
      if ( *((_QWORD *)this + 6)
        || ((v30 = operator new(0x44uLL)) == 0LL ? (v30 = 0LL) : (_DWORD *)(v30[16] = 0),
            (*((_QWORD *)this + 6) = v30) != 0LL) )
      {
        v31 = *((_QWORD *)this + 6);
        *(_OWORD *)v31 = *(_OWORD *)a3;
        *(_OWORD *)(v31 + 16) = *((_OWORD *)a3 + 1);
        *(_OWORD *)(v31 + 32) = *((_OWORD *)a3 + 2);
        *(_OWORD *)(v31 + 48) = *((_OWORD *)a3 + 3);
        *(_DWORD *)(v31 + 64) = *((_DWORD *)a3 + 16);
LABEL_35:
        v32 = *((_QWORD *)this + 5);
        *(_OWORD *)v32 = *(_OWORD *)a2;
        *(_OWORD *)(v32 + 16) = *((_OWORD *)a2 + 1);
        *(_OWORD *)(v32 + 32) = *((_OWORD *)a2 + 2);
        *(_OWORD *)(v32 + 48) = *((_OWORD *)a2 + 3);
        *(_DWORD *)(v32 + 64) = *((_DWORD *)a2 + 16);
        *((_QWORD *)this + 4) = *(_QWORD *)(*((_QWORD *)this + 8) + 400LL);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 224LL))(v13, *((_QWORD *)this + 9));
        goto LABEL_38;
      }
      v34 = 325;
    }
    else
    {
      v34 = 320;
    }
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v34);
    goto LABEL_44;
  }
  a2 = 0LL;
LABEL_38:
  if ( !a2 )
  {
LABEL_44:
    WPF::ProcessHeapImpl::Free(*((void **)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  return v5;
}
