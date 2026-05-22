/*
 * XREFs of ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800402F4
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x18003F7A8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180041CA0 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180041D70 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C1440 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyZoomDelta(ControllerProcessor *this)
{
  float v1; // xmm0_4

  v1 = *((float *)this + 98);
  if ( v1 == 0.0 )
  {
    if ( ((*((_DWORD *)this + 306) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    if ( v1 <= 1.0 )
    {
      if ( !*((_DWORD *)this + 306) && *((_BYTE *)this + 1229) )
      {
        ControllerProcessor::StartInteractionHelper(this, 32LL);
        *((_DWORD *)this + 306) = 32;
      }
    }
    else
    {
      ControllerProcessor::TryUpdateInteractionType(this, 16LL);
    }
    if ( ((*((_DWORD *)this + 306) - 16) & 0xFFFFFFEF) == 0 )
      ManipulationInjector::InjectZoom((ControllerProcessor *)((char *)this + 400), *((float *)this + 98), 0);
    *((_DWORD *)this + 98) = 0;
  }
  return 0LL;
}
