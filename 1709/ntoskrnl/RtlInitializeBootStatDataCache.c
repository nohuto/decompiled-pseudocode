/*
 * XREFs of RtlInitializeBootStatDataCache @ 0x140134704
 * Callers:
 *     RtlLockBootStatusData @ 0x1405ACB30 (RtlLockBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x14017D980 (ZwReadFile.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 RtlInitializeBootStatDataCache()
{
  NTSTATUS v0; // edx
  PVOID Buffer; // rax
  unsigned int v2; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+78h] [rbp+10h] BYREF

  if ( BootStatDataCache )
  {
    return 0;
  }
  else
  {
    ByteOffset.QuadPart = 0LL;
    v0 = ZwReadFile(BootStatFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &NumberOfBytes, 4u, &ByteOffset, 0LL);
    if ( v0 >= 0 )
    {
      if ( (_DWORD)NumberOfBytes && (unsigned int)NumberOfBytes <= 0x800 )
      {
        Buffer = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x66647362u);
        BootStatDataCache = Buffer;
        if ( Buffer )
        {
          v0 = ZwReadFile(BootStatFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, NumberOfBytes, &ByteOffset, 0LL);
          if ( v0 >= 0 )
          {
            v2 = v0;
            if ( IoStatusBlock.Information != (unsigned int)NumberOfBytes )
              return (unsigned int)-1073741823;
            return v2;
          }
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  return (unsigned int)v0;
}
