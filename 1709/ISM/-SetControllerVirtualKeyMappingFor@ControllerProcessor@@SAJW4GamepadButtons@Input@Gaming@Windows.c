/*
 * XREFs of ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x18003E134
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003C07C (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x18003C650 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall ControllerProcessor::SetControllerVirtualKeyMappingFor(__int64 a1, __int16 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // r10d
  int v5; // r9d
  unsigned int v6; // eax
  _DWORD *v7; // rdx

  v2 = 0;
  v4 = 0;
  LOBYTE(a1) = 0;
  if ( dword_18010F130 == 8 )
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 152;
LABEL_4:
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 12, v5, v2);
    }
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
      if ( !(_BYTE)a1 && *v7 == dword_18010F130 )
      {
        v4 = v6;
        LOBYTE(a1) = 1;
      }
      ++v6;
      v7 += 2;
    }
    while ( v6 < 0x18 );
    if ( (_BYTE)a1 )
    {
      *((_DWORD *)&ControllerProcessor::s_controllerCurrentKeyMap + 2 * v4) = 8;
      *((_WORD *)&ControllerProcessor::s_controllerCurrentKeyMap + 4 * v4 + 2) = a2;
      return v2;
    }
    v2 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 182;
      goto LABEL_4;
    }
  }
  return v2;
}
