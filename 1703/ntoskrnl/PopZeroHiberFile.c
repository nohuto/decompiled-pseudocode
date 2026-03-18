/*
 * XREFs of PopZeroHiberFile @ 0x1406C9DDC
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 * Callees:
 *     MmZeroPageWrite @ 0x14002FF48 (MmZeroPageWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14017E160 (ZwQueryInformationFile.c)
 *     PopDiagTraceZeroHiberFile @ 0x14041A584 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x14041A598 (PopDiagTraceZeroHiberFileEnd.c)
 */

void __fastcall PopZeroHiberFile(HANDLE FileHandle, __int64 a2)
{
  signed __int64 v4; // rcx
  signed __int64 v5; // rax
  signed __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  signed __int64 FileInformation[3]; // [rsp+50h] [rbp-28h] BYREF

  PopDiagTraceZeroHiberFile();
  if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) >= 0 )
  {
    v4 = FileInformation[0];
    v5 = 0LL;
    v6 = 0LL;
    do
    {
      v7 = v4 - v5;
      if ( (int)MmZeroPageWrite(a2, (__int64)&v6, &v7, 0x10000u) >= 0 )
        break;
      v4 = FileInformation[0];
      v5 = (v6 & 0xFFFFFFFFFFFF0000uLL) + 0x10000;
      v6 = v5;
    }
    while ( v5 < FileInformation[0] );
  }
  PopDiagTraceZeroHiberFileEnd();
}
