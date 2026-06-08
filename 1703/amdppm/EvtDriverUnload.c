/*
 * XREFs of EvtDriverUnload @ 0x1C0017A50
 * Callers:
 *     DriverEntry @ 0x1C002D140 (DriverEntry.c)
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
