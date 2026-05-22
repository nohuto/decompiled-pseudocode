/*
 * XREFs of ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180040A6C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003E2F0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180041468 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z @ 0x1800414EC (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NG@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z @ 0x180041578 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180041748 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeys(ControllerProcessor *this, struct InputInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // r9d

  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1LL, 207LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v6 = 2063;
    goto LABEL_4;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2LL, 208LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2068;
LABEL_4:
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 12, v6, v4);
      goto LABEL_5;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 4LL, 195LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2073;
      goto LABEL_4;
    }
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    goto LABEL_75;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 8LL, 196LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2078;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 16LL, 197LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2083;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 32LL, 198LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2088;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 64LL, 203LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2093;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 128LL, 204LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2098;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 256LL, 205LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2103;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 512LL, 206LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2108;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1024LL, 200LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2113;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2048LL, 199LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2118;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 4096LL, 209LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2123;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v4 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x2000LL, 210LL);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 2128;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  if ( !*((_BYTE *)a2 + 2760) )
  {
    LODWORD(result) = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x40000000LL, 7LL);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_73;
      v9 = 2135;
      goto LABEL_72;
    }
  }
  LODWORD(result) = ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, a2, *((double *)a2 + 89), 0xC9u);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_73;
    v9 = 2145;
    goto LABEL_72;
  }
  LODWORD(result) = ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, a2, *((double *)a2 + 90), 0xCAu);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_73;
    v9 = 2150;
    goto LABEL_72;
  }
  LODWORD(result) = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                      this,
                      a2,
                      *((double *)a2 + 92),
                      0xD3u,
                      0xD4u);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_73;
    v9 = 2160;
    goto LABEL_72;
  }
  LODWORD(result) = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                      this,
                      a2,
                      *((double *)a2 + 91),
                      0xD5u,
                      0xD6u);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_73;
    v9 = 2166;
    goto LABEL_72;
  }
  LODWORD(result) = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                      this,
                      a2,
                      *((double *)a2 + 94),
                      0xD7u,
                      0xD8u);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_73;
    v9 = 2172;
    goto LABEL_72;
  }
  LODWORD(result) = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                      this,
                      a2,
                      *((double *)a2 + 93),
                      0xD9u,
                      0xDAu);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_73;
    v9 = 2178;
    goto LABEL_72;
  }
  LODWORD(result) = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_73;
    v9 = 2184;
LABEL_72:
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 12, v9, result);
LABEL_73:
    if ( IsDebuggerPresent() )
      __debugbreak();
LABEL_75:
    __fastfail(7u);
  }
  return (unsigned int)result;
}
