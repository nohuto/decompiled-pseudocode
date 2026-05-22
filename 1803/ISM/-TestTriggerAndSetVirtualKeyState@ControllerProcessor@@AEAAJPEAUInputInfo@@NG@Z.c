/*
 * XREFs of ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z @ 0x180035B80
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003542C (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z @ 0x18003594C (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z.c)
 */

__int64 __fastcall ControllerProcessor::TestTriggerAndSetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        double a3,
        __int16 a4)
{
  int v4; // ebx
  char v6; // r9

  v4 = 0;
  if ( a3 < 0.1275 )
  {
    if ( a3 > 0.1075 )
      return (unsigned int)v4;
    v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  v4 = ControllerProcessor::SetVirtualKeyState(this, a2, a4, v6, 0);
  if ( v4 < 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)v4;
}
