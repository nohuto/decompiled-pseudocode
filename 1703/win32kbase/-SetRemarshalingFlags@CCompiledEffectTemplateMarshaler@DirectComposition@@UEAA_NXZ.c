/*
 * XREFs of ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0144D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C0002D30 (-ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143810 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  unsigned int v2; // edx

  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  DirectComposition::CCompiledEffectTemplateMarshaler::ClearSynchronizationEvents(this, v2);
  *((_DWORD *)this + 4) &= ~0x40u;
  return 1;
}
