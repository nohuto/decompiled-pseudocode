/*
 * XREFs of ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x1800A8F7C
 * Callers:
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800A90E4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 * Callees:
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18004ADB0 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FEFC (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1800A2898 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 *     ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x1800A5ED0 (-RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillOrStrokeShape(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        float *a5,
        struct CResource *a6)
{
  unsigned int v7; // edi
  int BrushRealizer; // eax
  CBrushResourceRealizer *v11; // rbx
  int v12; // eax
  int v13; // eax
  void (__fastcall *v14)(CBrushResourceRealizer *); // rax
  __int64 (__fastcall *v15)(CMILRefCountBase *); // rax
  CBrushResourceRealizer *v17; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0;
  v17 = 0LL;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a5) )
  {
    BrushRealizer = CDrawingContext::GetBrushRealizer(this, a6, (CDrawingContext *)((char *)this + 3456), &v17);
    v11 = v17;
    v7 = BrushRealizer;
    if ( BrushRealizer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizer, 0x56Du);
    }
    else
    {
      *((_OWORD *)this + 225) = *a4;
      *((_OWORD *)this + 226) = *(_OWORD *)a5;
      v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x575u);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, __int64, _QWORD, CBrushResourceRealizer *, _DWORD))(**((_QWORD **)this + 46) + 80LL))(
                *((_QWORD *)this + 46),
                *((_QWORD *)this + 49),
                (char *)this + 8,
                (char *)this + 80,
                (char *)this + 3456,
                a3,
                0LL,
                v11,
                *((_DWORD *)this + 72));
        v7 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x581u);
        else
          CDrawingContext::RecordImageBrushInfo(this, a6);
      }
    }
    if ( v11 )
    {
      v14 = *(void (__fastcall **)(CBrushResourceRealizer *))(*(_QWORD *)v11 + 32LL);
      if ( v14 == CBrushResourceRealizer::FreeRealizationResources )
        CBrushResourceRealizer::FreeRealizationResources(v11);
      else
        v14(v11);
      v15 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v11 + 8LL);
      if ( v15 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v11);
      else
        v15(v11);
    }
  }
  return v7;
}
