/*
 * XREFs of RtlIsMultiSessionSku @ 0x180044370
 * Callers:
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1800867B0 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->IsMultiSessionSku;
  else
    return MEMORY[0x7FFE02F1] & 1;
}
