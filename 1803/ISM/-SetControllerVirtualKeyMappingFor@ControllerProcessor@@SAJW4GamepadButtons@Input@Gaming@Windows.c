/*
 * XREFs of ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180032D74
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006D40 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18002EF30 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerProcessor::SetControllerVirtualKeyMappingFor(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // r11d
  char v5; // cl
  unsigned int v6; // eax
  _DWORD *v7; // rdx

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( dword_180136550 == 8 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v6 = 0;
    v7 = &ControllerProcessor::s_controllerCurrentKeyMap;
    do
    {
      if ( *v7 == 8 )
      {
        *((_WORD *)&ControllerProcessor::s_controllerCurrentKeyMap + 4 * v6 + 2) = a2;
        return v2;
      }
      if ( !v5 && *v7 == dword_180136550 )
      {
        v4 = v6;
        v5 = 1;
      }
      ++v6;
      v7 += 2;
    }
    while ( v6 < 0x18 );
    if ( v5 )
    {
      *((_DWORD *)&ControllerProcessor::s_controllerCurrentKeyMap + 2 * v4) = 8;
      *((_WORD *)&ControllerProcessor::s_controllerCurrentKeyMap + 4 * v4 + 2) = a2;
    }
    else
    {
      return (unsigned int)-2147467259;
    }
  }
  return v2;
}
