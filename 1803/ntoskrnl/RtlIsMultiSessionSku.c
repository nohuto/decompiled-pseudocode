/*
 * XREFs of RtlIsMultiSessionSku @ 0x140509250
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x14016A300 (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405091A8 (SepIsImpersonationAllowedDueToCapability.c)
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1406312F8 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x140784D70 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140785010 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 138) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
