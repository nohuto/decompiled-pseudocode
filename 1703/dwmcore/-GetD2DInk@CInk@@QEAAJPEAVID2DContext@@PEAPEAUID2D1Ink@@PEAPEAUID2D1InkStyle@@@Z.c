/*
 * XREFs of ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18016F944
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016F8A0 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180001670 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180001D34 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 */

__int64 __fastcall CInk::GetD2DInk(CInk *this, struct ID2DContext *a2, struct ID2D1Ink **a3, struct ID2D1InkStyle **a4)
{
  int v5; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int ID2D1InkAndInkStyle; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  CD2DInk *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = *((_DWORD *)this + 8);
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((v5 & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v8;
  if ( (v8 & 6) != 2 )
  {
    v9 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x11Cu);
LABEL_8:
    ReleaseInterface<IBitmapLock>((__int64 *)a3);
    ReleaseInterface<IBitmapLock>((__int64 *)a4);
    goto LABEL_9;
  }
  ID2D1InkAndInkStyle = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
                          (CInk *)((char *)this + 56),
                          a2,
                          &v13);
  v9 = ID2D1InkAndInkStyle;
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v12 = 287;
    goto LABEL_7;
  }
  ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13, a3, a4);
  v9 = ID2D1InkAndInkStyle;
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v12 = 288;
LABEL_7:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, v12);
    goto LABEL_8;
  }
LABEL_9:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v9;
}
