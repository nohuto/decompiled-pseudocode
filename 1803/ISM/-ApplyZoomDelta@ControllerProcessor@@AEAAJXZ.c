/*
 * XREFs of ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x180034CB4
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180033FE4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180036324 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800AC8A4 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800AD1A8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyZoomDelta(ControllerProcessor *this)
{
  float v1; // xmm0_4
  int v3; // ecx
  struct tagPOINT *CursorPosition; // rax
  struct tagPOINT v5; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((float *)this + 509);
  if ( v1 != 0.0 )
  {
    if ( v1 <= 1.0 )
    {
      v3 = *((_DWORD *)this + 719);
      if ( !v3 )
      {
        if ( !*((_BYTE *)this + 2881) )
        {
LABEL_11:
          *((_DWORD *)this + 509) = 0;
          return 0LL;
        }
        CursorPosition = (struct tagPOINT *)ControllerProcessor::GetCursorPosition(this, &v7);
        v5 = *CursorPosition;
        *(struct tagPOINT *)((char *)this + 1956) = *CursorPosition;
        v7 = v5;
        ManipulationInjector::StartZoom((ControllerProcessor *)((char *)this + 2048), &v7, 0, 0);
        v3 = 32;
        *((_DWORD *)this + 719) = 32;
      }
    }
    else
    {
      ControllerProcessor::TryUpdateInteractionType(this, 16LL);
      v3 = *((_DWORD *)this + 719);
    }
    if ( ((v3 - 16) & 0xFFFFFFEF) == 0 )
      ManipulationInjector::InjectZoom((ControllerProcessor *)((char *)this + 2048), *((float *)this + 509), 0);
    goto LABEL_11;
  }
  if ( ((*((_DWORD *)this + 719) - 16) & 0xFFFFFFEF) == 0 )
    ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  return 0LL;
}
