/*
 * XREFs of TemplateEventDescriptor @ 0x1C004FC60
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0051340 (ndisWnfPdcCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS TemplateEventDescriptor()
{
  return EtwWrite(
           Microsoft_Windows_NDISHandle,
           &EnteringConnectedStandby,
           &GUID_00000000_0000_0000_0000_000000000000,
           0,
           0LL);
}
