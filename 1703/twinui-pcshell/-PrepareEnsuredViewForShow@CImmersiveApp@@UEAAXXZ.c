/*
 * XREFs of ?PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ @ 0x1800530C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::PrepareEnsuredViewForShow(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
    (char *)this + 136,
    2LL,
    *(_BYTE *)(*((_QWORD *)this + 35) + 674LL) != 0 ? 0x20 : 0);
}
