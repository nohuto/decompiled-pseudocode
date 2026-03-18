/*
 * XREFs of PopFlushVolumes @ 0x140470660
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwFlushKey @ 0x1401A9100 (ZwFlushKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopFlushVolumeWorker @ 0x1404708F0 (PopFlushVolumeWorker.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 */

void __fastcall PopFlushVolumes(int a1)
{
  char v2; // al
  char v3; // di
  UCHAR Type; // al
  UCHAR Signalling; // al
  int v6; // ebx
  __int64 *v7; // rdx
  __int64 v8; // rax
  struct _LIST_ENTRY **p_Flink; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v11; // r8
  struct _LIST_ENTRY *v12; // rcx
  __int64 v13; // r9
  struct _KEVENT *v14; // rcx
  __int64 v15; // r9
  struct _KEVENT *v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  struct _LIST_ENTRY *v20; // rax
  struct _KEVENT **v21; // rax
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
    if ( byte_1403AA1C0 )
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
    v11 = *(v7 - 6);
    v12 = (struct _LIST_ENTRY *)v7;
    v7 = (__int64 *)*v7;
    v13 = *(_QWORD *)(v11 + 56);
    if ( (*(_BYTE *)(v13 + 4) & 1) != 0 && (*(_DWORD *)(v11 + 52) & 0x10006) == 0 )
    {
      v8 = *(_QWORD *)(v13 + 16);
      if ( !v8 || (*(_DWORD *)(v8 + 52) & 4) == 0 )
      {
        if ( (struct _LIST_ENTRY *)v7[1] != v12 || (p_Flink = &v12->Blink->Flink, *p_Flink != v12) )
          __fastfail(3u);
        *p_Flink = (struct _LIST_ENTRY *)v7;
        v7[1] = (__int64)p_Flink;
        Flink = StartContext[0].Header.WaitListHead.Flink;
        if ( StartContext[0].Header.WaitListHead.Flink->Flink != (struct _LIST_ENTRY *)StartContext )
          __fastfail(3u);
        v12->Blink = StartContext[0].Header.WaitListHead.Flink;
        v12->Flink = (struct _LIST_ENTRY *)StartContext;
        ++v6;
        Flink->Flink = v12;
        StartContext[0].Header.WaitListHead.Flink = v12;
      }
    }
  }
  if ( (v3 & 2) == 0 )
  {
    v14 = *(struct _KEVENT **)&StartContext[0].Header.Lock;
    while ( v14 != StartContext )
    {
      v15 = *(_QWORD *)&v14[-2].Header.Lock;
      v16 = v14;
      v14 = *(struct _KEVENT **)&v14->Header.Lock;
      if ( (*(_DWORD *)(v15 + 52) & 1) == 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v15 + 56) + 16LL);
        if ( !v17 || (*(_DWORD *)(v17 + 52) & 1) == 0 )
        {
          if ( (v3 & 0x10) == 0
            || ((v18 = *(_DWORD *)(v15 + 48), (v18 & 0x200000) == 0) || (v18 & 0x100) != 0)
            && (!v17 || (v19 = *(_DWORD *)(v17 + 48), (v19 & 0x200000) == 0) || (v19 & 0x100) != 0) )
          {
            if ( (struct _KEVENT *)v14->Header.WaitListHead.Flink != v16
              || (v20 = v16->Header.WaitListHead.Flink, (struct _KEVENT *)v20->Flink != v16) )
            {
              __fastfail(3u);
            }
            v20->Flink = (struct _LIST_ENTRY *)v14;
            v14->Header.WaitListHead.Flink = v20;
            v21 = (struct _KEVENT **)qword_1403AA8D8;
            if ( *(__int64 **)qword_1403AA8D8 != &PopVolumeDevices )
              __fastfail(3u);
            *(_QWORD *)&v16->Header.Lock = &PopVolumeDevices;
            --v6;
            v16->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v21;
            *v21 = v16;
            qword_1403AA8D8 = (__int64)v16;
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
             PopFlushVolumeWorker,
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
