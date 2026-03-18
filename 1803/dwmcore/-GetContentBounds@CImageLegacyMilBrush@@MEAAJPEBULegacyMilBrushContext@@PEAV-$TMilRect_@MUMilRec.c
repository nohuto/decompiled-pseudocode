/*
 * XREFs of ?GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B2BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetContentToViewboxScale@CImageLegacyMilBrush@@MEBAJPEAM0@Z @ 0x1801B2C60 (-GetContentToViewboxScale@CImageLegacyMilBrush@@MEBAJPEAM0@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::GetContentBounds(CImageLegacyMilBrush *this, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int ContentToViewboxScale; // eax
  float v8; // xmm1_4
  float v10; // [rsp+40h] [rbp+8h] BYREF
  float v11; // [rsp+48h] [rbp+10h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 66) + 8LL) + 120LL))(
         *((_QWORD *)this + 66) + 8LL,
         *(_QWORD *)(a2 + 200),
         0LL,
         a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x132u);
  }
  else
  {
    ContentToViewboxScale = CImageLegacyMilBrush::GetContentToViewboxScale(this, &v10, &v11);
    v6 = ContentToViewboxScale;
    if ( ContentToViewboxScale < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ContentToViewboxScale, 0x134u);
    }
    else
    {
      v8 = v11 * *(float *)(a3 + 12);
      *(float *)(a3 + 8) = v10 * *(float *)(a3 + 8);
      *(float *)(a3 + 12) = v8;
    }
  }
  return v6;
}
