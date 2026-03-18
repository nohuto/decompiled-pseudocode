/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C0023730
 * Callers:
 *     NtUserGetPointerDeviceProperties @ 0x1C00203A0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDevices @ 0x1C00231A0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C01341B0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C0135E30 (NtUserGetPointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 || (*(_DWORD *)(gptiCurrent + 1096LL) & 0x10000) != 0 )
    return 1;
  return v1;
}
