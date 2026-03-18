/*
 * XREFs of EtwpUpdateFileHeader @ 0x1405887F0
 * Callers:
 *     EtwpCreateLogFile @ 0x1405884D0 (EtwpCreateLogFile.c)
 * Callees:
 *     EtwpQueryMaximumFileSize @ 0x1400D2F20 (EtwpQueryMaximumFileSize.c)
 *     EtwpResetBufferHeader @ 0x1400D3A60 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1400D3BF4 (EtwpInitializeBufferHeader.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400D4558 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401A7580 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401A75C0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1401A76E0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401A79A0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401A7DE0 (ZwQueryVolumeInformationFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x14058896C (EtwpAddLogHeader.c)
 *     EtwpIsWow64Logger @ 0x140588E6C (EtwpIsWow64Logger.c)
 */

NTSTATUS __fastcall EtwpUpdateFileHeader(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  int v5; // r13d
  ULONG Length; // r12d
  _DWORD *PoolWithTag; // rax
  __int64 Buffer; // rsi
  NTSTATUS v9; // ebx
  void *v10; // rcx
  __int64 v11; // rdx
  char v12; // dl
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 MaximumFileSize; // rax
  void *v17; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK v20; // [rsp+70h] [rbp-11h] BYREF
  _BYTE FileInformation[8]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v22; // [rsp+88h] [rbp+7h]
  _BYTE FsInformation[20]; // [rsp+98h] [rbp+17h] BYREF
  int v24; // [rsp+ACh] [rbp+2Bh]

  result = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 816),
             &IoStatusBlock,
             FsInformation,
             0x18u,
             FileFsSizeInformation);
  if ( result >= 0 )
  {
    v5 = v24 - 1;
    if ( a2 )
    {
      Length = ~v5 & (v24 + 383);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 4);
      if ( (v5 & Length) != 0 )
        return -1073741306;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
    Buffer = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return -1073741801;
    if ( !a2 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, PoolWithTag);
      EtwpResetBufferHeader(Buffer, 4);
      EtwpAddLogHeader(a1, Buffer);
      v9 = ZwWriteFile(*(HANDLE *)(a1 + 816), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
        {
          MaximumFileSize = EtwpQueryMaximumFileSize(a1);
          v17 = *(void **)(a1 + 816);
          ByteOffset.QuadPart = MaximumFileSize;
          v9 = ZwSetInformationFile(v17, &v20, &ByteOffset, 8u, FileEndOfFileInformation);
        }
        if ( v9 >= 0 )
        {
          *(_DWORD *)(a1 + 264) = 1;
          *(_DWORD *)(a1 + 220) = 1;
          *(_QWORD *)(a1 + 232) = Length;
        }
      }
      goto LABEL_11;
    }
    v10 = *(void **)(a1 + 816);
    ByteOffset.QuadPart = 0LL;
    v9 = ZwReadFile(v10, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, &ByteOffset, 0LL);
    if ( v9 >= 0 )
    {
      v11 = *(unsigned int *)(Buffer + 136);
      if ( (v11 & 0x4000402) != 0 )
      {
        v9 = -1073741811;
        *(_DWORD *)(a1 + 60) = 1;
      }
      else
      {
        if ( *(_BYTE *)(Buffer + 108) != 10 || *(_BYTE *)(Buffer + 109) )
        {
          v9 = -1073741811;
          *(_DWORD *)(a1 + 60) = 2;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(Buffer + 148) == ((unsigned __int8)EtwpIsWow64Logger(a1, v11) != 0 ? 4 : 8) )
        {
          v13 = *(unsigned int *)(Buffer + 104);
          LODWORD(v14) = *(_DWORD *)(Buffer + 140);
          if ( (v5 & (unsigned int)v13) != 0 )
          {
            v9 = -1073741306;
          }
          else
          {
            if ( (unsigned int)(v13 - 1024) > 0xFFFC00 )
            {
              v9 = -1073741811;
              *(_DWORD *)(a1 + 60) = 4;
              goto LABEL_11;
            }
            if ( (*(_DWORD *)(a1 + 832) & 2) == 0 || *(_DWORD *)(a1 + 4) == (_DWORD)v13 )
            {
              if ( !*(_QWORD *)(Buffer + 120) )
              {
                if ( (v12 & 0x20) != 0 )
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 6;
                  goto LABEL_11;
                }
                v9 = ZwQueryInformationFile(
                       *(HANDLE *)(a1 + 816),
                       &IoStatusBlock,
                       FileInformation,
                       0x18u,
                       FileStandardInformation);
                if ( v9 < 0 )
                {
                  *(_DWORD *)(a1 + 60) = 7;
                  goto LABEL_11;
                }
                v15 = EtwpQueryMaximumFileSize(a1);
                if ( v15 > 0 && v22 >= v15 )
                {
                  v9 = -1073741432;
                  *(_DWORD *)(a1 + 60) = 8;
                  goto LABEL_11;
                }
                v14 = v22 / v13;
              }
              if ( (_DWORD)v14 )
              {
                if ( *(_DWORD *)(Buffer + 116) == (unsigned int)EtwpQueryUsedProcessorCount(a1) )
                {
                  *(_QWORD *)(Buffer + 120) = 0LL;
                  v9 = ZwWriteFile(
                         *(HANDLE *)(a1 + 816),
                         0LL,
                         0LL,
                         0LL,
                         &IoStatusBlock,
                         (PVOID)Buffer,
                         Length,
                         &ByteOffset,
                         0LL);
                  if ( v9 >= 0 )
                  {
                    *(_DWORD *)(a1 + 264) = v14;
                    *(_DWORD *)(a1 + 220) = v14;
                    *(_DWORD *)(a1 + 4) = v13;
                    *(_QWORD *)(a1 + 232) = (unsigned int)(v13 * v14);
                  }
                }
                else
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 10;
                }
              }
              else
              {
                v9 = -1073741811;
                *(_DWORD *)(a1 + 60) = 9;
              }
              goto LABEL_11;
            }
            v9 = -1073741306;
            *(_DWORD *)(a1 + 60) = 5;
          }
        }
        else
        {
          v9 = -1073741811;
          *(_DWORD *)(a1 + 60) = 3;
        }
      }
    }
LABEL_11:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return v9;
  }
  return result;
}
