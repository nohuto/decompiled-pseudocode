/*
 * XREFs of ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180035B30
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003542C (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180035764 (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z @ 0x18003594C (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z.c)
 */

__int64 __fastcall ControllerProcessor::TestButtonAndSetVirtualKeyState(
        ControllerProcessor *a1,
        __int64 a2,
        int a3,
        __int16 a4)
{
  char v6; // r9
  int v7; // ebx

  v6 = (a3 & *(_DWORD *)(a2 + 528)) != 0;
  v7 = ControllerProcessor::SetVirtualKeyState(a1, (struct InputInfo *)a2, a4, v6, 0);
  if ( v7 < 0 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)v7;
}
