/*
 * XREFs of ?FillOrStrokeShape@CDrawingContext@@AEAAJ_NAEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAVCResource@@@Z @ 0x180161344
 * Callers:
 *     ?DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006E054 (-DrawShape@CDrawingContext@@QEAAJAEBVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800651D4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1801618B4 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 *     ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x1801626FC (-RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BrushRealizer, 0x551u);
    }
    else
    {
      *((_OWORD *)this + 231) = *a4;
      *((_OWORD *)this + 232) = *(_OWORD *)a5;
      v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x557u);
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
        if ( v13 >= 0 )
          CDrawingContext::RecordImageBrushInfo(this, a6);
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x561u);
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
