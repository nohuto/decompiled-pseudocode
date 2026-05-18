/*
 * XREFs of ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x1800022D4
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000272C (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     IsEnumDisplayDevicesWPresent @ 0x180007DDC (IsEnumDisplayDevicesWPresent.c)
 */

char __fastcall GetPrimaryDisplayDeviceInfo(PDISPLAY_DEVICEW lpDisplayDevice)
{
  DWORD v2; // edi
  DWORD i; // edx

  if ( (unsigned __int8)IsEnumDisplayDevicesWPresent() )
  {
    v2 = 0;
    lpDisplayDevice->cb = 840;
    for ( i = 0; EnumDisplayDevicesW(0LL, i, lpDisplayDevice, 2u); i = v2 )
    {
      if ( (lpDisplayDevice->StateFlags & 5) == 5 )
        return 1;
      ++v2;
    }
  }
  return 0;
}
