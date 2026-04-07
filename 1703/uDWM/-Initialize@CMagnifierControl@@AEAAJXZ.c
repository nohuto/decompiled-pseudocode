/*
 * XREFs of ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x180042B10
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x1800420D8 (-Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@2PEAPEAV1@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B404 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004299C (-Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAVCResource@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMagnifierControl::Initialize(struct IDwmChannel **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int inserted; // eax
  int v5; // eax

  v2 = CVisual::Create(this[2], this + 5);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x83u);
  }
  else
  {
    inserted = VisualCollection::InsertRelative((struct IDwmChannel *)((char *)this[5] + 32), this[6], 0LL, 0, 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x85u);
    }
    else
    {
      v5 = CFullScreenMagnifier::Create(this[2], this[3], this[4], this + 7);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Fu);
    }
  }
  return v3;
}
