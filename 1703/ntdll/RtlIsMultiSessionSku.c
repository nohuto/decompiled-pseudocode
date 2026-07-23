/*
 * XREFs of RtlIsMultiSessionSku @ 0x18006EB40
 * Callers:
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  int v0; // eax

  if ( RtlGetCurrentServiceSessionId() )
    LOBYTE(v0) = NtCurrentPeb()->SharedData->IsMultiSessionSku;
  else
    return (MEMORY[0x7FFE02F0] >> 8) & 1;
  return v0;
}
