/*
 * XREFs of RtlIsMultiSessionSku @ 0x140560330
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14014B8CC (OpenGlobalizationUserSettingsKey.c)
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405600D0 (SepIsImpersonationAllowedDueToCapability.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1405A6C14 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x1406E9770 (RtlCapabilityCheck.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  int v0; // eax

  if ( PsIsCurrentThreadInServerSilo() )
    LOBYTE(v0) = *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 134) + 28LL);
  else
    return (MEMORY[0xFFFFF780000002F0] >> 8) & 1;
  return v0;
}
