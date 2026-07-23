/*
 * XREFs of sub_18010CFA0 @ 0x18010CFA0
 * Callers:
 *     sub_18010D6E8 @ 0x18010D6E8 (sub_18010D6E8.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     ZwQueryDirectoryFile @ 0x1800A59A0 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18010CFA0(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  PVOID Heap; // rax
  _DWORD *FileInformation; // rdi
  NTSTATUS v8; // eax
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  char *v11; // rax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-40h] BYREF

  v4 = 1;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 == -1 )
  {
    RtlSetLastWin32Error(6);
    return 0LL;
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 40));
  if ( !*(_QWORD *)(a1 + 8) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015C4D8 + 786432, 0x1000uLL);
    *(_QWORD *)(a1 + 8) = Heap;
    if ( !Heap )
    {
      RtlSetLastWin32Error(8);
      goto LABEL_9;
    }
    *(_QWORD *)(a1 + 16) = Heap;
    *(_QWORD *)(a1 + 24) = 4096LL;
    v4 = 1;
  }
  FileInformation = *(_DWORD **)(a1 + 16);
  if ( *(_DWORD **)(a1 + 8) != FileInformation )
    goto LABEL_31;
  v8 = ZwQueryDirectoryFile(
         *(HANDLE *)a1,
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         FileInformation,
         *(_DWORD *)(a1 + 24),
         FileBothDirectoryInformation,
         0,
         0LL,
         0);
  if ( v8 == -2147483643 )
  {
    v9 = FileInformation;
    v10 = 0LL;
    while ( *v9 )
    {
      v10 = v9;
      v9 += (unsigned __int64)(unsigned int)*v9 >> 2;
    }
    if ( v10 )
      *v10 = 0;
    v8 = 0;
  }
  if ( v8 >= 0 )
  {
LABEL_31:
    if ( *FileInformation )
      v11 = (char *)FileInformation + (unsigned int)*FileInformation;
    else
      v11 = *(char **)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v11;
    *(_DWORD *)a2 = FileInformation[14];
    *(_QWORD *)(a2 + 4) = *((_QWORD *)FileInformation + 1);
    *(_QWORD *)(a2 + 12) = *((_QWORD *)FileInformation + 2);
    *(_QWORD *)(a2 + 20) = *((_QWORD *)FileInformation + 3);
    *(_DWORD *)(a2 + 28) = FileInformation[11];
    *(_DWORD *)(a2 + 32) = FileInformation[10];
    if ( FileInformation[15] <= 0x208u )
    {
      memmove((void *)(a2 + 44), (char *)FileInformation + 94, (unsigned int)FileInformation[15]);
      *(_WORD *)(a2 + 2 * ((unsigned __int64)(unsigned int)FileInformation[15] >> 1) + 44) = 0;
    }
    if ( *((_BYTE *)FileInformation + 68) <= 0x1Cu )
    {
      memmove((void *)(a2 + 564), (char *)FileInformation + 70, *((char *)FileInformation + 68));
      *(_WORD *)(a2 + 2 * ((__int64)*((char *)FileInformation + 68) >> 1) + 564) = 0;
    }
    if ( (FileInformation[14] & 0x400) != 0 )
      *(_DWORD *)(a2 + 36) = FileInformation[16];
    goto LABEL_28;
  }
LABEL_9:
  v4 = 0;
LABEL_28:
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 40));
  return v4;
}
