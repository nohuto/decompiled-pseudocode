/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C0105F10
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000EDD0 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 */

__int64 __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        int a3,
        _DWORD *a4)
{
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v8 = RIMGetQDCActivePathsData(v12);
  rimFindMonitorForDigitizerWithQDCData((__int64)a1, (__int64)v8, a4);
  if ( a3 )
    RIMSetDeviceOutputConfig(a1, a2, 1u, (__int64)v8);
  return RIMFreeQDCActivePathsData(v8, v9, v10);
}
