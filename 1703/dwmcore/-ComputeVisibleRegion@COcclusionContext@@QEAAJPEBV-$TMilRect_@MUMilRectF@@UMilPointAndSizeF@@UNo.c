/*
 * XREFs of ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18009EF08
 * Callers:
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x1800A781C (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18014ACC0 (-CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18006F3D0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18009B44C (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::ComputeVisibleRegion(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6,
        unsigned int *a7)
{
  __int64 v7; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, float *, int, char, _BYTE *, __int64, unsigned int *); // rax
  int v13; // eax
  unsigned int v14; // r14d
  char v16; // cl
  _OWORD *v17; // rax
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF

  v7 = 0LL;
  if ( *(_BYTE *)(a1 + 728) )
    COcclusionContext::DeviceRectToPageInPixelsRect(a1, a2, (float *)&v19);
  else
    v19 = *a2;
  v10 = (char)(4 * *(_BYTE *)(a1 + 797)) >> 6;
  if ( v10 )
  {
    LOBYTE(a4) = v10 == 1;
  }
  else
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 732)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 744)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 752)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 760)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 792) - 1.0)) & _xmm) >= 0.00012207031 )
    {
      LOBYTE(a4) = 0;
      v16 = 0;
    }
    else
    {
      LOBYTE(a4) = 1;
      v16 = 1;
    }
    *(_BYTE *)(a1 + 797) ^= (*(_BYTE *)(a1 + 797) ^ (-16 - 32 * v16)) & 0x30;
    if ( (_BYTE)a4 )
      *(_BYTE *)(a1 + 796) |= 0x3Fu;
  }
  v11 = *(_QWORD *)(a1 + 304);
  v12 = *(__int64 (__fastcall **)(__int64, float *, int, char, _BYTE *, __int64, unsigned int *))(*(_QWORD *)v11 + 56LL);
  if ( v12 == CArrayBasedCoverageSet::ComputeVisibleRegion )
    v13 = CArrayBasedCoverageSet::ComputeVisibleRegion(v11, (float *)&v19, a3, a4, a5, a6, a7);
  else
    v13 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64))v12)(v11, &v19, a3, a4);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x36Fu);
  }
  else if ( *(_BYTE *)(a1 + 728) && *a7 )
  {
    do
    {
      v18 = *(_OWORD *)*(_QWORD *)(a6 + 8 * v7);
      CMILMatrix::Transform2DBoundsHelper<0>(a1 + 732, (__int64)&v18, (float *)&v20);
      v17 = *(_OWORD **)(a6 + 8 * v7);
      v7 = (unsigned int)(v7 + 1);
      *v17 = v20;
    }
    while ( (unsigned int)v7 < *a7 );
  }
  return v14;
}
