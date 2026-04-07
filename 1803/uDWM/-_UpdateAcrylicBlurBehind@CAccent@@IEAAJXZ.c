/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18003BDBC
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180010580 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x180047EEC (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccentAcrylicBlurBehind **this)
{
  unsigned int v1; // edi
  int updated; // eax
  struct CVisual *v5; // rdx
  CAccentAcrylicBlurBehind **v6; // rcx
  int inserted; // eax
  int v8; // eax

  v1 = 0;
  if ( this[43] && *((_BYTE *)this + 374) )
  {
    CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    *((_OWORD *)this[43] + 22) = *((_OWORD *)this + 37);
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(this[43], (const struct ACCENT_POLICY *)(this + 35));
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x685u);
    }
    else
    {
      v5 = this[43];
      v6 = (CAccentAcrylicBlurBehind **)*((_QWORD *)v5 + 3);
      if ( v6 != this )
      {
        if ( v6 )
        {
          v8 = VisualCollection::Remove((VisualCollection *)(v6 + 4), v5);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x68Du);
            return v1;
          }
          v5 = this[43];
        }
        inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), (struct CVisual **)v5, 0LL, 0, 1);
        v1 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x68Fu);
      }
    }
  }
  return v1;
}
