/*
 * XREFs of ?HidDeviceStartStop@@YAXXZ @ 0x1C00B128C
 * Callers:
 *     FreeProcessHidTable @ 0x1C00ADF38 (FreeProcessHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C00B0B10 (_RegisterRawInputDevices.c)
 * Callees:
 *     <none>
 */

void HidDeviceStartStop(void)
{
  PRKEVENT v0; // rbx
  struct _LIST_ENTRY *Flink; // rbx

  if ( (gdwMitConfig & 4) != 0 )
  {
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
  }
  else
  {
    v0 = aDeviceTemplate[153];
    if ( v0 )
    {
      Flink = v0[1].Header.WaitListHead.Flink;
      if ( Flink == (struct _LIST_ENTRY *)PsGetCurrentProcess(gdwMitConfig) )
        RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
      else
        KeSetEvent(aDeviceTemplate[185], 1, 0);
    }
  }
}
