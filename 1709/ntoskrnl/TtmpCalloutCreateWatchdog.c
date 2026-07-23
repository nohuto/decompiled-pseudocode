/*
 * XREFs of TtmpCalloutCreateWatchdog @ 0x14070D9DC
 * Callers:
 *     TtmpStartCallout @ 0x14070DFD4 (TtmpStartCallout.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 */

NTSTATUS __fastcall TtmpCalloutCreateWatchdog(__int64 a1)
{
  _DWORD InputBuffer[26]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1 )
    return -1073741670;
  memset(InputBuffer, 0, 0x60uLL);
  InputBuffer[0] = 21;
  return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, (PVOID)(a1 + 24), 8u);
}
