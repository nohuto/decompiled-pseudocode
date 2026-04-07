/*
 * XREFs of ?Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z @ 0x180087F0C
 * Callers:
 *     ?Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180087E30 (-Create@CRippleEffect@@SAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D460 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180025F40 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRippleEffect::Initialize(struct tagSIZE *this, struct IDwmChannel *a2, struct CBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CDesktopManager *v8; // rdx
  __int128 v9; // xmm1
  struct CVisual ***v10; // rsi
  struct tagSIZE v11; // rcx
  __m128i v12; // xmm0
  int v13; // eax
  int inserted; // eax

  v6 = CVisual::Initialize((CVisual *)this, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    *(_OWORD *)&this[36].cx = *(_OWORD *)a3;
    *(_OWORD *)&this[38].cx = *((_OWORD *)a3 + 1);
    *(_OWORD *)&this[40].cx = *((_OWORD *)a3 + 2);
    *(_OWORD *)&this[42].cx = *((_OWORD *)a3 + 3);
    *(_OWORD *)&this[44].cx = *((_OWORD *)a3 + 4);
    v9 = *((_OWORD *)a3 + 5);
    v10 = (struct CVisual ***)&this[35];
    *(_OWORD *)&this[46].cx = v9;
    v11 = *(struct tagSIZE *)(*(_QWORD *)&this[36] + 24LL);
    this[31] = v11;
    v12 = _mm_cvtsi32_si128(this[31].cy);
    this[31].cx = (int)((double)v11.cx * *((double *)v8 + 55));
    this[31].cy = (int)(_mm_cvtepi32_pd(v12).m128d_f64[0] * *((double *)v8 + 55));
    v13 = CImage::Create(a2, (struct CImage **)&this[35]);
    v7 = v13;
    if ( v13 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)&this[4], *v10, 0LL, 0, 1);
      v7 = inserted;
      if ( inserted >= 0 )
        CVisual::SetSize((struct tagSIZE *)*v10, this + 31);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x55u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x54u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x46u);
  }
  return v7;
}
