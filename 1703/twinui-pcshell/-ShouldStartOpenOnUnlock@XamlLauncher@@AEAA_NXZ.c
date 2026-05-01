/*
 * XREFs of ?ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ @ 0x18014B308
 * Callers:
 *     ?OnIdleStateChanged@XamlLauncher@@UEAAJH@Z @ 0x18014B420 (-OnIdleStateChanged@XamlLauncher@@UEAAJH@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartOpenOnUnlockSuppressedForScreenReader@StartWindowTelemetry@@SAXXZ @ 0x180148DB4 (-StartOpenOnUnlockSuppressedForScreenReader@StartWindowTelemetry@@SAXXZ.c)
 *     ?IsVisible@XamlLauncher@@UEAAJPEAH@Z @ 0x18014AA70 (-IsVisible@XamlLauncher@@UEAAJPEAH@Z.c)
 *     IsScreenReaderPresent @ 0x18014B1D8 (IsScreenReaderPresent.c)
 *     ??$StartShouldOpenOnUnlock@AEAKAEBI@StartWindowTelemetry@@SAXAEAKAEBI@Z @ 0x18014F5D4 (--$StartShouldOpenOnUnlock@AEAKAEBI@StartWindowTelemetry@@SAXAEAKAEBI@Z.c)
 *     IsStartScreenFilterEnabled @ 0x1801913A8 (IsStartScreenFilterEnabled.c)
 */

char __fastcall XamlLauncher::ShouldStartOpenOnUnlock(XamlLauncher *this)
{
  char v2; // bl
  int IsVisible; // eax
  DWORD v4; // eax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  IsVisible = XamlLauncher::IsVisible((XamlLauncher *)((char *)this + 16), &v9);
  if ( IsVisible >= 0 )
  {
    if ( !v9 )
    {
      v4 = `IsPPIEdition'::`2'::s_dwProductType;
      if ( !`IsPPIEdition'::`2'::s_dwProductType )
      {
        GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
        v4 = 0;
        `IsPPIEdition'::`2'::s_dwProductType = 0;
      }
      if ( v4 != 119 && !(unsigned int)IsStartScreenFilterEnabled() )
      {
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
        v5 = *((_QWORD *)this + 29);
        v6 = (SystemTimeAsFileTime.dwLowDateTime + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32) - v5)
           / 0x989680;
        v9 = v6;
        if ( SystemTimeAsFileTime.dwLowDateTime + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32) >= v5
          && (unsigned int)v6 >= *((_DWORD *)this + 60) )
        {
          v2 = 1;
          if ( !IsScreenReaderPresent() )
          {
            StartWindowTelemetry::StartShouldOpenOnUnlock<unsigned long &,unsigned int const &>((char *)this + 240, &v9);
            return v2;
          }
          StartWindowTelemetry::StartOpenOnUnlockSuppressedForScreenReader();
        }
        return 0;
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x180,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)IsVisible);
  }
  return v2;
}
