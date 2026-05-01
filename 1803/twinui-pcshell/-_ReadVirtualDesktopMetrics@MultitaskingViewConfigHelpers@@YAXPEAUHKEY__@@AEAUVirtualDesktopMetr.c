/*
 * XREFs of ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1802806DC
 * Callers:
 *     ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x18027F7A8 (-GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConf.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x18027F5E0 (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x18027F618 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ?_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopNewButtonMetrics@@@Z @ 0x18028032C (-_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDe.c)
 *     ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z @ 0x180280484 (-_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z.c)
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x1802804FC (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadVirtualDesktopMetrics(
        MultitaskingViewConfigHelpers *this,
        float *a2,
        struct VirtualDesktopMetrics *a3,
        unsigned int *a4)
{
  unsigned int *v6; // r9
  struct _MARGINS *v7; // r9
  unsigned int *v8; // r9
  unsigned int *v9; // r9
  struct _MARGINS *v10; // r9
  unsigned int *v11; // r9
  unsigned int *v12; // r9
  unsigned int *v13; // r9
  struct VirtualDesktopNewButtonMetrics *v14; // r8
  unsigned int *v15; // r9
  struct GlyphButtonMetrics *v16; // r9
  int v17; // [rsp+38h] [rbp+10h] BYREF

  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_background_singledesktop_opacity",
    a2,
    a4);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_background_multidesktop_opacity",
    a2 + 2,
    v6);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1803B2300,
    (unsigned __int16 *)a2 + 8,
    v7);
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_1803B2330,
         (unsigned __int16 *)&v17,
         v8) >= 0 )
    *((_DWORD *)a2 + 8) = v17;
  if ( MultitaskingViewConfigHelpers::_ReadRegistryValue(
         this,
         (const WCHAR *)&stru_1803B2368,
         (unsigned __int16 *)&v17,
         v9) >= 0 )
    *((_DWORD *)a2 + 9) = v17;
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
    this,
    (__int64)&stru_1803B2398,
    (unsigned __int16 *)a2 + 20,
    v10);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
    this,
    (HKEY)L"Desktop_click_scale",
    (double *)a2 + 7,
    v11);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_inactive_overlay_opacity",
    a2 + 16,
    v12);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<float>(
    this,
    (HKEY)L"Desktop_text_inactive_opacity",
    a2 + 22,
    v13);
  MultitaskingViewConfigHelpers::_ReadNewVirtualDesktopButtonMetrics(this, (HKEY)a2 + 78, v14, v15);
  MultitaskingViewConfigHelpers::_ReadGlyphButtonMetrics(
    this,
    (__int64)&stru_1803B20C8,
    (unsigned __int16 *)a2 + 184,
    v16);
}
