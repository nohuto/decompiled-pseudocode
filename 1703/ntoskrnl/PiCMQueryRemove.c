/*
 * XREFs of PiCMQueryRemove @ 0x140597828
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlGetActiveConsoleId @ 0x140071260 (RtlGetActiveConsoleId.c)
 *     Template_z @ 0x1401F8D2C (Template_z.c)
 *     Template_qz @ 0x1401FAC80 (Template_qz.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x140483E80 (_CmValidateDeviceName.c)
 *     PiCMReturnBufferResultData @ 0x14048A83C (PiCMReturnBufferResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1404E4EB0 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x1404E645C (_CmIsRootDevice.c)
 *     _CmGetDeviceStatus @ 0x1404E7B28 (_CmGetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x1404E850C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404E8E44 (PiCMCaptureObjectInputData.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x140597A84 (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuDoesClientHavePrivilege @ 0x140597CCC (PiAuDoesClientHavePrivilege.c)
 *     PnpGetCallerSessionId @ 0x140695A98 (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x140697D8C (PiAuCheckClientInteractive.c)
 */

__int64 __fastcall PiCMQueryRemove(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  WCHAR *v7; // r13
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
  int v21; // eax
  unsigned int v23; // r8d
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
    goto LABEL_29;
  v7 = (WCHAR *)SourceString;
  v14 = v39;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_qz(v11, &KMPnPEvt_CfgMgr_QueryRemove_Start, v13, v39, SourceString);
  if ( !v7 || v37 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_59;
  }
  if ( !a3 || a4 < 0x14 )
    goto LABEL_50;
  DeviceRegProp = CmValidateDeviceName(v11, v7);
  if ( DeviceRegProp < 0 )
  {
LABEL_59:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_26;
    v23 = v26;
    goto LABEL_61;
  }
  if ( CmIsRootDevice(v7) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_26;
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
      goto LABEL_26;
    }
    *PoolWithTag = 0;
  }
  v19 = v14 - 1;
  if ( !v19 )
  {
    if ( !PiAuDoesClientHaveAccess(0x20u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
    {
      DeviceRegProp = -1073741790;
      goto LABEL_23;
    }
    if ( (v36 & 0xFFFFFFFE) == 0 )
    {
      v8 = v36 & 1;
      goto LABEL_23;
    }
    goto LABEL_50;
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
      goto LABEL_23;
    v8 = 8;
    if ( (v32[0] & 8) != 0 )
    {
      if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(25LL) )
        goto LABEL_41;
    }
    else
    {
      DeviceRegProp = PnpGetCallerSessionId(&SessionId);
      if ( DeviceRegProp < 0 || SessionId != RtlGetActiveConsoleId() )
      {
        DeviceRegProp = PiAuCheckClientInteractive(v25);
        if ( DeviceRegProp < 0 || !v25[0] )
        {
          if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
            goto LABEL_41;
          DeviceRegProp = 0;
        }
      }
    }
    if ( !v36 )
      goto LABEL_23;
LABEL_50:
    DeviceRegProp = -1073741811;
    goto LABEL_26;
  }
  if ( v20 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_23;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !(unsigned __int8)PiAuDoesClientHavePrivilege(10LL) )
  {
LABEL_41:
    DeviceRegProp = -1073741790;
    goto LABEL_26;
  }
  if ( v36 )
    goto LABEL_50;
  v8 = 2;
  if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v7, 0LL, &v29, &v34, &v33, v24) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_26;
  }
  if ( (v29 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_26;
  }
LABEL_23:
  v9 = v17;
  if ( DeviceRegProp < 0 )
    goto LABEL_59;
  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v7);
  if ( DeviceRegProp < 0 )
    goto LABEL_59;
  v26 = v17;
  DeviceRegProp = PnpQueueQueryAndRemoveEvent(
                    (unsigned int)&DestinationString,
                    (unsigned int)&v27,
                    (_DWORD)v10,
                    (unsigned int)&v26,
                    v8,
                    0);
  if ( DeviceRegProp != -2147483608 )
  {
LABEL_26:
    v21 = PiCMReturnBufferResultData(DeviceRegProp, v26, v27, 0LL, 0, v40, a3, a4, a6);
    goto LABEL_27;
  }
  v23 = v26;
  v9 = v17;
  if ( v10 )
    v10[((unsigned __int64)v17 >> 1) - 1] = 0;
LABEL_61:
  if ( v23 > v9 )
    goto LABEL_26;
  v21 = PiCMReturnBufferResultData(0x80000028, v26, v27, v10, v23, v40, a3, a4, a6);
LABEL_27:
  v12 = v21;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_29:
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x4000000) != 0 )
    Template_z(v11, &KMPnPEvt_CfgMgr_QueryRemove_Stop, v13, v7);
  PiCMReleaseObjectInputData((__int64)v35);
  return (unsigned int)v12;
}
