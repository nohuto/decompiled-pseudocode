/*
 * XREFs of BiLogFileOwnerProcess @ 0x140265F0C
 * Callers:
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017E160 (ZwQueryInformationFile.c)
 *     ZwQueryInformationProcess @ 0x14017E260 (ZwQueryInformationProcess.c)
 *     ZwOpenProcess @ 0x14017E400 (ZwOpenProcess.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 *     BiIsLogEnabled @ 0x140735688 (BiIsLogEnabled.c)
 */

void __fastcall BiLogFileOwnerProcess(UNICODE_STRING *a1, ULONG a2)
{
  unsigned int *v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  const wchar_t *v7; // rdx
  unsigned int *PoolWithTag; // rax
  const wchar_t *v9; // rdx
  unsigned int v10; // r14d
  NTSTATUS v11; // eax
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  const wchar_t *v14; // r9
  CLIENT_ID ClientId; // [rsp+30h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES v18; // [rsp+80h] [rbp-9h] BYREF
  ULONG Length; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE ProcessHandle; // [rsp+100h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+7Fh] BYREF

  Length = a2;
  v3 = 0LL;
  ProcessHandle = 0LL;
  FileHandle = 0LL;
  v4 = 0LL;
  if ( !(unsigned __int8)BiIsLogEnabled() )
    return;
  BiLogMessage(2LL, L"Attempting to determine owner of file %ws.", *(_QWORD *)(v5 + 8));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4020u);
  if ( v6 < 0 )
  {
    v7 = L"Failed to open file attributes. Status: %x";
LABEL_4:
    BiLogMessage(4LL, v7, (unsigned int)v6);
LABEL_29:
    if ( ProcessHandle )
      ZwClose(ProcessHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
    goto LABEL_33;
  }
  Length = 1024;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x4B444342u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = L"Failed to allocate process ID buffer.";
LABEL_7:
    BiLogMessage(4LL, v9);
    goto LABEL_29;
  }
  v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, PoolWithTag, Length, FileProcessIdsUsingFileInformation);
  if ( v6 < 0 )
  {
    v7 = L"Failed to query processes. Status: %x";
    goto LABEL_4;
  }
  if ( !*v3 )
  {
    v9 = L"No processes are using this file.";
    goto LABEL_7;
  }
  BiLogMessage(2LL, L"Found %d processes using this file.");
  ProcessHandle = 0LL;
  v10 = 0;
  if ( *v3 )
  {
    while ( 1 )
    {
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = *(HANDLE *)&v3[2 * v10 + 2];
      v18.Length = 48;
      memset(&v18.RootDirectory, 0, 20);
      *(_OWORD *)&v18.SecurityDescriptor = 0LL;
      v11 = ZwOpenProcess(&ProcessHandle, 0x1000u, &v18, &ClientId);
      if ( v11 < 0 )
        break;
      Length = 0;
      v12 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &Length);
      if ( v12 != -2147483643 && v12 != -1073741789 && v12 != -1073741820 )
      {
        BiLogMessage(4LL, L"Failed to query process information for size. Status: %x", v12);
        goto LABEL_28;
      }
      v4 = ExAllocatePoolWithTag(PagedPool, Length, 0x4B444342u);
      if ( !v4 )
      {
        BiLogMessage(4LL, L"Failed to allocate memory for space for process name.");
        goto LABEL_29;
      }
      v13 = ZwQueryInformationProcess(ProcessHandle, ProcessImageFileName, v4, Length, &Length);
      if ( v13 < 0 )
      {
        BiLogMessage(4LL, L"Failed to query process info. Status: %x", (unsigned int)v13);
        goto LABEL_29;
      }
      if ( *(_WORD *)v4 )
        v14 = (const wchar_t *)v4[1];
      else
        v14 = L"System";
      BiLogMessage(4LL, L"Process Name [%d]: %ws", v10, v14);
      ZwClose(ProcessHandle);
      ProcessHandle = 0LL;
      ExFreePoolWithTag(v4, 0x4B444342u);
      ++v10;
      v4 = 0LL;
      if ( v10 >= *v3 )
        goto LABEL_29;
    }
    BiLogMessage(4LL, L"Failed to open process. Status: %x", (unsigned int)v11);
LABEL_28:
    v4 = 0LL;
    goto LABEL_29;
  }
LABEL_33:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
}
