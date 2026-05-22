/*
 * XREFs of ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180040F7C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003E2F0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180041468 (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180041748 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(
        ControllerProcessor *this,
        struct InputInfo *a2)
{
  char v2; // r15
  unsigned __int16 v5; // bx
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // r9d

  v2 = *((_BYTE *)a2 + 760);
  v5 = 0;
  if ( dword_18010F130 == 8 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 12, 115, 87);
  }
  else
  {
    v6 = 0LL;
    v7 = ControllerProcessor::s_controllerCurrentKeyMap;
    do
    {
      if ( *v7 == 8 )
      {
        v5 = ControllerProcessor::s_controllerCurrentKeyMap[4 * v6 + 2];
        goto LABEL_10;
      }
      v6 = (unsigned int)(v6 + 1);
      v7 += 2;
    }
    while ( (unsigned int)v6 < 0x18 );
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)v7, &MinInput_Warning_CheckResult, 12, 132, 5);
  }
LABEL_10:
  v8 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 8LL, v5);
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v10 = 2205;
    goto LABEL_13;
  }
  v8 = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2LL, 208LL);
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_14:
      if ( IsDebuggerPresent() )
        __debugbreak();
      goto LABEL_44;
    }
    v10 = 2210;
LABEL_13:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 12, v10, v8);
    goto LABEL_14;
  }
  if ( !*((_BYTE *)a2 + 2760) )
  {
    LODWORD(result) = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x40000000LL, 7LL);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_42;
      v13 = 2217;
      goto LABEL_41;
    }
  }
  if ( (*((_BYTE *)this + 320) & 0x40) != 0 && !v2 )
  {
    LODWORD(result) = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 64LL, 38LL);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_42;
      v13 = 2230;
      goto LABEL_41;
    }
    LODWORD(result) = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 128LL, 40LL);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_42;
      v13 = 2235;
      goto LABEL_41;
    }
    LODWORD(result) = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 256LL, 37LL);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_42;
      v13 = 2240;
      goto LABEL_41;
    }
    LODWORD(result) = ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 512LL, 39LL);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_42;
      v13 = 2245;
      goto LABEL_41;
    }
  }
  LODWORD(result) = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_42;
    v13 = 2252;
LABEL_41:
    McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 12, v13, result);
LABEL_42:
    if ( IsDebuggerPresent() )
      __debugbreak();
LABEL_44:
    __fastfail(7u);
  }
  return (unsigned int)result;
}
