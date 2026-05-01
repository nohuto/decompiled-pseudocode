/*
 * XREFs of ?PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ @ 0x180055360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::PrepareEnsuredViewForShow(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
    (char *)this + 152,
    2LL,
    *(_BYTE *)(*((_QWORD *)this + 37) + 714LL) != 0 ? 0x20 : 0);
}
