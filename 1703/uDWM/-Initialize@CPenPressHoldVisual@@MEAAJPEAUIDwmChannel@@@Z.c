/*
 * XREFs of ?Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E440
 * Callers:
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x180088838 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019310 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPenPressHoldVisual::Initialize(struct CImage **this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int inserted; // eax

  v4 = CVisual::Initialize((CVisual *)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CImage::Create(a2, this + 39);
    v5 = v6;
    if ( v6 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[39], 0LL, 0, 1);
      v5 = inserted;
      if ( inserted >= 0 )
      {
        this[38] = 0LL;
        *((_BYTE *)this + 280) = 0;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x26u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x25u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x23u);
  }
  return v5;
}
