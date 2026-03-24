/*
 * XREFs of DriverEntry @ 0x1C000E080
 * Callers:
 *     GsDriverEntry @ 0x1C000E010 (GsDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00016D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001800 (memmove.c)
 *     memset @ 0x1C0001B40 (memset.c)
 *     MouseClassLogError @ 0x1C000299C (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004500 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000489C (WPP_RECORDER_SF_d.c)
 *     MouCreateClassObject @ 0x1C000B3D8 (MouCreateClassObject.c)
 *     MouDeterminePortsServiced @ 0x1C000B8B4 (MouDeterminePortsServiced.c)
 *     MouseAddDeviceEx @ 0x1C000BC70 (MouseAddDeviceEx.c)
 *     TraceLoggingRegisterEx @ 0x1C000CE30 (TraceLoggingRegisterEx.c)
 *     WppCleanupKm @ 0x1C000CEC4 (WppCleanupKm.c)
 *     WppInitKm @ 0x1C000CF58 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000D010 (WppLoadTracingSupport.c)
 *     MouConfiguration @ 0x1C000E95C (MouConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  PVOID v4; // rsi
  ETWENABLECALLBACK *v5; // rdx
  void *v6; // r8
  const struct _TlgProvider_t *v7; // rcx
  PVOID PoolWithTag; // rax
  __int64 v9; // rdx
  NTSTATUS ClassObject; // ebx
  __int64 v11; // r8
  __int64 v12; // r8
  const WCHAR *v13; // rdx
  KSPIN_LOCK *v14; // rcx
  __int64 v15; // r8
  WCHAR *v16; // rax
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // rdx
  unsigned int v21; // r14d
  int v22; // eax
  char *v23; // rbx
  void *v24; // rcx
  const WCHAR *v25; // rdx
  int v26; // r15d
  void *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  __int64 *v30; // rax
  int v31; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  KSPIN_LOCK v33; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v38[512]; // [rsp+90h] [rbp-70h] BYREF

  v33 = 0LL;
  P[0] = 0LL;
  v4 = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MouClassTraceGuid;
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  v7 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 1LL);
  }
  TraceLoggingRegisterEx(v7, v5, v6);
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x3F0uLL);
  qword_1C00084C8 = (__int64)&qword_1C00084C0;
  qword_1C00084C0 = (__int64)&qword_1C00084C0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&::DestinationString.Length = 0x2000000;
  ::DestinationString.Buffer = (PWSTR)&unk_1C00082C0;
  memset(v38, 0, sizeof(v38));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)v38;
  word_1C00082A0 = RegistryPath->Length;
  word_1C00082A2 = RegistryPath->Length + 2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)word_1C00082A2, 0x43756F4Du);
  ::P = PoolWithTag;
  if ( !PoolWithTag )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v9, 1LL);
    ClassObject = -1073741823;
    LODWORD(P[0]) = RegistryPath->Length + 2;
    MouseClassLogError(DriverObject, -1073414143, 20002, -1073741823, 1u, P, 0);
    goto LABEL_61;
  }
  memmove(PoolWithTag, RegistryPath->Buffer, RegistryPath->Length);
  *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
  MouConfiguration();
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    ClassObject = MouCreateClassObject(DriverObject, &WPP_MAIN_CB.DeviceQueue.32, (PDEVICE_OBJECT *)&v33, (PWSTR *)P, 1);
    if ( ClassObject < 0 )
    {
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v12, 0xCu, v31);
      v4 = P[0];
      goto LABEL_61;
    }
    v13 = (const WCHAR *)P[0];
    v14 = *(KSPIN_LOCK **)(v33 + 64);
    *v14 = v33;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v14;
    *((_BYTE *)v14 + 64) = 0;
    if ( (int)MouseAddDeviceEx(v14, v13, 0LL) < 0 )
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v15, 0xDu, v31);
    ExFreePoolWithTag(P[0], 0);
    P[0] = 0LL;
    *(_DWORD *)(v33 + 48) &= ~0x80u;
  }
  RtlCopyUnicodeString(&Destination, &::DestinationString);
  Destination.Length -= 10;
  RtlAppendUnicodeToString(&Destination, L"Port");
  if ( (int)MouDeterminePortsServiced(&Destination.Length, &v35) < 0 )
    WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v11, 0xEu, v31);
  if ( Destination.MaximumLength < (unsigned __int64)Destination.Length + 2 )
    goto LABEL_14;
  Destination.Buffer[((unsigned __int64)Destination.Length >> 1) + 1] = 0;
  WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v11, 0xFu, v31);
  DestinationString.MaximumLength = Destination.Length + 24;
  v16 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(Destination.Length + 24), 0x43756F4Du);
  DestinationString.Buffer = v16;
  if ( !v16 )
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v17, 1LL);
    ClassObject = -1073741823;
    LODWORD(P[0]) = DestinationString.MaximumLength;
    MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
    DestinationString.MaximumLength = 0;
    goto LABEL_17;
  }
  memset(v16, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, L"\\Device\\");
  RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
  RtlAppendUnicodeToString(&DestinationString, L"0");
  if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
  {
LABEL_14:
    ClassObject = -1073741823;
  }
  else
  {
    v21 = 0;
    for ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
          v21 < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock);
          ++v21 )
    {
      if ( v21 >= v35 )
        break;
      DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] = v21 + 48;
      v22 = MouCreateClassObject(DriverObject, &WPP_MAIN_CB.DeviceQueue.32, (PDEVICE_OBJECT *)&v33, (PWSTR *)P, 1);
      if ( v22 >= 0 )
      {
        v23 = *(char **)(v33 + 64);
        *(_QWORD *)v23 = v33;
        v23[64] = 0;
        *(_DWORD *)(v33 + 48) &= ~0x80u;
        if ( !IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)v23 + 2) )
        {
          v4 = P[0];
          v25 = (const WCHAR *)P[0];
          *(_BYTE *)(v33 + 76) = *(_BYTE *)(*((_QWORD *)v23 + 2) + 76LL) + 1;
          v26 = MouseAddDeviceEx((KSPIN_LOCK *)v23, v25, (__int64)FileObject);
          if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
            *((_QWORD *)v23 + 42) = FileObject;
          if ( v4 )
          {
            ExFreePoolWithTag(v4, 0);
            v4 = 0LL;
            P[0] = 0LL;
          }
          if ( v26 >= 0 )
          {
            v28 = (_QWORD *)qword_1C00084C8;
            v29 = v23 + 320;
            if ( *(__int64 **)qword_1C00084C8 != &qword_1C00084C0 )
              __fastfail(3u);
            *v29 = &qword_1C00084C0;
            v29[1] = v28;
            *v28 = v29;
            qword_1C00084C8 = (__int64)v29;
          }
          else
          {
            if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                         + 3 * *((unsigned int *)v23 + 45));
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v23 + 45)) = 0LL;
              *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v23 + 45) + 19) = 1;
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v23 + 45) + 1) = 0LL;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            }
            else if ( *((_QWORD *)v23 + 42) )
            {
              FileObject = (PFILE_OBJECT)*((_QWORD *)v23 + 42);
              *((_QWORD *)v23 + 42) = 0LL;
            }
            if ( FileObject )
              ObfDereferenceObject(FileObject);
            v27 = (void *)*((_QWORD *)v23 + 13);
            if ( v27 )
            {
              ExFreePoolWithTag(v27, 0);
              *((_QWORD *)v23 + 15) = 0LL;
              *((_QWORD *)v23 + 14) = 0LL;
              *((_QWORD *)v23 + 13) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v23);
          }
          continue;
        }
        v24 = (void *)*((_QWORD *)v23 + 13);
        if ( v24 )
        {
          ExFreePoolWithTag(v24, 0);
          *((_QWORD *)v23 + 15) = 0LL;
          *((_QWORD *)v23 + 14) = 0LL;
          *((_QWORD *)v23 + 13) = 0LL;
        }
        IoDeleteDevice(*(PDEVICE_OBJECT *)v23);
      }
      else
      {
        MouseClassLogError(DriverObject, -1073414143, 20008, v22, 0, 0LL, 0);
      }
      v4 = P[0];
    }
    v30 = (__int64 *)qword_1C00084C0;
    ClassObject = 0;
    while ( v30 != &qword_1C00084C0 )
    {
      ++WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      v30 = (__int64 *)*v30;
    }
  }
LABEL_61:
  if ( DestinationString.MaximumLength )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( ClassObject >= 0 )
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)MouseClassFindMorePorts, 0LL);
    ClassObject = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)MouseClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)MouseClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)MouseClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)MouseClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)MouseClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)MouseClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)MouseClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)MousePnP;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)MouseClassSystemControl;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)MouseClassPower;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)MouseAddDevice;
    goto LABEL_25;
  }
LABEL_17:
  if ( ::P )
  {
    ExFreePoolWithTag(::P, 0);
    ::P = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v18 = *(void **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
    }
    IoDeleteDevice(**(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
LABEL_25:
  WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v11, 0x11u, v31);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v19, 1LL);
  }
  if ( ClassObject < 0 )
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0008000 = 0;
    WppCleanupKm((__int64)DriverObject);
  }
  return ClassObject;
}
