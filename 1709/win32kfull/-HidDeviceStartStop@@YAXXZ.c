/*
 * XREFs of ?HidDeviceStartStop@@YAXXZ @ 0x1C00C7AE4
 * Callers:
 *     FreeProcessHidTable @ 0x1C00C4B88 (FreeProcessHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C00C7368 (_RegisterRawInputDevices.c)
 * Callees:
 *     <none>
 */

void __fastcall HidDeviceStartStop(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx

  if ( (gdwMitConfig & 4) != 0 )
  {
    CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
  }
  else
  {
    v2 = aDeviceTemplate[153];
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 32);
      if ( v3 == PsGetCurrentProcess(gdwMitConfig, a2) )
        RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
      else
        KeSetEvent((PRKEVENT)aDeviceTemplate[185], 1, 0);
    }
  }
}
