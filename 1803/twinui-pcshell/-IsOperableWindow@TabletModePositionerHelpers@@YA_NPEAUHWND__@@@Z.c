/*
 * XREFs of ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x180284148
 * Callers:
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1802CAB60 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x180305340 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall TabletModePositionerHelpers::IsOperableWindow(TabletModePositionerHelpers *this, HWND a2)
{
  char v3; // bl
  HWND v4; // rdx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( IsWindow((HWND)this)
    && (GetWindowLongPtrW((HWND)this, -16) & 0x40000) != 0
    && ApplicationViewHelpers::CanMaximizeWindow(this, v4)
    && (!(unsigned int)GetWindowBand(this, &v6) || v6 != 2 && v6 != 16) )
  {
    return 1;
  }
  return v3;
}
