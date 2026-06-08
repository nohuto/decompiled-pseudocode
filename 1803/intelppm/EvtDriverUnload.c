/*
 * XREFs of EvtDriverUnload @ 0x1C0029E50
 * Callers:
 *     DriverEntry @ 0x1C0037250 (DriverEntry.c)
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
    dword_1C0015060 = 0;
    result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink);
    ProcLibEtwRegistered = 0;
  }
  return result;
}
