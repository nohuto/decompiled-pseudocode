/*
 * XREFs of sub_1800E34A8 @ 0x1800E34A8
 * Callers:
 *     sub_1800E2D04 @ 0x1800E2D04 (sub_1800E2D04.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 * Callees:
 *     ZwSetInformationFile @ 0x1800A57E0 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall sub_1800E34A8(char *a1, __int64 a2)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  FileInformation = a2;
  return ZwSetInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FilePositionInformation);
}
