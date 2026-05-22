/*
 * XREFs of ?SetValueForKey@?$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBGAEBUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180036634
 * Callers:
 *     ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x180032C40 (-OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z @ 0x18003594C (-SetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@G_N1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned short,ControllerProcessor::ActiveKeyProperties,24>::SetValueForKey(
        _WORD *a1,
        _WORD *a2,
        _BYTE *a3)
{
  unsigned int v3; // r9d
  __int16 v4; // si
  _WORD *v5; // r10
  unsigned int v6; // ebp
  char v7; // bl
  char v8; // r11
  unsigned int v9; // eax

  v3 = 0;
  v4 = a1[48];
  v5 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *a2 == v4 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v9 = 0;
    while ( *a1 != *a2 )
    {
      if ( !v8 && *a1 == v4 )
      {
        v6 = v9;
        v8 = 1;
      }
      ++v9;
      a1 += 2;
      if ( v9 >= 0x18 )
        goto LABEL_11;
    }
    v7 = 1;
    LOBYTE(v5[2 * v9 + 1]) = *a3;
LABEL_11:
    if ( !v7 )
    {
      if ( v8 )
      {
        v5[2 * v6] = *a2;
        LOBYTE(v5[2 * v6 + 1]) = *a3;
      }
      else
      {
        return (unsigned int)-2147467259;
      }
    }
  }
  return v3;
}
