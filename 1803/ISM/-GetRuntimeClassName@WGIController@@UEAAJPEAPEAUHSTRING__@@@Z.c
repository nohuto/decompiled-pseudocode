/*
 * XREFs of ?GetRuntimeClassName@WGIController@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180077E40
 * Callers:
 *     ?GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18007ADC0 (-GetRuntimeClassName@WGIController@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18007AE70 (-GetRuntimeClassName@WGIController@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18007AF40 (-GetRuntimeClassName@WGIController@@WCI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18007B000 (-GetRuntimeClassName@WGIController@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WGIController::GetRuntimeClassName(WGIController *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"WGIController", 0xDu, a2);
}
