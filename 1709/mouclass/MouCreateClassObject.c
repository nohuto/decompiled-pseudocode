/*
 * XREFs of MouCreateClassObject @ 0x1C000B3D8
 * Callers:
 *     MouseAddDevice @ 0x1C000BB00 (MouseAddDevice.c)
 *     MouseClassFindMorePorts @ 0x1C000C3D0 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C000E080 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00016D0 (__security_check_cookie.c)
 *     memset @ 0x1C0001B40 (memset.c)
 *     MouInitializeDataQueue @ 0x1C0002424 (MouInitializeDataQueue.c)
 *     MouseClassLogError @ 0x1C000299C (MouseClassLogError.c)
 *     RtlUnicodeStringPrintf @ 0x1C0004450 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004500 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0004740 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall MouCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        _OWORD *a2,
        PDEVICE_OBJECT *a3,
        PWSTR *a4,
        char a5)
{
  __int64 DeviceExtension; // rsi
  int v6; // r12d
  PWSTR *v7; // r13
  _OWORD *v9; // r14
  int v11; // r15d
  unsigned __int16 v12; // ax
  WCHAR *PoolWithTag; // rax
  __int64 v14; // rdx
  NTSTATUS v15; // ebx
  unsigned int v16; // r14d
  const wchar_t *v17; // rdx
  __int64 v18; // r9
  const wchar_t *Buffer; // rcx
  __int64 v20; // rdx
  NTSTATUS Device; // eax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  SIZE_T v25; // rdx
  PVOID v26; // rax
  __int64 v27; // rdx
  void *v28; // rcx
  void *v29; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  PWSTR *v34; // [rsp+58h] [rbp-28h]
  PDRIVER_OBJECT DriverObjecta; // [rsp+60h] [rbp-20h]
  int v36[4]; // [rsp+68h] [rbp-18h] BYREF

  v34 = a4;
  DeviceExtension = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  v6 = 0;
  DestinationString.Buffer = 0LL;
  v7 = a4;
  DriverObjecta = DriverObject;
  v9 = a2;
  v11 = 20000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    Device = IoCreateDevice(DriverObject, 0x160u, 0LL, 0xFu, 0, 0, a3);
    Buffer = DestinationString.Buffer;
    *v7 = 0LL;
    v15 = Device;
    goto LABEL_22;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  v12 = ::DestinationString.Length + 30;
  DestinationString.MaximumLength = ::DestinationString.Length + 30;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
  {
    v12 = ::DestinationString.Length + 44;
    DestinationString.MaximumLength = ::DestinationString.Length + 44;
  }
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v12, 0x43756F4Du);
  DestinationString.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, DestinationString.MaximumLength);
    do
    {
      if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) || (v17 = L"\\Device\\%wZLegacy%d", !a5) )
        v17 = L"\\Device\\%wZ%d";
      v18 = (unsigned int)dword_1C00084E8++;
      v15 = RtlUnicodeStringPrintf(&DestinationString, v17, &::DestinationString, v18);
      if ( v15 < 0 )
      {
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0x45u,
          DeviceCharacteristics,
          DestinationString.Buffer);
        v7 = v34;
        goto LABEL_30;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x46u,
          DeviceCharacteristics,
          DestinationString.Buffer);
      v15 = IoCreateDevice(DriverObjecta, 0x160u, &DestinationString, 0xFu, 0, 0, a3);
    }
    while ( v15 == -1073741771 );
    v7 = v34;
    if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
    {
      v15 = -1073741823;
      v16 = 0;
      goto LABEL_32;
    }
    DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
    Buffer = DestinationString.Buffer;
    *v7 = DestinationString.Buffer;
LABEL_22:
    if ( v15 >= 0 && *a3 )
    {
      (*a3)->Flags |= 4u;
      v22 = 2LL;
      DeviceExtension = (__int64)(*a3)->DeviceExtension;
      v23 = (_OWORD *)DeviceExtension;
      do
      {
        *v23 = *v9;
        v23[1] = v9[1];
        v23[2] = v9[2];
        v23[3] = v9[3];
        v23[4] = v9[4];
        v23[5] = v9[5];
        v23[6] = v9[6];
        v23 += 8;
        v24 = v9[7];
        v9 += 8;
        *(v23 - 1) = v24;
        --v22;
      }
      while ( v22 );
      *v23 = *v9;
      v23[1] = v9[1];
      v23[2] = v9[2];
      v23[3] = v9[3];
      v23[4] = v9[4];
      v23[5] = v9[5];
      *(_QWORD *)DeviceExtension = *a3;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x43756F4Du, 0, 0, 0x20u);
      KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 144));
      v16 = 0;
      *(_QWORD *)(DeviceExtension + 160) = DeviceExtension + 152;
      *(_QWORD *)(DeviceExtension + 152) = DeviceExtension + 152;
      v25 = *(unsigned int *)(DeviceExtension + 136);
      *(_DWORD *)(DeviceExtension + 80) = 0;
      v26 = ExAllocatePoolWithTag((POOL_TYPE)512, v25, 0x43756F4Du);
      *(_QWORD *)(DeviceExtension + 104) = v26;
      if ( !v26 )
      {
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0x48u,
          DeviceCharacteristicsa,
          DestinationString.Buffer);
        v15 = -1073741670;
        v6 = -1073414142;
        v11 = 20020;
        goto LABEL_32;
      }
      MouInitializeDataQueue(DeviceExtension, v27);
      v16 = 0;
    }
    else
    {
      WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x47u, DeviceCharacteristics, Buffer);
LABEL_30:
      v16 = 1;
      v36[0] = DestinationString.MaximumLength;
      v11 = 20006;
      v6 = -1073414131;
    }
    if ( !v15 )
      goto LABEL_41;
    goto LABEL_32;
  }
  LOBYTE(v14) = 2;
  WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 2LL);
  v15 = -1073741823;
  v7 = v34;
  v6 = -1073414143;
  v36[0] = DestinationString.MaximumLength;
  v11 = 20006;
  v16 = 1;
LABEL_32:
  RtlFreeUnicodeString(&DestinationString);
  *v7 = 0LL;
  if ( v6 )
  {
    v28 = *a3;
    if ( !*a3 )
      v28 = DriverObjecta;
    MouseClassLogError(v28, v6, v11, v15, v16, v36, 0);
  }
  if ( DeviceExtension )
  {
    v29 = *(void **)(DeviceExtension + 104);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *(_QWORD *)(DeviceExtension + 104) = 0LL;
    }
  }
  if ( *a3 )
  {
    IoDeleteDevice(*a3);
    *a3 = 0LL;
  }
LABEL_41:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v20, 2LL);
  }
  return (unsigned int)v15;
}
