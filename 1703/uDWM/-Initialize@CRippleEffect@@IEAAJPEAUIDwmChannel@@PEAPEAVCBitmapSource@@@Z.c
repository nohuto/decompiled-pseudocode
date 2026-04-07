/*
 * XREFs of ?Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z @ 0x1800879EC
 * Callers:
 *     ?Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180087910 (-Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019310 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRippleEffect::Initialize(struct tagSIZE *this, struct IDwmChannel *a2, struct CBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v8; // xmm1
  struct CVisual **v9; // rsi
  CDesktopManager *v10; // rcx
  __m128i v11; // xmm0
  int v12; // eax
  int inserted; // eax

  v6 = CVisual::Initialize((CVisual *)this, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_OWORD *)&this[36].cx = *(_OWORD *)a3;
    *(_OWORD *)&this[38].cx = *((_OWORD *)a3 + 1);
    *(_OWORD *)&this[40].cx = *((_OWORD *)a3 + 2);
    *(_OWORD *)&this[42].cx = *((_OWORD *)a3 + 3);
    *(_OWORD *)&this[44].cx = *((_OWORD *)a3 + 4);
    v8 = *((_OWORD *)a3 + 5);
    v9 = (struct CVisual **)&this[35];
    *(_OWORD *)&this[46].cx = v8;
    this[31] = *(struct tagSIZE *)(*(_QWORD *)&this[36] + 24LL);
    v10 = CDesktopManager::s_pDesktopManagerInstance;
    v11 = _mm_cvtsi32_si128(this[31].cy);
    this[31].cx = (int)((double)this[31].cx * *((double *)CDesktopManager::s_pDesktopManagerInstance + 49));
    this[31].cy = (int)(_mm_cvtepi32_pd(v11).m128d_f64[0] * *((double *)v10 + 50));
    v12 = CImage::Create(a2, (struct CImage **)&this[35]);
    v7 = v12;
    if ( v12 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)&this[4], *v9, 0LL, 0, 1);
      v7 = inserted;
      if ( inserted >= 0 )
        CVisual::SetSize((struct tagSIZE *)*v9, this + 31);
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x55u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x54u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x46u);
  }
  return v7;
}
