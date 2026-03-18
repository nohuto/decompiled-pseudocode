/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x1C010FDF0
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z @ 0x1C01A7F84 (-ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z.c)
 * Callees:
 *     GreMovePointer @ 0x1C00BC9F0 (GreMovePointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ApplyGatheredDeviceInfoSummaryInformation(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // ebx

  v6 = 0;
  if ( !a1 )
  {
LABEL_4:
    UpdateTPCurrentActiveState();
    if ( a2 )
    {
      if ( !gnMice )
      {
        gdwGTERMFlags |= 1u;
        *(_DWORD *)(gpsi + 1956LL) = 1;
        SetGlobalCursorLevel(0);
        GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), *(_DWORD *)(gpsi + 5368LL), *(_DWORD *)(gpsi + 5372LL), 1);
      }
    }
    else if ( gnMice )
    {
      gdwGTERMFlags &= ~1u;
      *(_DWORD *)(gpsi + 1956LL) = 0;
      SetGlobalCursorLevel(-1);
      if ( (gdwMitConfig & 1) != 0 )
        ForceResetMouseButtonsDownState();
      else
        gwMouseOwnerButton = 0;
    }
    if ( !a1 )
    {
      LOBYTE(v6) = a4 != 0;
      *(_DWORD *)(gpsi + 2052LL) = a3;
      *(_DWORD *)(gpsi + 2180LL) = v6;
      *(_DWORD *)(gpsi + 2244LL) = a5;
    }
    gnMice = a2;
    return;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
    goto LABEL_4;
  }
  if ( a6 > gnKeyboards )
  {
    UpdateKeyLights(0LL);
    gdwUpdateKeyboard |= 1u;
  }
  gnKeyboards = a6;
}
