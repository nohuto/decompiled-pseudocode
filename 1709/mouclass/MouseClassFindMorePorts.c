/*
 * XREFs of MouseClassFindMorePorts @ 0x1C000C3D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00016D0 (__security_check_cookie.c)
 *     memset @ 0x1C0001B40 (memset.c)
 *     MouseClassLogError @ 0x1C000299C (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004500 (WPP_RECORDER_SF_.c)
 *     MouCreateClassObject @ 0x1C000B3D8 (MouCreateClassObject.c)
 *     MouDeterminePortsServiced @ 0x1C000B8B4 (MouDeterminePortsServiced.c)
 *     MouseAddDeviceEx @ 0x1C000BC70 (MouseAddDeviceEx.c)
 */

void __fastcall MouseClassFindMorePorts(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  PVOID v4; // rdi
  WCHAR *PoolWithTag; // rax
  __int64 v6; // rdx
  ULONG NumberOfMapRegisters; // esi
  int v8; // r14d
  int v9; // eax
  char *DeviceExtension; // rbx
  void *v11; // rcx
  const WCHAR *v12; // rdx
  int v13; // r15d
  void *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v19; // [rsp+68h] [rbp-A0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v23[512]; // [rsp+98h] [rbp-70h] BYREF

  v19 = 0LL;
  P[0] = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v4 = 0LL;
  memset(v23, 0, sizeof(v23));
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  DestinationString.Buffer = (PWSTR)v23;
  RtlCopyUnicodeString(&DestinationString, &::DestinationString);
  DestinationString.Length -= 10;
  RtlAppendUnicodeToString(&DestinationString, L"Port");
  if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
  {
    DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
    RtlInitUnicodeString(&Destination, 0LL);
    Destination.MaximumLength = DestinationString.Length + 20;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(
                             PagedPool,
                             (unsigned __int16)(DestinationString.Length + 20),
                             0x43756F4Du);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 2LL);
      LODWORD(P[0]) = Destination.MaximumLength;
      MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
      goto LABEL_32;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlAppendUnicodeToString(&Destination, L"\\Device\\");
    RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
    RtlAppendUnicodeToString(&Destination, L"0");
    MouDeterminePortsServiced(&DestinationString.Length, &v21);
    NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
    v8 = 0;
    while ( 1 )
    {
      if ( NumberOfMapRegisters >= HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) || NumberOfMapRegisters >= (unsigned int)v21 )
      {
        WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters += v8;
        goto LABEL_32;
      }
      Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = NumberOfMapRegisters + 48;
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        P[0] = 0LL;
      }
      v9 = MouCreateClassObject(DriverObject, &WPP_MAIN_CB.DeviceQueue.32, &v19, (PWSTR *)P, 1);
      if ( v9 < 0 )
        break;
      DeviceExtension = (char *)v19->DeviceExtension;
      *(_QWORD *)DeviceExtension = v19;
      DeviceExtension[64] = 0;
      if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)DeviceExtension + 2) )
      {
        v11 = (void *)*((_QWORD *)DeviceExtension + 13);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0);
          *((_QWORD *)DeviceExtension + 15) = 0LL;
          *((_QWORD *)DeviceExtension + 14) = 0LL;
          *((_QWORD *)DeviceExtension + 13) = 0LL;
        }
        IoDeleteDevice(*(PDEVICE_OBJECT *)DeviceExtension);
        goto LABEL_10;
      }
      v4 = P[0];
      v12 = (const WCHAR *)P[0];
      v19->StackSize = *(_BYTE *)(*((_QWORD *)DeviceExtension + 2) + 76LL) + 1;
      v13 = MouseAddDeviceEx((KSPIN_LOCK *)DeviceExtension, v12, (__int64)FileObject);
      v19->Flags &= ~0x80u;
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        v4 = 0LL;
        P[0] = 0LL;
      }
      if ( v13 >= 0 )
      {
        v15 = (_QWORD *)qword_1C00084C8;
        v16 = DeviceExtension + 320;
        if ( *(__int64 **)qword_1C00084C8 != &qword_1C00084C0 )
          __fastfail(3u);
        *v16 = &qword_1C00084C0;
        ++v8;
        v16[1] = v15;
        *v15 = v16;
        qword_1C00084C8 = (__int64)v16;
      }
      else
      {
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        {
          ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                     + 3 * *((unsigned int *)DeviceExtension + 45));
          *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)DeviceExtension + 45)) = 0LL;
          *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)DeviceExtension + 45) + 19) = 1;
          *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)DeviceExtension + 45) + 1) = 0LL;
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
        else if ( *((_QWORD *)DeviceExtension + 42) )
        {
          FileObject = (PFILE_OBJECT)*((_QWORD *)DeviceExtension + 42);
          *((_QWORD *)DeviceExtension + 42) = 0LL;
        }
        if ( FileObject )
          ObfDereferenceObject(FileObject);
        v14 = (void *)*((_QWORD *)DeviceExtension + 13);
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0);
          *((_QWORD *)DeviceExtension + 15) = 0LL;
          *((_QWORD *)DeviceExtension + 14) = 0LL;
          *((_QWORD *)DeviceExtension + 13) = 0LL;
        }
        IoDeleteDevice(*(PDEVICE_OBJECT *)DeviceExtension);
      }
LABEL_29:
      ++NumberOfMapRegisters;
    }
    MouseClassLogError(DriverObject, -1073414143, 20008, v9, 0, 0LL, 0);
LABEL_10:
    v4 = P[0];
    goto LABEL_29;
  }
LABEL_32:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
