/*
 * XREFs of ?IsPPIAppLaunchHwndCheckEnabled@@YA_NXZ @ 0x1802D9488
 * Callers:
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x1802D9594 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool IsPPIAppLaunchHwndCheckEnabled(void)
{
  int v0; // eax
  DWORD v2; // [rsp+50h] [rbp+8h] BYREF
  DWORD v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF

  v0 = dword_180439A58;
  if ( !dword_180439A58 )
  {
    v3 = 0;
    v2 = 4;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\FlightedFeatures",
           L"PPIAppLaunchHwndCheck",
           0x10010u,
           &v3,
           &v4,
           &v2) )
    {
      v0 = 2;
    }
    else
    {
      v0 = (v4 != 1) + 1;
    }
    dword_180439A58 = v0;
  }
  return v0 == 1;
}
