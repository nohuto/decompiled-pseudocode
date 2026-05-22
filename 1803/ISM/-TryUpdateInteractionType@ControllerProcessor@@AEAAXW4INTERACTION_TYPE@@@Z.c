/*
 * XREFs of ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180036324
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180033FE4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x180034CB4 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034FD0 (-UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18003641C (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1800365B8 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800ACB7C (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 */

void __fastcall ControllerProcessor::TryUpdateInteractionType(__int64 a1, unsigned int a2)
{
  int v4; // edx
  int v5; // edi
  char v6; // si
  bool v7; // zf

  v4 = *(_DWORD *)(a1 + 2876);
  if ( v4 == a2 )
    return;
  v5 = 0;
  if ( !a2 )
  {
    ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 2048), 0);
    if ( *(_BYTE *)(a1 + 2880) )
    {
      ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
      *(_BYTE *)(a1 + 2880) = 0;
    }
    goto LABEL_17;
  }
  if ( a2 == 1 )
  {
    if ( ((v4 - 16) & 0xFFFFFFEF) == 0 )
    {
      ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 2048), 0);
      if ( *(_BYTE *)(a1 + 2880) )
      {
        ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
        *(_BYTE *)(a1 + 2880) = 0;
      }
    }
    v6 = *(_BYTE *)(a1 + 2881);
    v7 = v6 == 0;
    if ( v6 )
    {
      ControllerProcessor::StartInteractionHelper(a1, 1LL);
      v7 = v6 == 0;
    }
    LOBYTE(v5) = !v7;
LABEL_17:
    *(_DWORD *)(a1 + 2876) = v5;
    return;
  }
  if ( (a2 == 16 || a2 == 32) && !v4 )
  {
    if ( *(_BYTE *)(a1 + 2881) )
    {
      ControllerProcessor::StartInteractionHelper(a1, a2);
      *(_DWORD *)(a1 + 2876) = a2;
    }
  }
}
