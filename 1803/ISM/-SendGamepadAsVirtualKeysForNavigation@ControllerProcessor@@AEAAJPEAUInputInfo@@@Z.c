/*
 * XREFs of ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180035764
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180032ED0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180035B30 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180035CCC (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(
        ControllerProcessor *this,
        struct InputInfo *a2)
{
  char v2; // bp
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int16 *v7; // rcx
  int updated; // ebx

  v2 = *((_BYTE *)a2 + 584);
  v5 = 0LL;
  if ( dword_180136550 != 8 )
  {
    v6 = 0LL;
    v7 = ControllerProcessor::s_controllerCurrentKeyMap;
    while ( *(_DWORD *)v7 != 8 )
    {
      v6 = (unsigned int)(v6 + 1);
      v7 += 4;
      if ( (unsigned int)v6 >= 0x18 )
        goto LABEL_7;
    }
    v5 = ControllerProcessor::s_controllerCurrentKeyMap[4 * v6 + 2];
  }
LABEL_7:
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 8LL, v5);
  if ( updated < 0 )
    goto LABEL_27;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 32LL, 198LL);
  if ( updated < 0 )
    goto LABEL_27;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1024LL, 200LL);
  if ( updated < 0 )
    goto LABEL_27;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2048LL, 199LL);
  if ( updated < 0 )
    goto LABEL_27;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2LL, 208LL);
  if ( updated < 0 )
    goto LABEL_27;
  if ( !*((_BYTE *)a2 + 1720) )
  {
    updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x40000000LL, 7LL);
    if ( updated < 0 )
      goto LABEL_27;
  }
  if ( (*((_BYTE *)this + 1952) & 0x40) != 0
    && !v2
    && ((updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 64LL, 38LL), updated < 0)
     || (updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 128LL, 40LL), updated < 0)
     || (updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 256LL, 37LL), updated < 0)
     || (updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 512LL, 39LL), updated < 0))
    || (updated = ControllerProcessor::UpdateAutoRepeatTimer(this), updated < 0) )
  {
LABEL_27:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)updated;
}
