/*
 * XREFs of ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG_N@Z @ 0x180035BD8
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003542C (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z @ 0x18003594C (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z.c)
 */

__int64 __fastcall ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        double a3,
        __int16 a4,
        unsigned __int16 a5,
        bool a6)
{
  char v7; // r9
  struct InputInfo *v8; // rdi
  ControllerProcessor *v9; // rsi
  int v10; // ebx
  __int16 v11; // r8
  int v12; // eax
  bool v14; // [rsp+20h] [rbp-28h]

  v7 = 0;
  v14 = a6;
  v8 = a2;
  v9 = this;
  if ( a3 < 0.71 )
  {
    if ( a3 > 0.6899999999999999 )
    {
      v11 = a5;
LABEL_14:
      v12 = ControllerProcessor::SetVirtualKeyState(this, a2, v11, v7, v14);
      v10 = v12;
LABEL_15:
      if ( v12 >= 0 )
        return (unsigned int)v10;
      goto LABEL_16;
    }
    v12 = ControllerProcessor::SetVirtualKeyState(this, a2, a4, 0, a6);
    v10 = v12;
    if ( a3 < -0.6899999999999999 )
    {
      if ( a3 > -0.71 )
        goto LABEL_15;
      if ( v12 >= 0 )
      {
        v11 = a5;
        goto LABEL_12;
      }
    }
    else if ( v12 >= 0 )
    {
      v11 = a5;
      v7 = 0;
LABEL_13:
      this = v9;
      v14 = a6;
      a2 = v8;
      goto LABEL_14;
    }
  }
  else
  {
    v10 = ControllerProcessor::SetVirtualKeyState(this, a2, a5, 0, a6);
    if ( v10 >= 0 )
    {
      v11 = a4;
LABEL_12:
      v7 = 1;
      goto LABEL_13;
    }
  }
LABEL_16:
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)v10;
}
