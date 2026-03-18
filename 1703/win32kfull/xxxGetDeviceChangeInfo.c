/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1C01BA8F0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  IRP *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v13[3]; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD v14[6]; // [rsp+A0h] [rbp+27h] BYREF
  char OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  char v16; // [rsp+E1h] [rbp+68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v1 = 0;
  if ( PsGetCurrentProcess(a1) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(WPP_MAIN_CB.Queue.ListEntry.Blink);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = qword_1C032EDF8;
    v4 = *(_QWORD **)(qword_1C032EDF8 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C032EDF8 != &gMediaChangeList || *v4 != qword_1C032EDF8 )
      __fastfail(3u);
    qword_1C032EDF8 = *(_QWORD *)(qword_1C032EDF8 + 8);
    *v4 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(WPP_MAIN_CB.Queue.ListEntry.Blink);
  if ( !v3 )
    return 0LL;
  PushW32ThreadLock(v3, v14, (__int64)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, v13, UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(
           0x6DC010u,
           DeviceObject,
           (PVOID)(v3 + 36),
           (unsigned int)*(unsigned __int16 *)(v3 + 36) + 4,
           &OutputBuffer,
           2u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v6 )
    {
      if ( gdwInAtomicOperation )
      {
        v5 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation, v7, v8);
      Status = IofCallDriver(DeviceObject, v6);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(0LL, 1LL);
      if ( !Status && v16 )
      {
        v1 = 1 << (v16 - 65);
        if ( (*(_DWORD *)(v3 + 32) & 1) != 0 )
          v1 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)v13);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v14);
  return v1;
}
