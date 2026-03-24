/*
 * XREFs of KbdCreateClassObject @ 0x1C000CCF0
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000C010 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000C2C0 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C000F030 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0001A60 (WPP_RECORDER_SF_S.c)
 *     KbdInitializeDataQueue @ 0x1C0002400 (KbdInitializeDataQueue.c)
 *     RtlUnicodeStringPrintf @ 0x1C0002480 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0002DC0 (__security_check_cookie.c)
 *     memset @ 0x1C00032C0 (memset.c)
 *     KeyboardClassLogError @ 0x1C00049FC (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005460 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KbdCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        __int64 *a4,
        char a5)
{
  __int64 DeviceExtension; // rdi
  __int128 *v8; // rsi
  int v10; // r15d
  unsigned __int16 v11; // ax
  WCHAR *PoolWithTag; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  NTSTATUS v17; // ebx
  int v18; // r8d
  PWSTR Buffer; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v22; // xmm0
  SIZE_T v23; // rdx
  PVOID v24; // rax
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rdx
  int v28; // esi
  PDEVICE_OBJECT v30; // rcx
  void *v31; // rcx
  int v32; // r9d
  NTSTATUS Device; // eax
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-50h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-50h]
  PWSTR Exclusive; // [rsp+28h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-20h]
  int v39; // [rsp+54h] [rbp-1Ch]
  _DWORD v40[4]; // [rsp+58h] [rbp-18h] BYREF

  DeviceExtension = 0LL;
  v39 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v8 = a2;
  v38 = 0;
  v10 = 10000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 1LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v11 = ::DestinationString.Length + 30;
    DestinationString.MaximumLength = ::DestinationString.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v11 = ::DestinationString.Length + 44;
      DestinationString.MaximumLength = ::DestinationString.Length + 44;
    }
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v11, 0x4364624Bu);
    DestinationString.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.MaximumLength);
      do
      {
        if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
          v14 = L"\\Device\\%wZLegacy%d";
        else
          v14 = L"\\Device\\%wZ%d";
        v15 = (unsigned int)dword_1C0009514++;
        v17 = RtlUnicodeStringPrintf(&DestinationString, v14, &::DestinationString, v15);
        if ( v17 < 0 )
        {
          v32 = 72;
          Exclusive = DestinationString.Buffer;
          goto LABEL_42;
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v16) = 5;
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            v18,
            73,
            DeviceCharacteristics,
            (__int64)DestinationString.Buffer);
        }
        v17 = IoCreateDevice(DriverObject, 0x180u, &DestinationString, 0xBu, 0, 0, a3);
      }
      while ( v17 == -1073741771 );
      v10 = 10000;
      if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
      {
        v16 = (unsigned __int64)DestinationString.Length >> 1;
        DestinationString.Buffer[v16 + 1] = 0;
        Buffer = DestinationString.Buffer;
        *a4 = (__int64)DestinationString.Buffer;
        goto LABEL_18;
      }
      v17 = -1073741823;
      v28 = 0;
    }
    else
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 1LL);
      v17 = -1073741823;
      v40[0] = DestinationString.MaximumLength;
      v28 = -1073414143;
      v10 = 10006;
      v38 = 1;
    }
    goto LABEL_29;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  Device = IoCreateDevice(DriverObject, 0x180u, 0LL, 0xBu, 0, 0, a3);
  Buffer = DestinationString.Buffer;
  v17 = Device;
  *a4 = 0LL;
LABEL_18:
  if ( v17 < 0 || !*a3 )
  {
    v32 = 74;
    Exclusive = Buffer;
LABEL_42:
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v16, v18, v32, DeviceCharacteristics, (__int64)Exclusive);
    v10 = 10006;
    v40[0] = DestinationString.MaximumLength;
    v28 = -1073414131;
    v38 = 1;
LABEL_24:
    if ( !v17 )
      goto LABEL_25;
    goto LABEL_29;
  }
  (*a3)->Flags |= 4u;
  v20 = 3LL;
  DeviceExtension = (__int64)(*a3)->DeviceExtension;
  v21 = DeviceExtension;
  do
  {
    v21 += 128LL;
    v22 = *v8;
    v8 += 8;
    *(_OWORD *)(v21 - 128) = v22;
    *(_OWORD *)(v21 - 112) = *(v8 - 7);
    *(_OWORD *)(v21 - 96) = *(v8 - 6);
    *(_OWORD *)(v21 - 80) = *(v8 - 5);
    *(_OWORD *)(v21 - 64) = *(v8 - 4);
    *(_OWORD *)(v21 - 48) = *(v8 - 3);
    *(_OWORD *)(v21 - 32) = *(v8 - 2);
    *(_OWORD *)(v21 - 16) = *(v8 - 1);
    --v20;
  }
  while ( v20 );
  *(_QWORD *)DeviceExtension = *a3;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x4364624Bu, 0, 0, 0x20u);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 160));
  *(_QWORD *)(DeviceExtension + 176) = DeviceExtension + 168;
  *(_QWORD *)(DeviceExtension + 168) = DeviceExtension + 168;
  v23 = *(unsigned int *)(DeviceExtension + 140);
  *(_DWORD *)(DeviceExtension + 80) = 0;
  v24 = ExAllocatePoolWithTag((POOL_TYPE)512, v23, 0x4364624Bu);
  *(_QWORD *)(DeviceExtension + 104) = v24;
  if ( v24 )
  {
    KbdInitializeDataQueue(DeviceExtension, v25);
    v28 = v39;
    goto LABEL_24;
  }
  LOBYTE(v25) = 2;
  WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v25, v26, 75, DeviceCharacteristicsa, *a4);
  v17 = -1073741670;
  v28 = -1073414142;
  v10 = 10020;
LABEL_29:
  RtlFreeUnicodeString(&DestinationString);
  *a4 = 0LL;
  if ( v28 )
  {
    v30 = *a3;
    if ( !*a3 )
      v30 = (PDEVICE_OBJECT)DriverObject;
    KeyboardClassLogError(v30, v28, v10, v17, v38, v40, 0);
  }
  if ( DeviceExtension )
  {
    v31 = *(void **)(DeviceExtension + 104);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0);
      *(_QWORD *)(DeviceExtension + 104) = 0LL;
    }
  }
  if ( *a3 )
  {
    IoDeleteDevice(*a3);
    *a3 = 0LL;
  }
LABEL_25:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v27) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v27, 1LL);
  }
  return (unsigned int)v17;
}
