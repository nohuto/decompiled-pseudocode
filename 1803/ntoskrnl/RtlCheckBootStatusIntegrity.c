/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x140786B80
 * Callers:
 *     PopBootStatCheckIntegrity @ 0x14076BDB0 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     ZwReadFile @ 0x1401A7580 (ZwReadFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl RtlCheckBootStatusIntegrity(HANDLE FileHandle, PBOOLEAN Verified)
{
  char v4; // bp
  int v5; // edi
  PVOID Buffer; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+18h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+98h] [rbp+20h] BYREF

  ByteOffset.QuadPart = 0LL;
  v4 = 0;
  v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &NumberOfBytes, 4u, &ByteOffset, 0LL);
  if ( v5 >= 0 )
  {
    if ( (_DWORD)NumberOfBytes && (unsigned int)NumberOfBytes <= 0x800 )
    {
      Buffer = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x66647362u);
      if ( Buffer )
      {
        v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, NumberOfBytes, &ByteOffset, 0LL);
        if ( v5 >= 0 )
        {
          v7 = (unsigned int)NumberOfBytes;
          if ( IoStatusBlock.Information == (unsigned int)NumberOfBytes )
          {
            if ( (_DWORD)NumberOfBytes )
            {
              v8 = Buffer;
              do
              {
                v4 += *v8++;
                --v7;
              }
              while ( v7 );
            }
            *Verified = v4 == 0;
          }
          else
          {
            *Verified = 0;
          }
        }
        ExFreePoolWithTag(Buffer, 0);
      }
      else
      {
        return -1073741801;
      }
    }
    else
    {
      *Verified = 0;
    }
  }
  return v5;
}
