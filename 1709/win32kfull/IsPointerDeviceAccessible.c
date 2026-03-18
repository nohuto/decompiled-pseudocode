/*
 * XREFs of IsPointerDeviceAccessible @ 0x1C00B15D0
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C00B1290 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00B3A10 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C0139010 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C013B660 (NtUserGetPointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPointerDeviceAccessible(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 || (*(_DWORD *)(gptiCurrent + 1184LL) & 0x10000) != 0 )
    return 1;
  return v1;
}
