/*
 * XREFs of ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18003641C
 * Callers:
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180036324 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800AC844 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800AC8A4 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 */

void __fastcall ControllerProcessor::StartInteractionHelper(__int64 a1, int a2)
{
  struct tagPOINT *CursorPosition; // rax
  ManipulationInjector *v5; // rcx
  struct tagPOINT v6; // r8
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  CursorPosition = (struct tagPOINT *)ControllerProcessor::GetCursorPosition((ControllerProcessor *)a1, &v7);
  v5 = (ManipulationInjector *)(a1 + 2048);
  v6 = *CursorPosition;
  *(struct tagPOINT *)(a1 + 1956) = *CursorPosition;
  v7 = v6;
  if ( a2 == 1 )
    ManipulationInjector::StartPan(v5, &v7, 0);
  else
    ManipulationInjector::StartZoom(v5, &v7, a2 == 16, 0);
}
