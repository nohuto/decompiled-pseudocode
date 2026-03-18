/*
 * XREFs of ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18015EBEC
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006B178 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x180162750 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180162A00 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MoveOptimizationInfo::Create(
        __int64 a1,
        float a2,
        float a3,
        __int128 *a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  unsigned int v7; // ebx
  _DWORD *v10; // rax
  __int128 v11; // xmm0

  v7 = 0;
  *a7 = 0LL;
  v10 = operator new(0x40uLL);
  if ( v10 )
  {
    v10[2] = 0;
    *(_QWORD *)v10 = &MoveOptimizationInfo::`vftable';
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 6) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *((float *)v10 + 6) = a2;
    *((float *)v10 + 7) = a3;
    *((_QWORD *)v10 + 2) = a1;
    v11 = *a4;
    *((_QWORD *)v10 + 6) = a5;
    *((_QWORD *)v10 + 7) = 0LL;
    *((_OWORD *)v10 + 2) = v11;
    *a7 = v10;
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v10);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5Bu);
  }
  return v7;
}
