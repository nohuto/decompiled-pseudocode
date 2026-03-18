/*
 * XREFs of PopFlushVolumes @ 0x140436890
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwFlushKey @ 0x14017F4E0 (ZwFlushKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopFlushVolumeWorker @ 0x140436680 (PopFlushVolumeWorker.c)
 *     PsCreateSystemThread @ 0x140554950 (PsCreateSystemThread.c)
 */

void __fastcall PopFlushVolumes(int a1)
{
  char v2; // al
  char v3; // di
  UCHAR Type; // al
  UCHAR Signalling; // al
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  struct _LIST_ENTRY *v12; // rax
  __int64 v13; // r8
  struct _LIST_ENTRY **v14; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KEVENT *v16; // rdx
  struct _KEVENT *v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  struct _KEVENT *v22; // rax
  __int64 v23; // r8
  struct _LIST_ENTRY *v24; // rcx
  struct _LIST_ENTRY *v25; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  struct _KEVENT StartContext[4]; // [rsp+80h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE ThreadHandle; // [rsp+100h] [rbp+77h] BYREF

  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_START);
  memset(StartContext, 0, 0x38uLL);
  StartContext[0].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)StartContext;
  *(_QWORD *)&StartContext[0].Header.Lock = StartContext;
  KeInitializeEvent(&StartContext[1], NotificationEvent, 0);
  if ( a1 == 6 )
  {
    v2 = 2;
  }
  else
  {
    v2 = PopFlushPolicy;
    if ( byte_140365B40 )
      v2 = 3;
  }
  v3 = v2 | 0x10;
  if ( a1 != 5 )
    v3 = v2;
  Type = StartContext[2].Header.Type;
  if ( (v3 & 4) != 0 )
    Type = 1;
  StartContext[2].Header.Type = Type;
  Signalling = StartContext[2].Header.Signalling;
  if ( (v3 & 8) != 0 )
    Signalling = 1;
  StartContext[2].Header.Signalling = Signalling;
  if ( (v3 & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
  }
  v6 = 0;
  ExAcquireFastMutex(&PopVolumeLock);
  v7 = (__int64 *)PopVolumeDevices;
  while ( v7 != &PopVolumeDevices )
  {
    v8 = v7 - 9;
    v7 = (__int64 *)*v7;
    v9 = v8[3];
    v10 = *(_QWORD *)(v9 + 56);
    if ( (*(_BYTE *)(v10 + 4) & 1) != 0 && (*(_DWORD *)(v9 + 52) & 0x10006) == 0 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      if ( !v11 || (*(_DWORD *)(v11 + 52) & 4) == 0 )
      {
        v12 = (struct _LIST_ENTRY *)(v8 + 9);
        v13 = v8[9];
        if ( *(__int64 **)(v13 + 8) != v8 + 9 || (v14 = (struct _LIST_ENTRY **)v8[10], *v14 != v12) )
          __fastfail(3u);
        *v14 = (struct _LIST_ENTRY *)v13;
        *(_QWORD *)(v13 + 8) = v14;
        Flink = StartContext[0].Header.WaitListHead.Flink;
        if ( StartContext[0].Header.WaitListHead.Flink->Flink != (struct _LIST_ENTRY *)StartContext )
          __fastfail(3u);
        v8[10] = (__int64)StartContext[0].Header.WaitListHead.Flink;
        v12->Flink = (struct _LIST_ENTRY *)StartContext;
        ++v6;
        Flink->Flink = v12;
        StartContext[0].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v8 + 9);
      }
    }
  }
  if ( (v3 & 2) == 0 )
  {
    v16 = *(struct _KEVENT **)&StartContext[0].Header.Lock;
    while ( v16 != StartContext )
    {
      v17 = v16 - 3;
      v16 = *(struct _KEVENT **)&v16->Header.Lock;
      v18 = *(_QWORD *)&v17[1].Header.Lock;
      if ( (*(_DWORD *)(v18 + 52) & 1) == 0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 56) + 16LL);
        if ( !v19 || (*(_DWORD *)(v19 + 52) & 1) == 0 )
        {
          if ( (v3 & 0x10) == 0
            || ((v20 = *(_DWORD *)(v18 + 48), (v20 & 0x200000) == 0) || (v20 & 0x100) != 0)
            && (!v19 || (v21 = *(_DWORD *)(v19 + 48), (v21 & 0x200000) == 0) || (v21 & 0x100) != 0) )
          {
            v22 = v17 + 3;
            v23 = *(_QWORD *)&v17[3].Header.Lock;
            if ( *(struct _KEVENT **)(v23 + 8) != &v17[3]
              || (v24 = v17[3].Header.WaitListHead.Flink, (struct _KEVENT *)v24->Flink != v22) )
            {
              __fastfail(3u);
            }
            v24->Flink = (struct _LIST_ENTRY *)v23;
            *(_QWORD *)(v23 + 8) = v24;
            v25 = (struct _LIST_ENTRY *)qword_140366078;
            if ( *(__int64 **)qword_140366078 != &PopVolumeDevices )
              __fastfail(3u);
            *(_QWORD *)&v22->Header.Lock = &PopVolumeDevices;
            --v6;
            v17[3].Header.WaitListHead.Flink = v25;
            v25->Flink = (struct _LIST_ENTRY *)v22;
            qword_140366078 = (__int64)&v17[3];
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopVolumeLock);
  if ( v6 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    if ( v6 > 8 )
      v6 = 8;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(StartContext[0].Header.WaitListHead.Blink) = v6;
    while ( --v6 > 0 )
    {
      if ( PsCreateSystemThread(
             &ThreadHandle,
             0x1FFFFFu,
             &ObjectAttributes,
             0LL,
             0LL,
             (PKSTART_ROUTINE)PopFlushVolumeWorker,
             StartContext) < 0 )
      {
        ExAcquireFastMutex(&PopVolumeLock);
        LODWORD(StartContext[0].Header.WaitListHead.Blink) -= v6;
        KeReleaseGuardedMutex(&PopVolumeLock);
        break;
      }
      ZwClose(ThreadHandle);
    }
    PopFlushVolumeWorker(StartContext);
    KeWaitForSingleObject(&StartContext[1], Executive, 0, 0, 0LL);
  }
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_FLUSHVOLUMES_STOP);
}
