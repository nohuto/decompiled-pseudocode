/*
 * XREFs of EtwpFinalizeHeader @ 0x1405776D0
 * Callers:
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x140577D70 (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x14074AF90 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140025920 (KeQuerySystemTimePrecise.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     EtwpQueryMaximumFileSize @ 0x1400E0BAC (EtwpQueryMaximumFileSize.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14017D980 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14017D9C0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14017E1E0 (ZwQueryVolumeInformationFile.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x140577900 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x140578ADC (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x14074AE14 (EtwpAddBinaryInfoEvents.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, void *a2, char a3)
{
  _QWORD *v3; // r14
  ULONG Length; // esi
  char v8; // r12
  unsigned int *Buffer; // rdi
  NTSTATUS v10; // ebp
  bool v11; // zf
  int v12; // eax
  unsigned int v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS result; // eax
  unsigned __int64 MaximumFileSize; // rax
  unsigned __int64 v17; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 FileInformation; // [rsp+58h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK v21; // [rsp+70h] [rbp-68h] BYREF
  char FsInformation[20]; // [rsp+80h] [rbp-58h] BYREF
  int v23; // [rsp+94h] [rbp-44h]

  v3 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v3 == v3 && *(_QWORD *)(a1 + 2168) == a1 + 2168 && !*(_DWORD *)(a1 + 136) )
  {
    v8 = 0;
    result = ZwQueryVolumeInformationFile(a2, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    if ( result < 0 )
      return result;
    Length = (v23 + 383) & ~(v23 - 1);
  }
  else
  {
    Length = *(_DWORD *)(a1 + 4);
    v8 = 1;
  }
  Buffer = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
  if ( !Buffer )
    return -1073741801;
  ByteOffset.QuadPart = 0LL;
  v10 = ZwReadFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v10 >= 0 )
  {
    if ( !a3 )
    {
      Buffer[35] = *(_DWORD *)(a1 + 264);
      Buffer[29] = EtwpQueryUsedProcessorCount(a1);
      Buffer[38] += *(_DWORD *)(a1 + 256);
      KeQuerySystemTimePrecise((_QWORD *)Buffer + 15);
      v11 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
      v12 = *(_DWORD *)(a1 + 268);
      if ( v11 )
        Buffer[95] += v12;
      else
        Buffer[93] += v12;
    }
    if ( v8 )
    {
      v13 = Buffer[1];
      if ( v13 < Length && v13 >= 0x178 )
      {
        Buffer[12] = v13;
        if ( (_QWORD *)*v3 != v3 || *(_DWORD *)(a1 + 136) )
          EtwpAddDebugInfoEvents(a1, (_DWORD)Buffer, Length, (_DWORD)Buffer + 88, 3);
        if ( *(_QWORD *)(a1 + 2168) != a1 + 2168 )
          EtwpAddBinaryInfoEvents(a1, Buffer, Length, 2LL);
      }
    }
    v14 = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v10 = v14;
    if ( !a3 && v14 >= 0 && (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
    {
      MaximumFileSize = EtwpQueryMaximumFileSize(a1);
      if ( v17 < MaximumFileSize )
      {
        FileInformation = v17;
        v10 = ZwSetInformationFile(a2, &v21, &FileInformation, 8u, FileEndOfFileInformation);
      }
    }
  }
  ExFreePoolWithTag(Buffer, 0);
  return v10;
}
