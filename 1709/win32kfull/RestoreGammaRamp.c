/*
 * XREFs of RestoreGammaRamp @ 0x1C00F6040
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C00F61D8 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     GreSetDeviceGammaRamp @ 0x1C00F6708 (GreSetDeviceGammaRamp.c)
 */

__int64 __fastcall RestoreGammaRamp(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  HDC v6; // rcx

  for ( i = 0; i < *a1; ++i )
  {
    v5 = 386LL * i;
    v6 = *(HDC *)&a1[v5 + 386];
    if ( v6 )
    {
      GreSetDeviceGammaRamp(v6, &a1[v5 + 388], 0, 1);
      GreMarkDeletableDC(*(_QWORD *)&a1[v5 + 386]);
      GreDeleteDC(*(_QWORD *)&a1[v5 + 386]);
    }
  }
  return Win32FreePool(a1, a2, a3);
}
