/*
 * XREFs of DriverEntry @ 0x1C000F4D0
 * Callers:
 *     GsDriverEntry @ 0x1C000F010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00022E0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0002AC0 (__security_check_cookie.c)
 *     memmove @ 0x1C0002C80 (memmove.c)
 *     memset @ 0x1C0002FC0 (memset.c)
 *     MouseClassLogError @ 0x1C00045CC (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005040 (WPP_RECORDER_SF_.c)
 *     MouseAddDeviceEx @ 0x1C000C480 (MouseAddDeviceEx.c)
 *     MouDeterminePortsServiced @ 0x1C000C7A0 (MouDeterminePortsServiced.c)
 *     MouCreateClassObject @ 0x1C000C990 (MouCreateClassObject.c)
 *     WppInitKm @ 0x1C000CC80 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000CD20 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C000E104 (WppCleanupKm.c)
 *     MouConfiguration @ 0x1C000F030 (MouConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  PVOID v2; // r14
  __int64 v5; // rdx
  GUID v6; // xmm0
  PVOID PoolWithTag; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  WCHAR *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 *v17; // rax
  int v18; // edi
  __int64 v19; // rdx
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  PVOID v24; // rdi
  const WCHAR *v25; // rdx
  _BYTE *DeviceExtension; // rcx
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  PDEVICE_OBJECT *v30; // rcx
  int v31; // eax
  char *v32; // rsi
  void *v33; // rcx
  const WCHAR *v34; // rdx
  int v35; // r15d
  void *v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  ULONG NumberOfMapRegisters; // ecx
  char v40[4]; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT v42; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h] BYREF
  GUID ProviderId; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v48[512]; // [rsp+A0h] [rbp-60h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v42 = 0LL;
  v2 = 0LL;
  P[0] = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MouClassTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 1LL);
  }
  v6 = (GUID)*((_OWORD *)EventInformation - 1);
  qword_1C0009038 = 0LL;
  qword_1C0009040 = 0LL;
  ProviderId = v6;
  if ( !EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C0009010, &RegHandle) )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x3F0uLL);
  qword_1C00094C8 = (__int64)&qword_1C00094C0;
  qword_1C00094C0 = (__int64)&qword_1C00094C0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&::DestinationString.Length = 0x2000000;
  ::DestinationString.Buffer = (PWSTR)&unk_1C00092C0;
  memset(v48, 0, sizeof(v48));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)v48;
  word_1C00092A0 = RegistryPath->Length;
  word_1C00092A2 = RegistryPath->Length + 2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)word_1C00092A2, 0x43756F4Du);
  ::P = PoolWithTag;
  if ( !PoolWithTag )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v8, 1LL);
    v18 = -1073741823;
    LODWORD(P[0]) = RegistryPath->Length + 2;
    MouseClassLogError(DriverObject, -1073414143, 20002, -1073741823, 1u, P, 0);
    goto LABEL_15;
  }
  memmove(PoolWithTag, RegistryPath->Buffer, RegistryPath->Length);
  *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
  MouConfiguration();
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    v21 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v42, (PWSTR *)P, 1);
    v18 = v21;
    if ( v21 < 0 )
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v22, v23, 12, *(_DWORD *)v40, v21);
      v2 = P[0];
      goto LABEL_15;
    }
    v24 = P[0];
    v25 = (const WCHAR *)P[0];
    DeviceExtension = v42->DeviceExtension;
    *(_QWORD *)DeviceExtension = v42;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
    DeviceExtension[64] = 0;
    v27 = MouseAddDeviceEx((__int64)DeviceExtension, v25, 0LL);
    if ( v27 < 0 )
    {
      LOBYTE(v28) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v28, v29, 13, *(_DWORD *)v40, v27);
    }
    ExFreePoolWithTag(v24, 0);
    P[0] = 0LL;
    v42->Flags &= ~0x80u;
  }
  RtlCopyUnicodeString(&Destination, &::DestinationString);
  Destination.Length -= 10;
  RtlAppendUnicodeToString(&Destination, L"Port");
  v9 = MouDeterminePortsServiced(&Destination.Length, &v44);
  if ( v9 < 0 )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 14, *(_DWORD *)v40, v9);
  }
  LODWORD(v12) = Destination.Length;
  if ( Destination.MaximumLength < (unsigned __int64)Destination.Length + 2 )
  {
    v18 = -1073741823;
  }
  else
  {
    v13 = (unsigned __int64)Destination.Length >> 1;
    Destination.Buffer[v13 + 1] = 0;
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v13, v11, 15, *(_DWORD *)v40, v44);
    DestinationString.MaximumLength = Destination.Length + 24;
    v14 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(Destination.Length + 24), 0x43756F4Du);
    DestinationString.Buffer = v14;
    if ( !v14 )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v15, 1LL);
      v18 = -1073741823;
      LODWORD(P[0]) = DestinationString.MaximumLength;
      MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
      DestinationString.MaximumLength = 0;
      goto LABEL_34;
    }
    memset(v14, 0, DestinationString.MaximumLength);
    RtlAppendUnicodeToString(&DestinationString, L"\\Device\\");
    RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
    RtlAppendUnicodeToString(&DestinationString, L"0");
    LODWORD(v12) = DestinationString.Length;
    if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
    {
      v18 = -1073741823;
    }
    else
    {
      v16 = 0;
      v12 = (unsigned __int64)DestinationString.Length >> 1;
      for ( DestinationString.Buffer[v12 + 1] = 0; v16 < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++v16 )
      {
        if ( v16 >= v44 )
          break;
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] = v16 + 48;
        v31 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v42, (PWSTR *)P, 1);
        if ( v31 >= 0 )
        {
          v32 = (char *)v42->DeviceExtension;
          *(_QWORD *)v32 = v42;
          v32[64] = 0;
          v42->Flags &= ~0x80u;
          if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)v32 + 2) )
          {
            v33 = (void *)*((_QWORD *)v32 + 13);
            if ( v33 )
            {
              ExFreePoolWithTag(v33, 0);
              *((_QWORD *)v32 + 15) = 0LL;
              *((_QWORD *)v32 + 14) = 0LL;
              *((_QWORD *)v32 + 13) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v32);
            v2 = P[0];
          }
          else
          {
            v2 = P[0];
            v34 = (const WCHAR *)P[0];
            v42->StackSize = *(_BYTE *)(*((_QWORD *)v32 + 2) + 76LL) + 1;
            v35 = MouseAddDeviceEx((__int64)v32, v34, (__int64)FileObject);
            if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              *((_QWORD *)v32 + 42) = FileObject;
            if ( v2 )
            {
              ExFreePoolWithTag(v2, 0);
              v2 = 0LL;
              P[0] = 0LL;
            }
            if ( v35 >= 0 )
            {
              v37 = (_QWORD *)qword_1C00094C8;
              v38 = v32 + 320;
              if ( *(__int64 **)qword_1C00094C8 != &qword_1C00094C0 )
                __fastfail(3u);
              *v38 = &qword_1C00094C0;
              v38[1] = v37;
              *v37 = v38;
              qword_1C00094C8 = (__int64)v38;
            }
            else
            {
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                           + 3 * *((unsigned int *)v32 + 45));
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v32 + 45)) = 0LL;
                *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v32 + 45) + 19) = 1;
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v32 + 45) + 1) = 0LL;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              else if ( *((_QWORD *)v32 + 42) )
              {
                FileObject = (PFILE_OBJECT)*((_QWORD *)v32 + 42);
                *((_QWORD *)v32 + 42) = 0LL;
              }
              if ( FileObject )
                ObfDereferenceObject(FileObject);
              v36 = (void *)*((_QWORD *)v32 + 13);
              if ( v36 )
              {
                ExFreePoolWithTag(v36, 0);
                *((_QWORD *)v32 + 15) = 0LL;
                *((_QWORD *)v32 + 14) = 0LL;
                *((_QWORD *)v32 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v32);
            }
          }
        }
        else
        {
          MouseClassLogError(DriverObject, -1073414143, 20008, v31, 0, 0LL, 0);
          v2 = P[0];
        }
      }
      v17 = (__int64 *)qword_1C00094C0;
      v18 = 0;
      if ( (__int64 *)qword_1C00094C0 != &qword_1C00094C0 )
      {
        NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
        do
        {
          WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = ++NumberOfMapRegisters;
          v17 = (__int64 *)*v17;
        }
        while ( v17 != &qword_1C00094C0 );
      }
    }
  }
LABEL_15:
  if ( DestinationString.MaximumLength )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v18 >= 0 )
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)MouseClassFindMorePorts, 0LL);
    v18 = 0;
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
    goto LABEL_21;
  }
LABEL_34:
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
  v30 = *(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) )
    {
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL), 0);
      *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
      v30 = *(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    }
    IoDeleteDevice(*v30);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
LABEL_21:
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v12, v11, 17, *(_DWORD *)v40, v18);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v19, 1LL);
  }
  if ( v18 < 0 )
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0009010 = 0;
    WppCleanupKm((__int64)DriverObject);
  }
  return v18;
}
