/*
 * XREFs of ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18003DE40
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@3PEAPEAV1@@Z @ 0x18003DCE4 (-Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDComp.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FDD8 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18003DECC (-Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMagnifierControl::Initialize(CMagnifierControl *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int inserted; // eax
  int v5; // eax

  v2 = CVisual::Create(*((struct IDwmChannel **)this + 2), (struct CVisual **)this + 6);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x8Au);
  }
  else
  {
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
                 *((struct CVisual ***)this + 7),
                 0LL,
                 0,
                 1);
    v3 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x8Cu);
    }
    else
    {
      v5 = CFullScreenMagnifier::Create(
             *((struct IDwmChannel **)this + 2),
             *((struct IDCompositionDesktopDevicePartner **)this + 4),
             *((struct IDCompositionDesktopTargetPartner **)this + 5),
             *((struct CVisual **)this + 3),
             (struct CFullScreenMagnifier **)this + 8);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x97u);
    }
  }
  return v3;
}
