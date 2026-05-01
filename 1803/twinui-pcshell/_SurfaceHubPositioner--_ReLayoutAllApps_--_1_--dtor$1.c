/*
 * XREFs of _SurfaceHubPositioner::_ReLayoutAllApps_::_1_::dtor$1 @ 0x1802BD7C6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SurfaceHubPositioner::_ReLayoutAllApps_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)(a2 + 120));
}
