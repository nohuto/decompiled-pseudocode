/*
 * XREFs of CmpCmdRenameHive @ 0x1406943BC
 * Callers:
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 * Callees:
 *     ZwQueryObject @ 0x14017DAC0 (ZwQueryObject.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall CmpCmdRenameHive(HANDLE FileHandle, PVOID ObjectInformation, const void **a3, ULONG a4, char a5)
{
  NTSTATUS result; // eax
  char *PoolWithTag; // rax
  void *v9; // rdi
  NTSTATUS v10; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  ULONG v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  if ( !ObjectInformation
    || (result = ZwQueryObject(FileHandle, ObjectNameInformation, ObjectInformation, a4, &v12), result >= 0) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a3 + 24LL, 0x20204D43u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      *PoolWithTag = a5;
      *((_DWORD *)PoolWithTag + 4) = *(unsigned __int16 *)a3;
      memmove(PoolWithTag + 20, a3[1], *(unsigned __int16 *)a3);
      v10 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v9, *(unsigned __int16 *)a3 + 24, FileRenameInformation);
      ExFreePoolWithTag(v9, 0);
      return v10;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
