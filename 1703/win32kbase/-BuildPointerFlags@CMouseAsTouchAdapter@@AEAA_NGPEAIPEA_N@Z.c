/*
 * XREFs of ?BuildPointerFlags@CMouseAsTouchAdapter@@AEAA_NGPEAIPEA_N@Z @ 0x1C0132528
 * Callers:
 *     ?ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z @ 0x1C0132840 (-ProcessMouseInput@CMouseAsTouchAdapter@@AEAAXPEAUDEVICEINFO@@U_MOUSE_INPUT_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMouseAsTouchAdapter::BuildPointerFlags(
        CMouseAsTouchAdapter *this,
        char a2,
        unsigned int *a3,
        bool *a4)
{
  char v4; // r10
  bool v5; // al
  __int16 v6; // ax

  v4 = 1;
  *a4 = 0;
  *a3 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = *(_BYTE *)this != 0;
    *(_BYTE *)this = 1;
    *a4 = v5;
    v6 = *((_WORD *)this + 8);
    *a3 = 65558;
    *((_WORD *)this + 8) = (v6 - 1) & 1;
  }
  else if ( (a2 & 2) != 0 )
  {
    *a3 = 0x40000;
    *(_BYTE *)this = 0;
  }
  else if ( *(_BYTE *)this )
  {
    *a3 = 131094;
  }
  else
  {
    return 0;
  }
  return v4;
}
