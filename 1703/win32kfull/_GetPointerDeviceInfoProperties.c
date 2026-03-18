/*
 * XREFs of _GetPointerDeviceInfoProperties @ 0x1C0023504
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C00231A0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDevice @ 0x1C0135E30 (NtUserGetPointerDevice.c)
 * Callees:
 *     ?GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00235B0 (-GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     PHIDTtoPT @ 0x1C0023614 (PHIDTtoPT.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C0023644 (RtlStringCbCopyUnicodeString.c)
 */

__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // esi
  struct tagHID_POINTER_DEVICE_INFO *v5; // rcx
  __int16 v6; // ax

  if ( *(_QWORD *)(a2 + 304) )
  {
    v4 = RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)(a1 + 38), 0x410uLL, (PCUNICODE_STRING)(a2 + 296));
  }
  else
  {
    *(_WORD *)(a1 + 38) = 0;
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 712);
    *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2);
    *(_QWORD *)(a1 + 24) = GetPointerDeviceMonitor(v5);
    v6 = *(_WORD *)(a2 + 696);
    if ( *(_DWORD *)(a2 + 24) == 7 )
      --v6;
    *(_WORD *)(a1 + 36) = v6;
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 1592) + 4LL);
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 700);
  }
  return (unsigned int)v4;
}
