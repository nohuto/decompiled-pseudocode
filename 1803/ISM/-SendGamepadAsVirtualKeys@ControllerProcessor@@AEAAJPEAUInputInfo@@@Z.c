/*
 * XREFs of ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003542C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180032ED0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180035B30 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z @ 0x180035B80 (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG_N@Z @ 0x180035BD8 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180035CCC (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeys(ControllerProcessor *this, struct InputInfo *a2)
{
  int updated; // ebx

  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1LL, 207LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2LL, 208LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 4LL, 195LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 8LL, 196LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 16LL, 197LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 32LL, 198LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 64LL, 203LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 128LL, 204LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 256LL, 205LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 512LL, 206LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1024LL, 200LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2048LL, 199LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 4096LL, 209LL);
  if ( updated < 0 )
    goto LABEL_30;
  updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x2000LL, 210LL);
  if ( updated < 0 )
    goto LABEL_30;
  if ( !*((_BYTE *)a2 + 1720) )
  {
    updated = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x40000000LL, 7LL);
    if ( updated < 0 )
      goto LABEL_30;
  }
  updated = ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, a2, *((double *)a2 + 67), 0xC9u);
  if ( updated < 0
    || (updated = ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, a2, *((double *)a2 + 68), 0xCAu),
        updated < 0)
    || (updated = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                    this,
                    a2,
                    *((double *)a2 + 70),
                    0xD3u,
                    0xD4u,
                    0),
        updated < 0)
    || (updated = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                    this,
                    a2,
                    *((double *)a2 + 69),
                    0xD5u,
                    0xD6u,
                    0),
        updated < 0)
    || (updated = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                    this,
                    a2,
                    *((double *)a2 + 72),
                    0xD7u,
                    0xD8u,
                    0),
        updated < 0)
    || (updated = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                    this,
                    a2,
                    *((double *)a2 + 71),
                    0xD9u,
                    0xDAu,
                    0),
        updated < 0)
    || (updated = ControllerProcessor::UpdateAutoRepeatTimer(this), updated < 0) )
  {
LABEL_30:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)updated;
}
