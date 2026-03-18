/*
 * XREFs of ?Startup@@YAJXZ @ 0x1800CE7C4
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800CEF68 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x1800CE85C (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 *     ?Initialize@OSInfo@@SAXXZ @ 0x1800CEF04 (-Initialize@OSInfo@@SAXXZ.c)
 */

__int64 Startup(void)
{
  HDC DC; // rax
  HDC v1; // rbx

  OSInfo::Initialize();
  QueryPerformanceFrequency(&g_qpcFrequency);
  CCommonRegistryData::InitializeFromRegistry();
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
