/*
 * XREFs of ?GetRuntimeClassName@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18001BF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::LaunchOperation *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_LaunchOperation", 0x44u, a2);
}
