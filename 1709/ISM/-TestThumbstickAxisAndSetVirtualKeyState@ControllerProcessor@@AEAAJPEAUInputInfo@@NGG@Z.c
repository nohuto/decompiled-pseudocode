/*
 * XREFs of ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG@Z @ 0x180041578
 * Callers:
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180040A6C (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x180041214 (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 */

__int64 __fastcall ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
        ControllerProcessor *this,
        struct InputInfo *a2,
        double a3,
        __int16 a4,
        unsigned __int16 a5)
{
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  unsigned int v11; // ebx

  if ( a3 < 0.71 )
  {
    if ( a3 <= 0.6899999999999999 )
    {
      if ( a3 < -0.6899999999999999 )
      {
        if ( a3 <= -0.71 )
        {
          v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 0);
          if ( v8 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_30;
            v10 = 2611;
            goto LABEL_29;
          }
          v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a5, 1);
          v11 = v8;
          if ( v8 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_30;
            v10 = 2616;
LABEL_29:
            McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 12, v10, v8);
LABEL_30:
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
        }
        else
        {
          v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 0);
          v11 = v8;
          if ( v8 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_30;
            v10 = 2593;
            goto LABEL_29;
          }
        }
      }
      else
      {
        v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 0);
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_30;
          v10 = 2574;
          goto LABEL_29;
        }
        v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a5, 0);
        v11 = v8;
        if ( v8 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_30;
          v10 = 2579;
          goto LABEL_29;
        }
      }
    }
    else
    {
      v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a5, 0);
      v11 = v8;
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_30;
        v10 = 2560;
        goto LABEL_29;
      }
    }
  }
  else
  {
    v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a5, 0);
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v10 = 2537;
      goto LABEL_29;
    }
    v8 = ControllerProcessor::SetVirtualKeyState((__int64)this, a2, a4, 1);
    v11 = v8;
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v10 = 2542;
      goto LABEL_29;
    }
  }
  return v11;
}
