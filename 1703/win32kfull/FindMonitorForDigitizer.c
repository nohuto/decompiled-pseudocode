/*
 * XREFs of FindMonitorForDigitizer @ 0x1C01A6B50
 * Callers:
 *     EnsurePointerDeviceHasMonitor @ 0x1C0104B30 (EnsurePointerDeviceHasMonitor.c)
 *     _SetDisplayMapping @ 0x1C01A7E94 (_SetDisplayMapping.c)
 * Callees:
 *     FindMonitorForDigitizerWithQDCData @ 0x1C01A6BD0 (FindMonitorForDigitizerWithQDCData.c)
 *     FreeQDCActivePathsData @ 0x1C01A7168 (FreeQDCActivePathsData.c)
 *     GetQDCActivePathsData @ 0x1C01A7350 (GetQDCActivePathsData.c)
 */

__int64 __fastcall FindMonitorForDigitizer(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  _BYTE *v2; // rbx
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = v4;
  if ( (int)GetQDCActivePathsData(v4) < 0 )
    v2 = 0LL;
  FindMonitorForDigitizerWithQDCData(a1);
  return FreeQDCActivePathsData(v2);
}
