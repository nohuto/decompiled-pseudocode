/*
 * XREFs of rimFreeQDCActivePathsData @ 0x1C00086BC
 * Callers:
 *     RIMFindMonitorForDigitizer @ 0x1C0008644 (RIMFindMonitorForDigitizer.c)
 *     rimGetQDCActivePathsData @ 0x1C0009A20 (rimGetQDCActivePathsData.c)
 *     RIMOnMonitorNotification @ 0x1C0009AF0 (RIMOnMonitorNotification.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C009AE08 (RIMEnumerateDevicesForTelemetry.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C0107CA0 (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall rimFreeQDCActivePathsData(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = a1[2];
    if ( v2 )
      Win32FreePool(v2);
    v3 = a1[1];
    if ( v3 )
      Win32FreePool(v3);
    result = 0LL;
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
