/*
 * XREFs of ?GetRuntimeClassName@MPCManagerClient@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180027B70
 * Callers:
 *     ?GetRuntimeClassName@MPCManagerClient@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180027710 (-GetRuntimeClassName@MPCManagerClient@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall MPCManagerClient::GetRuntimeClassName(MPCManagerClient *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Input.MPCManager.MPCManagerClient", 0x32u, a2);
}
