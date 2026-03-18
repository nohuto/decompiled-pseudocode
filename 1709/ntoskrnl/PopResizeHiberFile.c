/*
 * XREFs of PopResizeHiberFile @ 0x1406FC068
 * Callers:
 *     PopAdjustHiberFile @ 0x1406FAC34 (PopAdjustHiberFile.c)
 *     PopEnlargeHiberFile @ 0x1406FB854 (PopEnlargeHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1405D4884 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x1406FC1F4 (PopSanityCheckHiberFile.c)
 *     PopSetHiberFileMcb @ 0x1406FC2D8 (PopSetHiberFileMcb.c)
 *     PopValidateHiberFileSize @ 0x1406FC634 (PopValidateHiberFileSize.c)
 */

__int64 __fastcall PopResizeHiberFile(signed __int64 a1, _QWORD *a2)
{
  NTSTATUS Status; // ecx
  int v5; // ecx
  signed __int64 v6; // rax
  __int64 v7; // rdx
  signed __int64 FileInformation; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v10; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-18h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+28h] BYREF

  if ( !FileObject )
  {
LABEL_2:
    Status = -1073741823;
    goto LABEL_17;
  }
  if ( qword_140365B10 == a1 )
  {
LABEL_16:
    Status = 0;
    goto LABEL_17;
  }
  v5 = PopValidateHiberFileSize(a1, &NumberOfBytes);
  v6 = NumberOfBytes;
  if ( v5 >= 0 )
    v6 = a1;
  v14 = v6;
  if ( v6 <= 0 )
    goto LABEL_2;
  FileInformation = v6;
  Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation);
  if ( Status == 259 )
  {
    KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v10 = v14;
    Status = ZwSetInformationFile(PopHiberInfo, &IoStatusBlock, &v10, 8u, FileEndOfFileInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Status = PopSanityCheckHiberFile(
                 (_DWORD)PopHiberInfo,
                 (_DWORD)FileObject,
                 (unsigned int)&v14,
                 (unsigned int)&P,
                 (__int64)&NumberOfBytes);
      if ( Status >= 0 )
      {
        Status = PopSetHiberFileMcb(P, (unsigned int)NumberOfBytes);
        if ( Status >= 0 )
        {
          qword_140365B10 = v14;
          FsRtlIssueFileNotificationFsctl(
            (PFILE_OBJECT)FileObject,
            v7,
            (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE);
          goto LABEL_16;
        }
      }
    }
  }
LABEL_17:
  *a2 = qword_140365B10;
  return (unsigned int)Status;
}
