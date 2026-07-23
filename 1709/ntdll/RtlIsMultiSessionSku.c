/*
 * XREFs of RtlIsMultiSessionSku @ 0x18007DF90
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18004D3CC (OpenGlobalizationUserSettingsKey.c)
 *     RtlCapabilityCheck @ 0x1800538D0 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180089F90 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 28);
  else
    return MEMORY[0x7FFE02F1] & 1;
}
