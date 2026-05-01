/*
 * XREFs of ?GetApplicationId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800514D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CImmersiveApp::GetApplicationId(LPCWSTR *this, unsigned __int16 **a2)
{
  return SHStrDupW(this[54], a2);
}
