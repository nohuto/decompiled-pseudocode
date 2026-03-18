/*
 * XREFs of ?Startup@@YAJXZ @ 0x1800C6E38
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800C6BF8 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?Initialize@CEnergyReporter@@SAXXZ @ 0x1800C6ED4 (-Initialize@CEnergyReporter@@SAXXZ.c)
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800C6F18 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 *     ?Initialize@OSInfo@@SAXXZ @ 0x1800C7558 (-Initialize@OSInfo@@SAXXZ.c)
 */

__int64 Startup(void)
{
  HDC DC; // rax
  HDC v1; // rbx

  OSInfo::Initialize();
  QueryPerformanceFrequency(&g_qpcFrequency);
  CCommonRegistryData::InitializeFromRegistry();
  CEnergyReporter::Initialize();
  DC = GetDC(0LL);
  v1 = DC;
  if ( DC )
  {
    g_DesktopDpiX = (float)GetDeviceCaps(DC, 88);
    g_DesktopDpiY = (float)GetDeviceCaps(v1, 90);
    ReleaseDC(0LL, v1);
  }
  if ( g_DesktopDpiX <= 0.0 || g_DesktopDpiY <= 0.0 )
  {
    g_DesktopDpiX = 96.0;
    g_DesktopDpiY = 96.0;
  }
  return 0LL;
}
