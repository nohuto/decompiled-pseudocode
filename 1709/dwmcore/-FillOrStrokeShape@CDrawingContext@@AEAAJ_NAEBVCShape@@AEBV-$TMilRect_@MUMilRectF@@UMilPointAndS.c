/*
 * XREFs of ?FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAVCResource@@@Z @ 0x18003FFA8
 * Callers:
 *     ?DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800400E8 (-DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003692C (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180037528 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 *     ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x18003AE4C (-RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillOrStrokeShape(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        float *a5,
        struct CResource *a6)
{
  unsigned int v7; // ebx
  int BrushRealizer; // eax
  struct CLegacyMilBrushRealizer *v11; // rsi
  int v12; // eax
  int v13; // eax
  struct CLegacyMilBrushRealizer *v15; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0;
  v15 = 0LL;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a5) )
  {
    BrushRealizer = CDrawingContext::GetBrushRealizer(this, a6, (CDrawingContext *)((char *)this + 3552), &v15);
    v11 = v15;
    v7 = BrushRealizer;
    if ( BrushRealizer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BrushRealizer, 0x55Eu);
    }
    else
    {
      *((_OWORD *)this + 231) = *a4;
      *((_OWORD *)this + 232) = *(_OWORD *)a5;
      v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x564u);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, __int64, _QWORD, struct CLegacyMilBrushRealizer *, _DWORD))(**((_QWORD **)this + 45) + 64LL))(
                *((_QWORD *)this + 45),
                *((_QWORD *)this + 48),
                (char *)this + 8,
                (char *)this + 72,
                (char *)this + 3552,
                a3,
                0LL,
                v11,
                *((_DWORD *)this + 70));
        v7 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x56Eu);
        else
          CDrawingContext::RecordImageBrushInfo(this, a6);
      }
    }
    if ( v11 )
    {
      (*(void (__fastcall **)(struct CLegacyMilBrushRealizer *))(*(_QWORD *)v11 + 32LL))(v11);
      (*(void (__fastcall **)(struct CLegacyMilBrushRealizer *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return v7;
}
