/*
 * XREFs of EtwpFinalizeHeader @ 0x1405879E8
 * Callers:
 *     EtwpCreateLogFile @ 0x1405884D0 (EtwpCreateLogFile.c)
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1407AD440 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryMaximumFileSize @ 0x1400D2F20 (EtwpQueryMaximumFileSize.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400D4558 (EtwpQueryUsedProcessorCount.c)
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401A7580 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401A75C0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1401A79A0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401A7DE0 (ZwQueryVolumeInformationFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x140587C2C (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x140588E6C (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x1407AD2C4 (EtwpAddBinaryInfoEvents.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, void *a2, char a3)
{
  _QWORD *v3; // r14
  ULONG Length; // esi
  char v8; // r12
  LARGE_INTEGER *Buffer; // rdi
  NTSTATUS v10; // ebp
  unsigned int HighPart; // eax
  NTSTATUS v12; // eax
  NTSTATUS result; // eax
  int v14; // edx
  unsigned __int64 MaximumFileSize; // rax
  unsigned __int64 v16; // r8
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 FileInformation; // [rsp+58h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK v20; // [rsp+70h] [rbp-68h] BYREF
  char FsInformation[20]; // [rsp+80h] [rbp-58h] BYREF
  int v22; // [rsp+94h] [rbp-44h]

  v3 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v3 == v3 && *(_QWORD *)(a1 + 1024) == a1 + 1024 && !*(_DWORD *)(a1 + 136) )
  {
    v8 = 0;
    result = ZwQueryVolumeInformationFile(a2, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    if ( result < 0 )
      return result;
    Length = (v22 + 383) & ~(v22 - 1);
  }
  else
  {
    Length = *(_DWORD *)(a1 + 4);
    v8 = 1;
  }
  Buffer = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
  if ( !Buffer )
    return -1073741801;
  ByteOffset.QuadPart = 0LL;
  v10 = ZwReadFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v10 >= 0 )
  {
    if ( !a3 )
    {
      Buffer[17].HighPart = *(_DWORD *)(a1 + 264);
      Buffer[14].HighPart = EtwpQueryUsedProcessorCount(a1);
      Buffer[19].LowPart += *(_DWORD *)(a1 + 256);
      KeQuerySystemTimePrecise(Buffer + 15);
      if ( (unsigned __int8)EtwpIsWow64Logger(a1, *(unsigned int *)(a1 + 268)) )
        Buffer[46].HighPart += v14;
      else
        Buffer[47].HighPart += v14;
    }
    if ( v8 )
    {
      HighPart = Buffer->HighPart;
      if ( HighPart < Length && HighPart >= 0x178 )
      {
        Buffer[6].LowPart = HighPart;
        if ( (_QWORD *)*v3 != v3 || *(_DWORD *)(a1 + 136) )
          EtwpAddDebugInfoEvents(a1, (_DWORD)Buffer, Length, (_DWORD)Buffer + 88, 3);
        if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 )
          EtwpAddBinaryInfoEvents(a1, Buffer, Length, 2LL);
      }
    }
    v12 = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v10 = v12;
    if ( !a3 && v12 >= 0 && (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
    {
      MaximumFileSize = EtwpQueryMaximumFileSize(a1);
      if ( v16 < MaximumFileSize )
      {
        FileInformation = v16;
        v10 = ZwSetInformationFile(a2, &v20, &FileInformation, 8u, FileEndOfFileInformation);
      }
    }
  }
  ExFreePoolWithTag(Buffer, 0);
  return v10;
}
