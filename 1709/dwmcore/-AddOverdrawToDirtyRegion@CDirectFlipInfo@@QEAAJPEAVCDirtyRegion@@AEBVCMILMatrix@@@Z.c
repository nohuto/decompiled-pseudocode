/*
 * XREFs of ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x180148E9C
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180017DC0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180034434 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180149730 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::AddOverdrawToDirtyRegion(
        CDirectFlipInfo *this,
        struct CDirtyRegion *a2,
        const struct CMILMatrix *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  __int64 i; // rax
  signed int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  _DWORD v10[4]; // [rsp+30h] [rbp-69h]
  _BYTE v11[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-51h]
  _DWORD *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  int v15; // [rsp+60h] [rbp-39h]
  __m128 v16[4]; // [rsp+70h] [rbp-29h] BYREF
  int v17; // [rsp+B0h] [rbp+17h]
  _DWORD v18[4]; // [rsp+C0h] [rbp+27h] BYREF
  __m128 v19; // [rsp+D0h] [rbp+37h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 15) == 2 || *((_DWORD *)this + 15) == 3 && CDirectFlipInfo::RenderingRealizationChanged(this))
    && *((_QWORD *)this + 6) )
  {
    v17 = 0;
    CMILMatrix::SetToInverse(v16, a3);
    FastRegion::Internal::CRgnData::BeginIterator(
      *(FastRegion::Internal::CRgnData **)(v5 + 16),
      (struct FastRegion::CRegion::Iterator *)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      v10[1] = *v13;
      v10[3] = v13[2];
      v10[0] = *(_DWORD *)(v14 + 8LL * v15);
      v10[2] = *(_DWORD *)(v14 + 4LL * (2 * v15 + 1));
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v18[i] = (float)(int)v10[i];
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v16, (__int64)v18, v19.m128_f32);
      v7 = CDirtyRegion::Add(a2, 0LL, 0, &v19);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x249u);
        return v3;
      }
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  return v3;
}
