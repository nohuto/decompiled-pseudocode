/*
 * XREFs of PopFlushVolumeWorker @ 0x14040B800
 * Callers:
 *     PopFlushVolumes @ 0x14040B580 (PopFlushVolumes.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwFlushBuffersFile @ 0x14017E8A0 (ZwFlushBuffersFile.c)
 *     ZwCreateFile @ 0x14017E9E0 (ZwCreateFile.c)
 *     PopFlushAndHold @ 0x14022F7E0 (PopFlushAndHold.c)
 *     ObQueryNameString @ 0x14044D030 (ObQueryNameString.c)
 *     NtDeviceIoControlFile @ 0x140527FB0 (NtDeviceIoControlFile.c)
 */

void __fastcall PopFlushVolumeWorker(struct _KEVENT *StartContext)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+70h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+B8h] [rbp-50h] BYREF

  ExAcquireFastMutex(&PopVolumeLock);
  while ( 1 )
  {
    v2 = *(_QWORD **)&StartContext->Header.Lock;
    if ( *(struct _KEVENT **)&StartContext->Header.Lock == StartContext )
      break;
    v3 = *v2;
    v4 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = (_QWORD *)qword_14034B9F8;
    if ( *(__int64 **)qword_14034B9F8 != &PopVolumeDevices )
      __fastfail(3u);
    *v2 = &PopVolumeDevices;
    v2[1] = v5;
    *v5 = v2;
    qword_14034B9F8 = (__int64)v2;
    KeReleaseGuardedMutex(&PopVolumeLock);
    if ( ObQueryNameString((PVOID)*(v2 - 6), &ObjectNameInfo, 0x200u, &ReturnLength) >= 0 )
    {
      if ( ObjectNameInfo.Name.Buffer )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObjectNameInfo;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateFile(
               &FileHandle,
               0x100003u,
               &ObjectAttributes,
               &IoStatusBlock,
               0LL,
               0xC0000000,
               3u,
               1u,
               0x20u,
               0LL,
               0) >= 0 )
        {
          if ( StartContext[2].Header.Type )
          {
            PopFlushAndHold(FileHandle, &IoStatusBlock);
          }
          else if ( StartContext[2].Header.Signalling )
          {
            NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x53C004u, 0LL, 0, 0LL, 0);
          }
          else
          {
            ZwFlushBuffersFile(FileHandle, &IoStatusBlock);
          }
          ZwClose(FileHandle);
        }
      }
    }
    ExAcquireFastMutex(&PopVolumeLock);
  }
  if ( LODWORD(StartContext->Header.WaitListHead.Blink)-- == 1 )
    KeSetEvent(StartContext + 1, 0, 0);
  KeReleaseGuardedMutex(&PopVolumeLock);
}
