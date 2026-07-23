/*
 * XREFs of TtmpCalloutDestroyWatchdog @ 0x1407711A8
 * Callers:
 *     TtmpStopCallout @ 0x140771884 (TtmpStopCallout.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 */

NTSTATUS __fastcall TtmpCalloutDestroyWatchdog(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS result; // eax
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    if ( v1 )
    {
      memset(InputBuffer, 0, 0x60uLL);
      *(_QWORD *)(a1 + 24) = 0LL;
      LODWORD(InputBuffer[0]) = 21;
      LOBYTE(InputBuffer[11]) = 1;
      InputBuffer[1] = v1;
      return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    }
  }
  return result;
}
