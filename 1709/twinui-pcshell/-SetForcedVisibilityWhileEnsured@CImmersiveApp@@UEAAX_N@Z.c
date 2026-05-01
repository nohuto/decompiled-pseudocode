/*
 * XREFs of ?SetForcedVisibilityWhileEnsured@CImmersiveApp@@UEAAX_N@Z @ 0x180055390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::SetForcedVisibilityWhileEnsured(CImmersiveApp *this, char a2)
{
  char *v2; // rcx

  v2 = (char *)this + 152;
  if ( a2 )
    CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v2, 2LL, 3LL);
  else
    CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v2, 3LL);
}
