/*
 * XREFs of ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180191248
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180190E50 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180190EF0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180191328 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetD2DInk(CInk *this, struct ID2DContext *a2, struct ID2D1Ink **a3, struct ID2D1InkStyle **a4)
{
  int v7; // eax
  int ID2D1InkAndInkStyle; // ebx
  unsigned int v9; // eax
  CD2DInk *v11; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v11 = 0LL;
  v7 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 + 2)) & 6;
  if ( (((unsigned __int8)v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 + 2)) & 6) & 6) != 2 )
  {
    ID2D1InkAndInkStyle = -2147467259;
    v9 = 284;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ID2D1InkAndInkStyle, v9);
    ReleaseInterface<IBitmapLock>((__int64 *)a3);
    ReleaseInterface<IBitmapLock>((__int64 *)a4);
    goto LABEL_8;
  }
  ID2D1InkAndInkStyle = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
                          (CInk *)((char *)this + 56),
                          a2,
                          &v11);
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v9 = 287;
    goto LABEL_7;
  }
  ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v11, a3, a4);
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v9 = 288;
    goto LABEL_7;
  }
LABEL_8:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return (unsigned int)ID2D1InkAndInkStyle;
}
