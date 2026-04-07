/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180077BF0
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180012710 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x1800778B0 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccentAcrylicBlurBehind **this)
{
  unsigned int v1; // ebx
  int updated; // eax
  struct CVisual *v4; // rdx
  CAccentAcrylicBlurBehind **v5; // rcx
  int v6; // eax
  int inserted; // eax

  v1 = 0;
  if ( this[43] && *((_BYTE *)this + 374) )
  {
    CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    *((_OWORD *)this[43] + 22) = *((_OWORD *)this + 37);
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(this[43], (const struct ACCENT_POLICY *)(this + 35));
    v1 = updated;
    if ( updated >= 0 )
    {
      v4 = this[43];
      v5 = (CAccentAcrylicBlurBehind **)*((_QWORD *)v4 + 3);
      if ( v5 != this )
      {
        if ( v5 && (v6 = VisualCollection::Remove((VisualCollection *)(v5 + 4), v4), v1 = v6, v6 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6A9u);
        }
        else
        {
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(this + 4),
                       (struct CVisual **)this[43],
                       0LL,
                       0,
                       1);
          v1 = inserted;
          if ( inserted < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x6ABu);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6A1u);
    }
  }
  return v1;
}
