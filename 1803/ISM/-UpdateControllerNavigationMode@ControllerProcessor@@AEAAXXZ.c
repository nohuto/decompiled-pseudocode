/*
 * XREFs of ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180035DF0
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003254C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     _lambda_671066ec7fd3ed3c23303e9a55d20f18_::_lambda_invoker_cdecl_ @ 0x180032AD0 (_lambda_671066ec7fd3ed3c23303e9a55d20f18_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1800331AC (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180033268 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 */

void __fastcall ControllerProcessor::UpdateControllerNavigationMode(ControllerProcessor *this)
{
  LSTATUS ValueW; // eax
  int v3; // ecx
  struct tagRECT v4; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT v5; // [rsp+68h] [rbp+18h] BYREF
  int v6; // [rsp+70h] [rbp+20h] BYREF

  v5.x = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
             L"Enabled",
             0x10u,
             0LL,
             &v6,
             (LPDWORD)&v5);
  v3 = v6;
  if ( ValueW )
    v3 = 1;
  if ( v3 )
  {
    ControllerProcessor::GetCursorPosition(this, &v5);
    v4.left = 0;
    v4.top = 0;
    v4.right = GetSystemMetrics(78);
    v4.bottom = GetSystemMetrics(79);
    ControllerProcessor::NavigationEnable(this, 225, &v4, v5, 0, 0);
  }
  else if ( *((_DWORD *)this + 474) != 2 )
  {
    ControllerProcessor::NavigationDisable(this);
  }
}
