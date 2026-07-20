/*
 * XREFs of SmpSetTargetAttributes @ 0x140012A38
 * Callers:
 *     SmpDeleteFile @ 0x140011E34 (SmpDeleteFile.c)
 *     SmpForceDeleteTargetFile @ 0x140011FE0 (SmpForceDeleteTargetFile.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140012C94 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 */

NTSTATUS __fastcall SmpSetTargetAttributes(HANDLE FileHandle, int a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _BYTE FileInformation[32]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+60h] [rbp-18h]

  memset_0(FileInformation, 0, 0x28uLL);
  v7 = a2;
  result = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( result >= 0 )
    return 0;
  return result;
}
