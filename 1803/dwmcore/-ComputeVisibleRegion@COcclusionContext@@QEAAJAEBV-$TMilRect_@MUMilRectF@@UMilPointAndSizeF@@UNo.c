/*
 * XREFs of ?ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18013FFC8
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18013D2C4 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18015E874 (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::ComputeVisibleRegion(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  char v8; // dl
  char v9; // al
  int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  v7 = *a2;
  v8 = *(_BYTE *)(a1 + 885);
  v9 = (char)(4 * v8) >> 6;
  v13 = v7;
  if ( v9 )
  {
    LOBYTE(a4) = v9 == 1;
  }
  else
  {
    LOBYTE(a4) = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 820) - 0.0)) & _xmm) < 0.000081380211
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 832) - 0.0)) & _xmm) < 0.000081380211
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 840) - 0.0)) & _xmm) < 0.000081380211
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 848) - 0.0)) & _xmm) < 0.000081380211
              && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 880) - 1.0)) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 885) = v8 ^ (v8 ^ (-16 - 32 * a4)) & 0x30;
    if ( (_BYTE)a4 )
      *(_BYTE *)(a1 + 884) |= 0x3Fu;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 392)
                                                                                                  + 64LL))(
          *(_QWORD *)(a1 + 392),
          &v13,
          a3,
          a4,
          a5,
          a6,
          a7);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x38Au);
  return v11;
}
