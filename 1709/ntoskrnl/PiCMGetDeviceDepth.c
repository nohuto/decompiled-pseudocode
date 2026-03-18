/*
 * XREFs of PiCMGetDeviceDepth @ 0x140451DE0
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     PiCMReturnDepthResultData @ 0x140451EC4 (PiCMReturnDepthResultData.c)
 *     _CmValidateDeviceName @ 0x140521BB0 (_CmValidateDeviceName.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     PiGetDeviceDepth @ 0x14058B5B8 (PiGetDeviceDepth.c)
 */

__int64 __fastcall PiCMGetDeviceDepth(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v6; // r15
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // edi
  NTSTATUS inited; // eax
  const WCHAR *v13; // r11
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v16[4]; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+44h] [rbp-2Ch]
  int v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-20h]
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
          inited = PiGetDeviceDepth(&DestinationString, &a6);
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
  PiCMReleaseObjectInputData(v16);
  return (unsigned int)v11;
}
