/*
 * XREFs of ?SetForcedVisibilityWhileEnsured@CImmersiveApp@@UEAAX_N@Z @ 0x1801306A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::SetForcedVisibilityWhileEnsured(CImmersiveApp *this, char a2, __int64 a3)
{
  CImmersiveApp::CImmersiveWindowCollection *v3; // rcx

  v3 = (CImmersiveApp *)((char *)this + 152);
  if ( a2 )
    CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v3, 2LL, 3LL);
  else
    CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v3, 3LL, a3);
}
