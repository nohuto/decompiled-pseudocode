/*
 * XREFs of IoReportRootDevice @ 0x14064B860
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1405C9DB0 (PnpCleanupDeviceRegistryValues.c)
 *     _CmSetDeviceRegProp @ 0x1405CF5C8 (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     _CmCreateDevice @ 0x1405E3F20 (_CmCreateDevice.c)
 *     _CmDeleteDevice @ 0x1407E7584 (_CmDeleteDevice.c)
 */

NTSTATUS __stdcall IoReportRootDevice(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // rsi
  NTSTATUS result; // eax
  NTSTATUS appended; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v6; // rcx
  __int16 v7; // di
  int v8; // eax
  char v9; // r14
  HANDLE v10; // rdi
  HANDLE v11; // r8
  wchar_t *pszFormat; // [rsp+30h] [rbp-D8h]
  unsigned int v13; // [rsp+38h] [rbp-D0h]
  char v14; // [rsp+58h] [rbp-B0h] BYREF
  char v15; // [rsp+59h] [rbp-AFh] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _WORD v22[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v23; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  Destination.Buffer = v22;
  v14 = 0;
  DestinationString.Buffer = (wchar_t *)&v23;
  Handle = 0LL;
  *(_DWORD *)&Destination.Length = 26214400;
  *(_DWORD *)&DestinationString.Length = 26345472;
  P = 0LL;
  result = RtlAppendUnicodeToString(&Destination, L"ROOT\\");
  if ( result < 0 )
    return result;
  result = RtlAppendUnicodeStringToString(&Destination, &DriverExtension->ServiceKeyName);
  if ( result < 0 )
    return result;
  if ( Destination.Length > 0x18Eu )
    return -1073741773;
  RtlCopyUnicodeString(&DestinationString, &Destination);
  appended = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( appended >= 0 )
  {
    PpDevNodeLockTree(1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    appended = RtlAppendUnicodeToString(&Destination, L"\\");
    if ( appended >= 0 )
    {
      ppszDestEnd = &v22[(unsigned __int64)Destination.Length >> 1];
      RtlStringCchPrintfExW(
        ppszDestEnd,
        (400 - (unsigned __int64)Destination.Length) >> 1,
        &ppszDestEnd,
        0LL,
        0,
        L"%04u",
        0LL);
      v6 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - v22;
      if ( (_DWORD)v6 == -1 )
        v7 = 400 - Destination.Length;
      else
        v7 = 2 * v6;
      Destination.Length += v7;
      v8 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v14, 0);
      v9 = v14;
      appended = v8;
      if ( v8 >= 0 )
      {
        if ( !v14 )
          goto LABEL_10;
        v10 = Handle;
        v11 = Handle;
        v13 = DestinationString.Length + 4;
        pszFormat = DestinationString.Buffer;
        *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v13 >> 1) - 2] = 0;
        appended = CmSetDeviceRegProp(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)Destination.Buffer,
                     (__int64)v11,
                     2u,
                     7u,
                     (__int64)pszFormat,
                     v13,
                     0);
        if ( appended >= 0 )
        {
          LODWORD(v17) = 32;
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)Destination.Buffer,
                       (__int64)v10,
                       0xBu,
                       4u,
                       (__int64)&v17,
                       4u,
                       0);
          if ( appended >= 0 )
          {
            v15 = -1;
            appended = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Destination.Buffer,
                         1u,
                         (__int64)v10,
                         0LL,
                         (__int64)&DEVPKEY_Device_Reported,
                         17,
                         (__int64)&v15,
                         1u,
                         0);
            if ( appended >= 0 )
            {
              appended = CmSetDeviceRegProp(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)Destination.Buffer,
                           (__int64)v10,
                           5u,
                           1u,
                           (__int64)DriverExtension->ServiceKeyName.Buffer,
                           (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                           0);
              if ( appended >= 0 )
              {
                DriverObject->Flags |= 0x800u;
                PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 8, 0, 0LL, 0LL, 0LL, 0LL);
                goto LABEL_10;
              }
            }
          }
        }
      }
      if ( v9 )
      {
        CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, Destination.Buffer, 0LL);
        PnpCleanupDeviceRegistryValues((__int64)&Destination);
      }
    }
  }
LABEL_10:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return appended;
}
