/*
 * XREFs of ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140272964
 * Callers:
 *     SmKmIssueIo @ 0x1402735BC (SmKmIssueIo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 */

__int64 __fastcall SmKmIssueFileIo(
        struct _SMKM_FILE_INFO *a1,
        struct _SMKM_ISSUE_IO_PARAMS *a2,
        union _LARGE_INTEGER *a3,
        void (*a4)(void *, struct _IO_STATUS_BLOCK *, unsigned int),
        PVOID ApcContext)
{
  NTSTATUS *v6; // rbx
  HANDLE FileHandle; // rcx
  NTSTATUS File; // eax
  struct _IO_STATUS_BLOCK *v10; // [rsp+20h] [rbp-38h]
  void *v11; // [rsp+28h] [rbp-30h]
  ULONG Length; // [rsp+30h] [rbp-28h]

  v6 = *(NTSTATUS **)a2;
  FileHandle = a1->FileHandle;
  Length = *((_DWORD *)a2 + 4);
  v11 = (void *)*((_QWORD *)a2 + 1);
  v10 = *(struct _IO_STATUS_BLOCK **)a2;
  if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
    File = NtReadFile(FileHandle, 0LL, a4, ApcContext, v10, v11, Length, a3, 0LL);
  else
    File = NtWriteFile(FileHandle, 0LL, a4, ApcContext, v10, v11, Length, a3, 0LL);
  if ( (File & 0xC0000000) == 0xC0000000 )
  {
    *v6 = File;
    ((void (__fastcall *)(PVOID, NTSTATUS *, _QWORD))a4)(ApcContext, v6, 0LL);
  }
  return 259LL;
}
