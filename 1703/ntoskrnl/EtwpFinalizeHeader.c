/*
 * XREFs of EtwpFinalizeHeader @ 0x14054E348
 * Callers:
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x14055808C (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x14070F288 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140087D60 (EtwpQueryUsedProcessorCount.c)
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     EtwpQueryMaximumFileSize @ 0x1401223B4 (EtwpQueryMaximumFileSize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14017E000 (ZwReadFile.c)
 *     ZwWriteFile @ 0x14017E040 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x14017E420 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x14017E860 (ZwQueryVolumeInformationFile.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x14054E168 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x140558074 (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x14070F1B8 (EtwpAddBinaryInfoEvents.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, void *a2, char a3)
{
  _QWORD *v3; // r14
  unsigned int Length; // esi
  PVOID Buffer; // rdi
  NTSTATUS v9; // ebp
  _QWORD *v10; // rbp
  unsigned int v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS result; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  int v18; // eax
  unsigned __int64 MaximumFileSize; // rax
  unsigned __int64 v20; // rdx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 FileInformation; // [rsp+58h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK v24; // [rsp+70h] [rbp-58h] BYREF
  char FsInformation[20]; // [rsp+80h] [rbp-48h] BYREF
  int v26; // [rsp+94h] [rbp-34h]

  v3 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v3 == v3 && *(_QWORD *)(a1 + 856) == a1 + 856 )
  {
    result = ZwQueryVolumeInformationFile(a2, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    if ( result < 0 )
      return result;
    Length = (v26 + 383) & ~(v26 - 1);
  }
  else
  {
    Length = *(_DWORD *)(a1 + 4);
  }
  Buffer = ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
  if ( !Buffer )
    return -1073741801;
  ByteOffset.QuadPart = 0LL;
  v9 = ZwReadFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v9 >= 0 )
  {
    if ( !a3 )
    {
      *((_DWORD *)Buffer + 35) = *(_DWORD *)(a1 + 248);
      *((_DWORD *)Buffer + 29) = EtwpQueryUsedProcessorCount(a1);
      *((_DWORD *)Buffer + 38) += *(_DWORD *)(a1 + 240);
      KeQuerySystemTimePrecise((__int64 *)Buffer + 15, v14, v15, v16);
      v17 = (unsigned __int8)EtwpIsWow64Logger(a1) == 0;
      v18 = *(_DWORD *)(a1 + 252);
      if ( v17 )
        *((_DWORD *)Buffer + 95) += v18;
      else
        *((_DWORD *)Buffer + 93) += v18;
    }
    v10 = (_QWORD *)(a1 + 856);
    if ( (_QWORD *)*v10 != v10 || (_QWORD *)*v3 != v3 )
    {
      v11 = *((_DWORD *)Buffer + 1);
      if ( v11 < Length && v11 >= 0x178 )
      {
        *((_DWORD *)Buffer + 12) = v11;
        if ( (_QWORD *)*v3 != v3 )
          EtwpAddDebugInfoEvents(a1, (__int64)Buffer, Length, (__int64 *)Buffer + 11, 3);
        if ( (_QWORD *)*v10 != v10 )
          EtwpAddBinaryInfoEvents(a1, Buffer, Length);
      }
    }
    v12 = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v9 = v12;
    if ( !a3 && v12 >= 0 && (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
    {
      MaximumFileSize = EtwpQueryMaximumFileSize(a1);
      if ( v20 < MaximumFileSize )
      {
        FileInformation = v20;
        v9 = ZwSetInformationFile(a2, &v24, &FileInformation, 8u, FileEndOfFileInformation);
      }
    }
  }
  ExFreePoolWithTag(Buffer, 0);
  return v9;
}
