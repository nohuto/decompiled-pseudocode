/*
 * XREFs of ?GetRuntimeClassName@WGIController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18009EDD0
 * Callers:
 *     ?GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800A2880 (-GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800A2950 (-GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800A2A20 (-GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800A2AF0 (-GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WGIController::GetRuntimeClassName(WGIController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"WGIController", 0xDu, a2);
}
