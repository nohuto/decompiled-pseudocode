/*
 * XREFs of rimGetQDCActivePathsData @ 0x1C0009A20
 * Callers:
 *     RIMFindMonitorForDigitizer @ 0x1C0008644 (RIMFindMonitorForDigitizer.c)
 *     RIMOnMonitorNotification @ 0x1C0009AF0 (RIMOnMonitorNotification.c)
 *     RIMEnumerateDevicesForTelemetry @ 0x1C009AE08 (RIMEnumerateDevicesForTelemetry.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C0107CA0 (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C00086BC (rimFreeQDCActivePathsData.c)
 *     DrvQueryDisplayConfig @ 0x1C000D270 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000D3A0 (DrvGetDisplayConfigBufferSizes.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall rimGetQDCActivePathsData(_QWORD *a1)
{
  unsigned int *v1; // rsi
  int DisplayConfigBufferSizes; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8

  v1 = (unsigned int *)a1 + 1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(18LL, a1, (char *)a1 + 4);
  if ( DisplayConfigBufferSizes < 0 )
    goto LABEL_8;
  v4 = *(unsigned int *)a1;
  if ( (_DWORD)v4 )
  {
    a1[1] = Win32AllocPoolZInit(72 * v4);
    v5 = Win32AllocPoolZInit(72LL * *v1);
    v6 = a1[1];
    a1[2] = v5;
    if ( v6 && v5 )
      DisplayConfigBufferSizes = DrvQueryDisplayConfig(-2147483630, (_DWORD)a1, v6, (_DWORD)v1, v5, 0LL);
    else
      DisplayConfigBufferSizes = -1073741801;
  }
  if ( DisplayConfigBufferSizes < 0 )
LABEL_8:
    rimFreeQDCActivePathsData(a1);
  return (unsigned int)DisplayConfigBufferSizes;
}
