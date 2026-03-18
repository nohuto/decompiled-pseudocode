/*
 * XREFs of ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01B1AA0
 * Callers:
 *     xxxSetShellWindow @ 0x1C00154D0 (xxxSetShellWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxCallGenerateIAMKey(struct tagIAM_KKEY *a1)
{
  NTSTATUS result; // eax
  IRP *v3; // rax
  NTSTATUS Status; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v13[3]; // [rsp+98h] [rbp+2Fh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+B0h] [rbp+47h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\KsecDD");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    PushW32ThreadLock((__int64)DeviceObject, v13, UserDereferenceObject);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(
           0x390004u,
           DeviceObject,
           0LL,
           0,
           &BugCheckParameter4,
           8u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v3 )
    {
      Status = IofCallDriver(DeviceObject, v3);
      if ( Status == 259 )
      {
        if ( gdwInAtomicOperation )
        {
          v5 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation, v6, v7);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        EnterCrit(0LL, 1LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
        *((_QWORD *)a1 + 1) = BugCheckParameter4;
    }
    else
    {
      Status = -1073741823;
    }
    PopAndFreeW32ThreadLock((__int64)v13);
    return Status;
  }
  return result;
}
