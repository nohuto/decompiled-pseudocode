/*
 * XREFs of PiCMQueryRemove @ 0x140737E40
 * Callers:
 *     PiCMHandleIoctl @ 0x14050A580 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     RtlGetActiveConsoleId @ 0x14006EAF0 (RtlGetActiveConsoleId.c)
 *     McTemplateK0z @ 0x1401857E8 (McTemplateK0z.c)
 *     McTemplateK0qz @ 0x14023D790 (McTemplateK0qz.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x140505C80 (_CmValidateDeviceName.c)
 *     PiCMReturnBufferResultData @ 0x14050A2B4 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x14050C488 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14050CA48 (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceStatus @ 0x140585D34 (_CmGetDeviceStatus.c)
 *     _CmIsRootDevice @ 0x140586738 (_CmIsRootDevice.c)
 *     PiAuDoesClientHaveAccess @ 0x1405C68D0 (PiAuDoesClientHaveAccess.c)
 *     PnpGetCallerSessionId @ 0x1407275C8 (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x1407298EC (PiAuCheckClientInteractive.c)
 *     PiAuDoesClientHavePrivilege @ 0x140729B48 (PiAuDoesClientHavePrivilege.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14073BAFC (PnpQueueQueryAndRemoveEvent.c)
 */

__int64 __fastcall PiCMQueryRemove(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  const wchar_t *v7; // r13
  int v8; // r12d
  unsigned int v9; // esi
  _WORD *v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // edi
  signed int DeviceRegProp; // ebx
  unsigned int v16; // eax
  unsigned int v17; // r14d
  _WORD *PoolWithTag; // rax
  int v19; // edi
  int v20; // edi
  unsigned int v21; // r8d
  int v22; // eax
  unsigned int v24; // [rsp+38h] [rbp-69h]
  char v25[4]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-45h] BYREF
  int v27; // [rsp+60h] [rbp-41h] BYREF
  ULONG SessionId; // [rsp+64h] [rbp-3Dh] BYREF
  int v29; // [rsp+68h] [rbp-39h] BYREF
  int v30; // [rsp+6Ch] [rbp-35h] BYREF
  int v31; // [rsp+70h] [rbp-31h] BYREF
  char v32[4]; // [rsp+74h] [rbp-2Dh] BYREF
  int v33; // [rsp+78h] [rbp-29h] BYREF
  int v34; // [rsp+7Ch] [rbp-25h] BYREF
  char v35[4]; // [rsp+80h] [rbp-21h] BYREF
  int v36; // [rsp+84h] [rbp-1Dh]
  int v37; // [rsp+88h] [rbp-19h]
  PCWSTR SourceString; // [rsp+90h] [rbp-11h]
  int v39; // [rsp+9Ch] [rbp-5h]
  int v40; // [rsp+A0h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+7h] BYREF

  v25[0] = 0;
  v7 = 0LL;
  SessionId = 0;
  *a6 = 0;
  v8 = 0;
  v9 = 0;
  v26 = 0;
  v10 = 0LL;
  v27 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, v35);
  if ( v12 < 0 )
    goto LABEL_62;
  v7 = SourceString;
  v14 = v39;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    McTemplateK0qz(v11, &KMPnPEvt_CfgMgr_QueryRemove_Start, v13, v39, SourceString);
  if ( !v7 || v37 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_55;
  }
  if ( !a3 || a4 < 0x14 )
    goto LABEL_24;
  DeviceRegProp = CmValidateDeviceName(v11, v7);
  if ( DeviceRegProp < 0 )
  {
LABEL_55:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_59;
    v21 = v26;
    goto LABEL_57;
  }
  if ( CmIsRootDevice(v7) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_59;
  }
  v16 = a4 - 20;
  v17 = 0;
  if ( v16 >= 2 )
    v17 = v16;
  if ( v17 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x34706E50u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_59;
    }
    *PoolWithTag = 0;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    if ( !PiAuDoesClientHaveAccess(0x20u) || !PiAuDoesClientHavePrivilege(0xAu) )
    {
      DeviceRegProp = -1073741790;
      goto LABEL_48;
    }
    if ( (v36 & 0xFFFFFFFE) == 0 )
    {
      v8 = v36 & 1;
      goto LABEL_48;
    }
    goto LABEL_24;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v30 = 4;
    v31 = 0;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v7,
                      0LL,
                      16,
                      (__int64)&v31,
                      (__int64)v32,
                      (__int64)&v30,
                      0);
    if ( DeviceRegProp < 0 )
      goto LABEL_48;
    v8 = 8;
    if ( (v32[0] & 8) != 0 )
    {
      if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0x19u) )
        goto LABEL_33;
    }
    else
    {
      DeviceRegProp = PnpGetCallerSessionId(&SessionId);
      if ( DeviceRegProp < 0 || SessionId != RtlGetActiveConsoleId() )
      {
        DeviceRegProp = PiAuCheckClientInteractive(v25);
        if ( DeviceRegProp < 0 || !v25[0] )
        {
          if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
            goto LABEL_33;
          DeviceRegProp = 0;
        }
      }
    }
    if ( !v36 )
      goto LABEL_48;
LABEL_24:
    DeviceRegProp = -1073741811;
    goto LABEL_59;
  }
  if ( v20 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_48;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
  {
LABEL_33:
    DeviceRegProp = -1073741790;
    goto LABEL_59;
  }
  if ( v36 )
    goto LABEL_24;
  v8 = 2;
  if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v7, 0LL, &v29, &v34, &v33, v24) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_59;
  }
  if ( (v29 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_59;
  }
LABEL_48:
  v9 = v17;
  if ( DeviceRegProp < 0 )
    goto LABEL_55;
  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v7);
  if ( DeviceRegProp < 0 )
    goto LABEL_55;
  v26 = v17;
  DeviceRegProp = PnpQueueQueryAndRemoveEvent(&DestinationString, &v27, v10, &v26, v8, 0);
  if ( DeviceRegProp != -2147483608 )
    goto LABEL_59;
  v21 = v26;
  v9 = v17;
  if ( v10 )
    v10[((unsigned __int64)v17 >> 1) - 1] = 0;
LABEL_57:
  if ( v21 <= v9 )
  {
    v22 = PiCMReturnBufferResultData(0x80000028, v26, v27, v10, v21, v40, a3, a4, a6);
    goto LABEL_60;
  }
LABEL_59:
  v22 = PiCMReturnBufferResultData(DeviceRegProp, v26, v27, 0LL, 0, v40, a3, a4, a6);
LABEL_60:
  v12 = v22;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_62:
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    McTemplateK0z(v11, &KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  PiCMReleaseObjectInputData((__int64)v35);
  return (unsigned int)v12;
}
