/*
 * XREFs of KsepShimDbChanged @ 0x140170554
 * Callers:
 *     KseQueryDeviceData @ 0x14061D690 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140744990 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401A76E0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14024D344 (KsepLogError.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi
  NTSTATUS v2; // ecx
  __int64 v3; // rdx
  NTSTATUS v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 v10; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  _BYTE FileInformation[16]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+98h] [rbp+2Fh]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  FileHandle = 0LL;
  v1 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v2 < 0 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = v2;
    KsepHistoryErrors[2 * v8] = 590541;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    v9 = "KSE: ZwOpenFile failed opening DB file!\n";
    goto LABEL_16;
  }
  v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( v4 < 0 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = v4;
    KsepHistoryErrors[2 * v10] = 590554;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwQueryInformationFile failed getting DB file!\n");
    v9 = "KSE: ZwQueryInformationFile failed getting DB file!\n";
LABEL_16:
    KsepLogError(0LL, v9);
    goto LABEL_6;
  }
  if ( KsepSdbFileTime )
  {
    if ( v16 != KsepSdbFileTime )
    {
      KsepSdbFileTime = v16;
      v1 = 1;
    }
  }
  else
  {
    KsepSdbFileTime = v16;
  }
LABEL_6:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock, v3, v5, v6);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( FileHandle )
    ZwClose(FileHandle);
  return v1;
}
