/*
 * XREFs of PiCMGetRelatedDeviceInstance @ 0x1405520B8
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x1400FB3CC (RtlStringCbCopyExW.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmValidateDeviceName @ 0x140521BB0 (_CmValidateDeviceName.c)
 *     PiCMReturnBufferResultData @ 0x140525C50 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceParent @ 0x140551A88 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x140551BE8 (_CmIsRootDevice.c)
 *     PiGetRelatedDevice @ 0x140556A98 (PiGetRelatedDevice.c)
 */

__int64 __fastcall PiCMGetRelatedDeviceInstance(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  _DWORD *v7; // r12
  wchar_t *PoolWithTag; // rdi
  unsigned int v9; // r13d
  wchar_t *v10; // r15
  __int64 v11; // rcx
  signed int inited; // ebx
  unsigned int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // r12d
  int DeviceParent; // eax
  signed int v17; // eax
  wchar_t *v19; // rax
  unsigned int v20; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  char v22[4]; // [rsp+70h] [rbp-1h] BYREF
  int v23; // [rsp+74h] [rbp+3h]
  int v24; // [rsp+78h] [rbp+7h]
  PCWSTR SourceString; // [rsp+80h] [rbp+Fh]
  int v26; // [rsp+8Ch] [rbp+1Bh]
  int v27; // [rsp+90h] [rbp+1Fh]

  v6 = a4;
  v7 = a3;
  PoolWithTag = 0LL;
  v9 = 0;
  v10 = 0LL;
  *a6 = 0;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, v22);
  if ( inited < 0 )
    goto LABEL_23;
  if ( SourceString && !v23 && v24 == 1 )
  {
    if ( v7 && v6 >= 0x14 )
    {
      v13 = v6 - 20;
      v14 = 0;
      v15 = 2;
      if ( v13 >= 2 )
        v14 = v13;
      if ( v14 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14, 0x34706E50u);
        if ( !PoolWithTag )
          inited = -1073741670;
      }
      if ( inited < 0 )
        goto LABEL_24;
      inited = CmValidateDeviceName(v11, SourceString);
      if ( inited < 0 )
        goto LABEL_24;
      switch ( v26 )
      {
        case 1:
          v20 = v14 >> 1;
          DeviceParent = CmGetDeviceParent(*(__int64 *)&PiPnpRtlCtx, SourceString, PoolWithTag, &v20);
          v9 = v20;
          inited = DeviceParent;
LABEL_16:
          v6 = a4;
          v7 = a3;
          goto LABEL_17;
        case 2:
LABEL_31:
          inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
          if ( inited < 0 )
            goto LABEL_24;
          v20 = 400;
          v19 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
          v10 = v19;
          if ( !v19 )
          {
            inited = -1073741670;
            goto LABEL_24;
          }
          inited = PiGetRelatedDevice(&DestinationString, v19, &v20, v15);
          if ( inited < 0 )
            goto LABEL_24;
          inited = RtlStringCbCopyExW(PoolWithTag, v14, v10, 0LL, 0LL, 0x800u);
          if ( inited == -2147483643 )
            inited = -1073741789;
          v9 = (v20 >> 1) + 1;
          goto LABEL_16;
        case 3:
          if ( CmIsRootDevice(SourceString) )
          {
            inited = -1073741810;
            goto LABEL_24;
          }
          v15 = 3;
          goto LABEL_31;
      }
    }
    inited = -1073741811;
    goto LABEL_24;
  }
  inited = -1073741811;
LABEL_17:
  if ( inited < 0 )
  {
LABEL_24:
    v17 = PiCMReturnBufferResultData(inited, 2 * v9, 0, 0LL, 0, v27, a3, a4, a6);
    goto LABEL_19;
  }
  v17 = PiCMReturnBufferResultData(inited, 2 * v9, 0, PoolWithTag, 2 * v9, v27, v7, v6, a6);
LABEL_19:
  inited = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_23:
  PiCMReleaseObjectInputData((__int64)v22);
  return (unsigned int)inited;
}
