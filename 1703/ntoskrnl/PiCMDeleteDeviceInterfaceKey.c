/*
 * XREFs of PiCMDeleteDeviceInterfaceKey @ 0x1406A4A2C
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     PiAuDoesClientHaveAccess @ 0x1404E4EB0 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404E6BA8 (PiCMReturnBasicResultData.c)
 *     PiCMReleaseObjectInputData @ 0x1404E850C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404E8E44 (PiCMCaptureObjectInputData.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x14073A4E4 (_CmDeleteDeviceInterfaceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceInterfaceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int v9; // r9d
  int v10; // eax
  char v12[4]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+34h] [rbp-34h]
  int v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-1Ch]
  int v17; // [rsp+50h] [rbp-18h]

  *a6 = 0;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, v12);
  if ( v8 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v15 && !v13 && v14 == 4 && !v16 && a3 && a4 >= 8 )
        v10 = CmDeleteDeviceInterfaceRegKey(PiPnpRtlCtx, v15, 50, v9, 1);
      else
        v10 = -1073741811;
    }
    else
    {
      v10 = -1073741790;
    }
    v8 = PiCMReturnBasicResultData(v10, v17, a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)v12);
  return (unsigned int)v8;
}
