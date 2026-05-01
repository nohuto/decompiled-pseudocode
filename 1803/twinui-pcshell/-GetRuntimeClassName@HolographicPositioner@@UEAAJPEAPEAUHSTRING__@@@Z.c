/*
 * XREFs of ?GetRuntimeClassName@HolographicPositioner@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801AEC20
 * Callers:
 *     ?GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800A6B20 (-GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@HolographicPositioner@@WKA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800A6B30 (-GetRuntimeClassName@HolographicPositioner@@WKA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall HolographicPositioner::GetRuntimeClassName(HolographicPositioner *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Holographic.HolographicViewHostItemSource", 0x40u, a2);
}
