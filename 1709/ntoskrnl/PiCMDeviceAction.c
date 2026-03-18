/*
 * XREFs of PiCMDeviceAction @ 0x14044E39C
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     PiQueueDeviceRequest @ 0x14044E618 (PiQueueDeviceRequest.c)
 *     PiCMSetProblem @ 0x14044E740 (PiCMSetProblem.c)
 *     _CmValidateDeviceName @ 0x140521BB0 (_CmValidateDeviceName.c)
 *     _CmGetDeviceStatus @ 0x140529914 (_CmGetDeviceStatus.c)
 *     PiCMReturnBasicResultData @ 0x14052FF90 (PiCMReturnBasicResultData.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x140551BE8 (_CmIsRootDevice.c)
 *     PiAuDoesClientHavePrivilege @ 0x140574928 (PiAuDoesClientHavePrivilege.c)
 *     PiAuDoesClientHaveAccess @ 0x140574D38 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMDeviceAction(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  int v8; // r15d
  int v9; // esi
  NTSTATUS inited; // ebx
  const WCHAR *v11; // r14
  int v12; // r11d
  int v13; // r11d
  int v14; // r8d
  int v15; // edx
  NTSTATUS v16; // eax
  int v18; // r8d
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // edx
  int v23; // r8d
  int DeviceStatus; // [rsp+48h] [rbp-29h] BYREF
  int v25; // [rsp+4Ch] [rbp-25h] BYREF
  int v26; // [rsp+50h] [rbp-21h] BYREF
  int v27; // [rsp+54h] [rbp-1Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v29[4]; // [rsp+68h] [rbp-9h] BYREF
  int v30; // [rsp+6Ch] [rbp-5h]
  int v31; // [rsp+70h] [rbp-1h]
  PCWSTR SourceString; // [rsp+78h] [rbp+7h]
  int v33; // [rsp+84h] [rbp+13h]
  unsigned int v34; // [rsp+88h] [rbp+17h]

  v25 = 0;
  v27 = 0;
  *a6 = 0;
  v8 = 0;
  v26 = 0;
  v9 = 0;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, v29);
  if ( inited >= 0 )
  {
    v11 = SourceString;
    if ( !SourceString || v31 != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_26;
    }
    if ( v33 == 1 )
    {
      v9 = v30;
      if ( (unsigned int)(v30 - 1) > 5 )
        inited = -1073741811;
    }
    else
    {
      if ( v33 != 2 )
        goto LABEL_52;
      v8 = v30;
      if ( (unsigned int)(v30 - 1) > 1 )
        inited = -1073741811;
    }
    if ( inited < 0 )
      goto LABEL_26;
    inited = CmValidateDeviceName((unsigned int)(v33 - 1), SourceString);
    if ( inited < 0 )
      goto LABEL_26;
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_52;
      if ( (unsigned __int8)PiAuDoesClientHaveAccess(32LL) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
      {
        inited = RtlInitUnicodeStringEx(&DestinationString, v11);
        if ( inited < 0 )
          goto LABEL_26;
        v16 = PiQueueDeviceRequest((unsigned int)&DestinationString, 9, v23, v8 != 2, 0LL);
        goto LABEL_25;
      }
    }
    else
    {
      if ( v9 <= 0 )
        goto LABEL_52;
      if ( v9 > 2 )
      {
        if ( v9 > 6 )
          goto LABEL_52;
        if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited >= 0 )
          {
            v19 = v9 - 3;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( v21 != 1 )
                  {
                    inited = -1073741811;
                    DeviceStatus = -1073741811;
                    goto LABEL_26;
                  }
                  v22 = 24;
                }
                else
                {
                  v22 = 23;
                }
              }
              else
              {
                v22 = 22;
              }
            }
            else
            {
              v22 = 21;
            }
            inited = PiQueueDeviceRequest((unsigned int)&DestinationString, v22, v18, 1, (__int64)&DeviceStatus);
            if ( inited >= 0 )
              inited = DeviceStatus;
          }
LABEL_26:
          inited = PiCMReturnBasicResultData((unsigned int)inited, v34, a3, a4, a6);
          goto LABEL_27;
        }
      }
      else if ( (unsigned __int8)PiAuDoesClientHaveAccess(32LL) && (unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
      {
        if ( !(unsigned __int8)CmIsRootDevice(v11) )
        {
          DeviceStatus = CmGetDeviceStatus(
                           PiPnpRtlCtx,
                           (_DWORD)v11,
                           0,
                           (unsigned int)&v25,
                           (__int64)&v27,
                           (__int64)&v26);
          if ( DeviceStatus >= 0 )
          {
            if ( (v25 & 8) != 0 )
              goto LABEL_26;
            if ( (v25 & 0x400) != 0 )
            {
              inited = PiCMSetProblem(v11);
              if ( inited < 0 )
                goto LABEL_26;
            }
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited < 0 )
            goto LABEL_26;
          v15 = 16;
          if ( v9 != 1 )
            v15 = 12;
          v16 = PiQueueDeviceRequest((unsigned int)&DestinationString, v15, v14, 1, 0LL);
LABEL_25:
          inited = v16;
          goto LABEL_26;
        }
LABEL_52:
        inited = -1073741811;
        goto LABEL_26;
      }
    }
    inited = -1073741790;
    goto LABEL_26;
  }
LABEL_27:
  PiCMReleaseObjectInputData(v29);
  return (unsigned int)inited;
}
