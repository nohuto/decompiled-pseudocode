/*
 * XREFs of ?LoadScalingOverrides@@YAXXZ @ 0x1800353F0
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18003509C (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180035248 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800A1C38 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     <none>
 */

void LoadScalingOverrides(void)
{
  int v0; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
  {
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
      L"LegacyAppScaleFactor",
      0x20000018u,
      0LL,
      &g_legacyCompatScalingOverride,
      &pcbData);
  }
  if ( !g_windowOverride )
  {
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
      L"WindowOverride",
      0x20000018u,
      0LL,
      &g_windowOverride,
      &pcbData);
    v0 = g_windowOverride;
    if ( !g_windowOverride )
      v0 = 100;
    g_windowOverride = v0;
  }
}
