/*
 * XREFs of sub_1800DE900 @ 0x1800DE900
 * Callers:
 *     sub_1800DE154 @ 0x1800DE154 (sub_1800DE154.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 * Callees:
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall sub_1800DE900(char *a1, __int64 a2)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 FileInformation; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  FileInformation = a2;
  return ZwSetInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FilePositionInformation);
}
