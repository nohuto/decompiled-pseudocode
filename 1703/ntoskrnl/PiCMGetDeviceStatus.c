/*
 * XREFs of PiCMGetDeviceStatus @ 0x1404E812C
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     _CmGetDeviceStatus @ 0x1404E7B28 (_CmGetDeviceStatus.c)
 *     PiCMReturnStatusResultData @ 0x1404E8078 (PiCMReturnStatusResultData.c)
 *     PiCMReleaseObjectInputData @ 0x1404E850C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404E8E44 (PiCMCaptureObjectInputData.c)
 */

__int64 __fastcall PiCMGetDeviceStatus(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v6; // r14
  int v9; // ebx
  unsigned int DeviceStatus; // ecx
  SIZE_T Length; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch] BYREF
  _BYTE v15[4]; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+4Ch] [rbp-24h]
  int v17; // [rsp+50h] [rbp-20h]
  const WCHAR *v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+64h] [rbp-Ch]
  int v20; // [rsp+68h] [rbp-8h]

  v6 = (_DWORD *)a6;
  v14 = 0;
  v13 = 0;
  *(_DWORD *)a6 = 0;
  LODWORD(a6) = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v15);
  if ( v9 >= 0 )
  {
    if ( v18 && !v16 && v17 == 1 && !v19 && a3 && a4 >= 0x14 )
      DeviceStatus = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v18, 0LL, &v14, &v13, &a6, Length);
    else
      DeviceStatus = -1073741811;
    LODWORD(Length) = a4;
    v9 = PiCMReturnStatusResultData(DeviceStatus, v14, v13, a6, v20, a3, Length, v6);
  }
  PiCMReleaseObjectInputData(v15);
  return (unsigned int)v9;
}
