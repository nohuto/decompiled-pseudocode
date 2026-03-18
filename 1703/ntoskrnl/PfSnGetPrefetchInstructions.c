/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x140565894
 * Callers:
 *     PfSnBeginScenario @ 0x1405643EC (PfSnBeginScenario.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     SmDecompressBuffer @ 0x14012D2C4 (SmDecompressBuffer.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     NtOpenFile @ 0x1405419A0 (NtOpenFile.c)
 *     PfVerifyScenarioBuffer @ 0x140565B70 (PfVerifyScenarioBuffer.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  UCHAR *v8; // r14
  unsigned int v9; // ebx
  wchar_t *PoolWithTag; // r15
  int v11; // ebx
  HANDLE v12; // rsi
  ULONG Length; // edi
  UCHAR *v14; // rax
  _DWORD *v15; // rdi
  _DWORD *v17; // [rsp+50h] [rbp-89h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-79h] BYREF
  __int64 v20; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v21[8]; // [rsp+70h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-61h] BYREF
  __int64 v23[2]; // [rsp+88h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE FileInformation[8]; // [rsp+D8h] [rbp-1h] BYREF
  ULONG NumberOfBytes; // [rsp+E0h] [rbp+7h]
  int NumberOfBytes_4; // [rsp+E4h] [rbp+Bh]

  CurrentThread = KeGetCurrentThread();
  v4 = -1LL;
  v17 = 0LL;
  FileHandle = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_14036DE38, 0LL);
  do
    ++v4;
  while ( word_14036DCD0[v4] );
  v9 = 2 * v4 + 102;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x46506343u);
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_14036DE38, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_14036DE38);
    KeAbPostRelease((ULONG_PTR)qword_14036DE38);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  RtlStringCbPrintfW(PoolWithTag, v9, L"%s\\%ws-%08X.%ws", word_14036DCD0, a1, *(_DWORD *)(a1 + 60), L"pf");
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_14036DE38, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_14036DE38);
  KeAbPostRelease((ULONG_PTR)qword_14036DE38);
  KeLeaveCriticalRegion();
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
  if ( v11 < 0 )
  {
LABEL_25:
    v12 = FileHandle;
    goto LABEL_26;
  }
  v12 = FileHandle;
  v11 = NtQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v11 < 0 )
  {
LABEL_26:
    v15 = v17;
    goto LABEL_16;
  }
  Length = NumberOfBytes;
  LODWORD(v20) = 0x10000000;
  if ( NumberOfBytes - 1 > 0xFFFFFFF || NumberOfBytes_4 )
  {
    v11 = -1073741823;
    goto LABEL_26;
  }
  v14 = (UCHAR *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x70506343u);
  v8 = v14;
  if ( !v14 )
  {
    v11 = -1073741670;
    goto LABEL_26;
  }
  v11 = NtReadFile(v12, 0LL, 0LL, 0LL, &IoStatusBlock, v14, Length, 0LL, 0LL);
  if ( v11 < 0 )
    goto LABEL_26;
  v23[0] = (__int64)PfSnScenarioAlloc;
  v23[1] = (__int64)PspQueueApcSpecialApc;
  v11 = SmDecompressBuffer(v8, Length, &v17, &v19, &v20, (__int64 (__fastcall **)(_QWORD))v23);
  if ( v11 < 0 )
    goto LABEL_26;
  v15 = v17;
  if ( (unsigned __int8)PfVerifyScenarioBuffer(v17, v19, v21) )
  {
    if ( v15[20] == a2 )
    {
      *a3 = v15;
      v15 = 0LL;
      v11 = 0;
    }
    else
    {
      v11 = -1073741823;
    }
  }
  else
  {
    v11 = -1073741701;
  }
LABEL_16:
  if ( v12 )
    NtClose(v12);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v11;
}
