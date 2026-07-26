/*
 * XREFs of ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00B36A4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B3F70 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Ndis::BindState::GetActualBindingState(Ndis::BindState *this)
{
  bool result; // al

  result = 0;
  if ( !this->PretendBindingActive )
    return this->m_bindContext.m_numElements == 0;
  return result;
}
