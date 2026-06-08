/*
 * XREFs of EvtDriverUnload @ 0x1C001AA40
 * Callers:
 *     DriverEntry @ 0x1C0030130 (DriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS EvtDriverUnload()
{
  NTSTATUS result; // eax

  if ( ProcLibEtwRegistered )
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0011060 = 0;
    result = EtwUnregister(ProcLibEtwHandle);
    ProcLibEtwRegistered = 0;
  }
  return result;
}
