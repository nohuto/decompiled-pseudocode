/*
 * XREFs of KeyboardClassFindMorePorts @ 0x1C000C010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B20 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0002DC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00032C0 (memset.c)
 *     KeyboardClassLogError @ 0x1C00049FC (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005460 (WPP_RECORDER_SF_.c)
 *     KeyboardAddDeviceEx @ 0x1C000C550 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000CCF0 (KbdCreateClassObject.c)
 */

void __fastcall KeyboardClassFindMorePorts(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  PVOID v4; // rsi
  WCHAR *PoolWithTag; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  PWSTR Buffer; // rdi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, PWSTR, _QWORD *, ULONG *); // rax
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  ULONG i; // ebx
  int ClassObject; // eax
  __int64 v17; // rdi
  void *v18; // rcx
  PVOID v19; // rdx
  int v20; // r14d
  void *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v31[512]; // [rsp+A0h] [rbp-60h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  v27 = 0LL;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  Destination.Buffer = 0LL;
  v4 = 0LL;
  P[0] = 0LL;
  memset(v31, 0, sizeof(v31));
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  DestinationString.Buffer = (PWSTR)v31;
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
                             0x4364624Bu);
    Destination.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(&Destination, L"\\Device\\");
      RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
      RtlAppendUnicodeToString(&Destination, L"0");
      v26 = 0;
      if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
      {
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
        v7 = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4364624Bu);
        v9 = v7;
        if ( v7 )
        {
          memset(v7, 0, 0x70uLL);
          v9[2] = 0LL;
          *v9 = KbdDeviceMapQueryCallback;
          Buffer = DestinationString.Buffer;
          RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
          SystemRoutineAddress = (__int64 (__fastcall *)(__int64, PWSTR, _QWORD *, ULONG *))MmGetSystemRoutineAddress(&SystemRoutineName);
          if ( !SystemRoutineAddress )
            SystemRoutineAddress = (__int64 (__fastcall *)(__int64, PWSTR, _QWORD *, ULONG *))RtlQueryRegistryValues;
          v12 = SystemRoutineAddress(2147483652LL, Buffer, v9, &v26);
          if ( v12 < 0 )
          {
            LOBYTE(v13) = 2;
            WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 78, 0, v12);
          }
          ExFreePoolWithTag(v9, 0);
        }
        else
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v8, 1LL);
        }
      }
      for ( i = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters; i < *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy; ++i )
      {
        if ( i >= v26 )
          break;
        Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = i + 48;
        ClassObject = KbdCreateClassObject(DriverObject, 1);
        if ( ClassObject >= 0 )
        {
          v17 = *(_QWORD *)(v27 + 64);
          *(_QWORD *)v17 = v27;
          *(_BYTE *)(v17 + 64) = 0;
          if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)(v17 + 16)) )
          {
            v18 = *(void **)(v17 + 104);
            if ( v18 )
            {
              ExFreePoolWithTag(v18, 0);
              *(_QWORD *)(v17 + 120) = 0LL;
              *(_QWORD *)(v17 + 112) = 0LL;
              *(_QWORD *)(v17 + 104) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v17);
            v4 = P[0];
          }
          else
          {
            v4 = P[0];
            v19 = P[0];
            *(_BYTE *)(v27 + 76) = *(_BYTE *)(*(_QWORD *)(v17 + 16) + 76LL) + 1;
            v20 = KeyboardAddDeviceEx(v17, v19, FileObject);
            *(_DWORD *)(v27 + 48) &= ~0x80u;
            if ( v4 )
            {
              ExFreePoolWithTag(v4, 0);
              v4 = 0LL;
              P[0] = 0LL;
            }
            if ( v20 >= 0 )
            {
              v22 = (_QWORD *)qword_1C00094F0;
              v23 = (_QWORD *)(v17 + 336);
              if ( *(__int64 **)qword_1C00094F0 != &qword_1C00094E8 )
                __fastfail(3u);
              *v23 = &qword_1C00094E8;
              v23[1] = v22;
              *v22 = v23;
              qword_1C00094F0 = (__int64)v23;
            }
            else
            {
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                           + 3 * *(unsigned int *)(v17 + 196));
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v17 + 196)) = 0LL;
                *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v17 + 196) + 19) = 1;
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v17 + 196) + 1) = 0LL;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              else if ( *(_QWORD *)(v17 + 352) )
              {
                FileObject = *(PFILE_OBJECT *)(v17 + 352);
                *(_QWORD *)(v17 + 352) = 0LL;
              }
              if ( FileObject )
                ObfDereferenceObject(FileObject);
              v21 = *(void **)(v17 + 104);
              if ( v21 )
              {
                ExFreePoolWithTag(v21, 0);
                *(_QWORD *)(v17 + 120) = 0LL;
                *(_QWORD *)(v17 + 112) = 0LL;
                *(_QWORD *)(v17 + 104) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v17);
            }
          }
        }
        else
        {
          KeyboardClassLogError(DriverObject, -1073414143, 10008, ClassObject, 0, 0LL, 0);
          v4 = P[0];
        }
      }
      WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = i;
    }
    else
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
      LODWORD(P[0]) = Destination.MaximumLength;
      KeyboardClassLogError(DriverObject, -1073414143, 10008, -1073741823, 1u, P, 0);
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
