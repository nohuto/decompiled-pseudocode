/*
 * XREFs of PiCMGetDeviceDepth @ 0x1406A5670
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     PiGetDeviceDepth @ 0x14044CAE8 (PiGetDeviceDepth.c)
 *     _CmValidateDeviceName @ 0x140483E80 (_CmValidateDeviceName.c)
 *     PiCMReleaseObjectInputData @ 0x1404E850C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404E8E44 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnDepthResultData @ 0x1406A5B5C (PiCMReturnDepthResultData.c)
 */

__int64 __fastcall PiCMGetDeviceDepth(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // edi
  int inited; // eax
  const WCHAR *v13; // r10
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  char v16[4]; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+44h] [rbp-2Ch]
  int v18; // [rsp+48h] [rbp-28h]
  _WORD *v19; // [rsp+50h] [rbp-20h]
  int v20; // [rsp+5Ch] [rbp-14h]
  unsigned int v21; // [rsp+60h] [rbp-10h]

  v6 = a6;
  v9 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, v16);
  if ( v11 >= 0 )
  {
    if ( v19 && !v17 && v18 == 1 && !v20 && a3 && a4 >= 0xC )
    {
      inited = CmValidateDeviceName(v10, v19);
      if ( inited >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v13);
        if ( inited >= 0 )
        {
          inited = PiGetDeviceDepth((__int64)&DestinationString, &a6);
          v9 = (unsigned int)a6;
        }
      }
    }
    else
    {
      inited = -1073741811;
    }
    v11 = PiCMReturnDepthResultData((unsigned int)inited, v9, v21, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v16);
  return (unsigned int)v11;
}
