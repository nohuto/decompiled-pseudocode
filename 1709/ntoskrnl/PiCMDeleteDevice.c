/*
 * XREFs of PiCMDeleteDevice @ 0x1406CF9C8
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14011C510 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ZwPlugPlayControl @ 0x14017FDE0 (ZwPlugPlayControl.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PiQueueDeviceRequest @ 0x14044E618 (PiQueueDeviceRequest.c)
 *     _CmValidateDeviceName @ 0x140521BB0 (_CmValidateDeviceName.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     _CmIsRootEnumeratedDevice @ 0x1405275DC (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _CmGetDeviceStatus @ 0x140529914 (_CmGetDeviceStatus.c)
 *     PiCMReturnBasicResultData @ 0x14052FF90 (PiCMReturnBasicResultData.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x140551BE8 (_CmIsRootDevice.c)
 *     PpDeviceRegistration @ 0x140555454 (PpDeviceRegistration.c)
 *     PiAuDoesClientHaveAccess @ 0x140574D38 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDevice @ 0x14077E970 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMDeleteDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  __int64 v10; // rcx
  int inited; // ebx
  const WCHAR *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  const WCHAR *v14; // rdi
  struct _KTHREAD *v15; // rax
  __int64 v16; // r8
  unsigned int v18; // [rsp+38h] [rbp-59h]
  PVOID P; // [rsp+48h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  char v21[4]; // [rsp+60h] [rbp-31h] BYREF
  int v22; // [rsp+64h] [rbp-2Dh]
  int v23; // [rsp+68h] [rbp-29h]
  PCWSTR SourceString; // [rsp+70h] [rbp-21h]
  int v25; // [rsp+7Ch] [rbp-15h]
  int v26; // [rsp+80h] [rbp-11h]
  int v27; // [rsp+88h] [rbp-9h] BYREF
  int v28; // [rsp+8Ch] [rbp-5h] BYREF
  UNICODE_STRING v29; // [rsp+90h] [rbp-1h] BYREF
  _BYTE Buffer[40]; // [rsp+A0h] [rbp+Fh] BYREF

  v6 = (_DWORD *)a6;
  P = 0LL;
  *(_DWORD *)a6 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v21);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v12 = SourceString;
      if ( !SourceString || v22 || v23 != 1 || v25 || !a3 || a4 < 8 )
        goto LABEL_28;
      inited = CmValidateDeviceName(v10, SourceString);
      if ( inited < 0 )
        goto LABEL_29;
      if ( CmIsRootDevice(v12) )
      {
LABEL_28:
        inited = -1073741811;
        goto LABEL_29;
      }
      inited = PiPnpRtlBeginOperation((__int64 **)&P);
      if ( inited >= 0 )
      {
        if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v12, 0LL, &a6, &v28, &v27, v18) >= 0 && (a6 & 2) != 0 )
        {
          if ( (a6 & 0x2001) == 1 )
          {
            inited = -1073741808;
            goto LABEL_29;
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_29;
          PpDevNodeLockTree(3);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = CmDeleteDevice(PiPnpRtlCtx, (_DWORD)SourceString);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_29;
          memset(Buffer, 0, sizeof(Buffer));
          v14 = SourceString;
          if ( RtlInitUnicodeStringEx((PUNICODE_STRING)Buffer, SourceString) >= 0 )
          {
            *(_DWORD *)&Buffer[16] = 1;
            *(_DWORD *)&Buffer[20] = 0x40000;
            ZwPlugPlayControl(PlugPlayControlDeviceStatus, Buffer, 0x28u);
          }
        }
        else
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_29;
          PpDevNodeLockTree(3);
          v15 = KeGetCurrentThread();
          --v15->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = CmDeleteDevice(PiPnpRtlCtx, (_DWORD)SourceString);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_29;
          v14 = SourceString;
          if ( CmIsRootEnumeratedDevice(SourceString)
            && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
          {
            PiQueueDeviceRequest((__int64)&DestinationString, 8, v16, 1, 0LL);
          }
        }
        if ( RtlInitUnicodeStringEx(&v29, v14) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v29.Length);
      }
    }
    else
    {
      inited = -1073741790;
    }
LABEL_29:
    v9 = PiCMReturnBasicResultData(inited, v26, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v21);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v9;
}
