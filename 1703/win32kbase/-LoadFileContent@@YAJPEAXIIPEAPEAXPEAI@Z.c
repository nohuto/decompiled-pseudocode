/*
 * XREFs of ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C007AE20
 * Callers:
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C007A7A0 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall LoadFileContent(HANDLE FileHandle, __int64 a2, __int64 a3, void **a4, unsigned int *a5)
{
  NTSTATUS v7; // eax
  unsigned int Length; // esi
  NTSTATUS Status; // ebx
  void *Buffer; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  _BYTE FileInformation[8]; // [rsp+60h] [rbp-48h] BYREF
  ULONG v14; // [rsp+68h] [rbp-40h]
  int v15; // [rsp+6Ch] [rbp-3Ch]

  v7 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  Length = v14;
  Status = v7;
  if ( v7 >= 0 )
  {
    if ( v15 || v14 - 64 > 0x3FFC0 )
      Status = -1073741672;
    if ( Status >= 0 )
    {
      Buffer = (void *)Win32AllocPool(v14, 0x746B7355u);
      if ( !Buffer )
        Status = -1073741801;
      if ( Status >= 0 )
      {
        Status = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, (PLARGE_INTEGER)&gZero, 0LL);
        if ( Status >= 0 )
        {
          if ( IoStatusBlock.Status < 0 )
          {
            Status = IoStatusBlock.Status;
LABEL_11:
            if ( Status >= 0 )
            {
              *a4 = Buffer;
              *a5 = Length;
              return (unsigned int)Status;
            }
            goto LABEL_17;
          }
          if ( LODWORD(IoStatusBlock.Information) == Length )
            goto LABEL_11;
          Status = -1073741762;
        }
      }
LABEL_17:
      if ( Buffer )
        Win32FreePool((__int64)Buffer);
    }
  }
  return (unsigned int)Status;
}
