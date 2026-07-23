/*
 * XREFs of RtlIsMultiSessionSku @ 0x140513550
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140153864 (OpenGlobalizationUserSettingsKey.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405132F0 (SepIsImpersonationAllowedDueToCapability.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1405D05F4 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x1407215D0 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140721870 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
