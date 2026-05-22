/*
 * XREFs of ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800418B4
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     _lambda_2185fa630517e7c889a7a0a7e3b7459d_::_lambda_invoker_cdecl_ @ 0x18003DD40 (_lambda_2185fa630517e7c889a7a0a7e3b7459d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x18003E8A4 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x18003E9A4 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 */

void __fastcall ControllerProcessor::UpdateControllerNavigationMode(ControllerProcessor *this)
{
  LSTATUS ValueW; // eax
  int v3; // ecx
  struct tagRECT v4; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT Point; // [rsp+68h] [rbp+18h] BYREF
  int v6; // [rsp+70h] [rbp+20h] BYREF

  Point.x = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
             L"Enabled",
             0x10u,
             0LL,
             &v6,
             (LPDWORD)&Point);
  v3 = v6;
  if ( ValueW )
    v3 = 1;
  if ( v3 )
  {
    Point = 0LL;
    GetCursorPos(&Point);
    v4.left = 0;
    v4.top = 0;
    v4.right = GetSystemMetrics(78);
    v4.bottom = GetSystemMetrics(79);
    ControllerProcessor::NavigationEnable(this, 225, &v4, Point, 0, 0);
  }
  else if ( *((_DWORD *)this + 59) != 2 )
  {
    ControllerProcessor::NavigationDisable(this);
  }
}
