/*
 * XREFs of ?GetRuntimeClassName@HolographicPositioner@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800D7600
 * Callers:
 *     ?GetRuntimeClassName@HolographicPositioner@@WIA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E1940 (-GetRuntimeClassName@HolographicPositioner@@WIA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@HolographicPositioner@@WII@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E1BC0 (-GetRuntimeClassName@HolographicPositioner@@WII@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@HolographicPositioner@@WJA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800E1E20 (-GetRuntimeClassName@HolographicPositioner@@WJA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall HolographicPositioner::GetRuntimeClassName(HolographicPositioner *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Holographic.HolographicViewHostItemSource", 0x40u, a2);
}
