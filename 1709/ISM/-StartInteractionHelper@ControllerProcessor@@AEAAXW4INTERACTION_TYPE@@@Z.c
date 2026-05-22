/*
 * XREFs of ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180041D70
 * Callers:
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800402F4 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180041CA0 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C0B00 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800C0B60 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerProcessor::StartInteractionHelper(__int64 a1, int a2)
{
  LONG *v4; // rdi
  LONG *v5; // rbx
  ManipulationInjector *v6; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (LONG *)(a1 + 328);
  v5 = (LONG *)(a1 + 324);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 264) + 24LL))(
    *(_QWORD *)(a1 + 264),
    a1 + 324,
    a1 + 328);
  v6 = (ManipulationInjector *)(a1 + 400);
  v7.x = *v5;
  v7.y = *v4;
  if ( a2 == 1 )
    ManipulationInjector::StartPan(v6, &v7, 0);
  else
    ManipulationInjector::StartZoom(v6, &v7, a2 == 16, 0);
}
