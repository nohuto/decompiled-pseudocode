/*
 * XREFs of ?SetForcedVisibilityWhileEnsured@CImmersiveApp@@UEAAX_N@Z @ 0x1800530F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::SetForcedVisibilityWhileEnsured(CImmersiveApp *this, char a2)
{
  char *v2; // rcx

  v2 = (char *)this + 136;
  if ( a2 )
    CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v2, 2LL, 3LL);
  else
    CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v2, 3LL);
}
