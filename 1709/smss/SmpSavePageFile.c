/*
 * XREFs of SmpSavePageFile @ 0x140011320
 * Callers:
 *     SmpCheckForCrashDump @ 0x140009A80 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFile @ 0x140011194 (SmpSaveOldPageFile.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400067EC (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     SmpCopyFile @ 0x140010660 (SmpCopyFile.c)
 *     SmpQuerySameVolume @ 0x140010F24 (SmpQuerySameVolume.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x1400113F8 (SmpSetDumpSecurityAndAttributes.c)
 *     SmpSetEndOfFile @ 0x14001166C (SmpSetEndOfFile.c)
 */

NTSTATUS __fastcall SmpSavePageFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, __int64 a3, char a4)
{
  NTSTATUS result; // eax
  int Length; // esi
  const wchar_t *Buffer; // r8
  bool v10; // [rsp+30h] [rbp-248h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-240h] BYREF
  char FileInformation[8]; // [rsp+50h] [rbp-228h] BYREF
  __int64 v13; // [rsp+58h] [rbp-220h]
  int v14; // [rsp+60h] [rbp-218h]
  wchar_t pszDest[246]; // [rsp+64h] [rbp-214h] BYREF

  if ( !a3 || (result = SmpSetEndOfFile(FileHandle), result >= 0) )
  {
    if ( (a4 & 1) != 0 )
      goto LABEL_7;
    result = SmpQuerySameVolume(FileHandle, a2, &v10);
    if ( result < 0 )
      return result;
    if ( v10 )
    {
LABEL_7:
      Length = a2->Length;
      Buffer = a2->Buffer;
      v13 = 0LL;
      v14 = Length;
      FileInformation[0] = 1;
      result = RtlStringCbCopyW(pszDest, 0x1ECuLL, Buffer);
      if ( result >= 0 )
      {
        result = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, Length + 24, FileRenameInformation);
        if ( result >= 0 )
          return SmpSetDumpSecurityAndAttributes(FileHandle);
      }
    }
    else
    {
      return SmpCopyFile(FileHandle, a2);
    }
  }
  return result;
}
