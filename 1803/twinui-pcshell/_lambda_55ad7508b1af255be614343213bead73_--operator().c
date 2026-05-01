/*
 * XREFs of _lambda_55ad7508b1af255be614343213bead73_::operator() @ 0x18011DEDC
 * Callers:
 *     _lambda_cc443415f5ecfa248de51aa242c4a017_::operator() @ 0x180003950 (_lambda_cc443415f5ecfa248de51aa242c4a017_--operator().c)
 *     wil::details::ScopeExitFn__lambda_55ad7508b1af255be614343213bead73___::_ScopeExitFn__lambda_55ad7508b1af255be614343213bead73___ @ 0x18011D8C8 (wil--details--ScopeExitFn__lambda_55ad7508b1af255be614343213bead73___--_ScopeExitFn__lambda_55ad.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall lambda_55ad7508b1af255be614343213bead73_::operator()(HWND **a1)
{
  RemovePropW(**a1, L"TryPositionView");
  RemovePropW(**a1, L"TryPositionView.Left");
  RemovePropW(**a1, L"TryPositionView.Top");
  RemovePropW(**a1, L"TryPositionView.Right");
  RemovePropW(**a1, L"TryPositionView.Bottom");
  return RemovePropW(**a1, L"TryPositionView.Flags");
}
