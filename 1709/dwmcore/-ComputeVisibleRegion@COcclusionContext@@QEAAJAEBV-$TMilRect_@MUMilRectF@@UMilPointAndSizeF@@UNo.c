/*
 * XREFs of ?ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18011D528
 * Callers:
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18013C090 (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::ComputeVisibleRegion(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  char v8; // al
  char v9; // dl
  char v10; // dl
  signed int v11; // eax
  unsigned int v12; // ebx
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF

  v7 = *a2;
  v8 = *(_BYTE *)(a1 + 885);
  v9 = (char)(4 * v8) >> 6;
  v14 = v7;
  if ( v9 )
  {
    LOBYTE(a4) = v9 == 1;
  }
  else
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 820)) & _xmm) >= 0.000081380211
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 832)) & _xmm) >= 0.000081380211
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 840)) & _xmm) >= 0.000081380211
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 848)) & _xmm) >= 0.000081380211
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 880) - 1.0)) & _xmm) >= 0.000081380211 )
    {
      LOBYTE(a4) = 0;
      v10 = 48;
    }
    else
    {
      LOBYTE(a4) = 1;
      v10 = 16;
    }
    *(_BYTE *)(a1 + 885) = v10 | v8 & 0xCF;
    if ( (_BYTE)a4 )
      *(_BYTE *)(a1 + 884) |= 0x3Fu;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 392) + 64LL))(
          *(_QWORD *)(a1 + 392),
          &v14,
          a3,
          a4,
          a5,
          a6,
          a7);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x380u);
  return v12;
}
