/*
 * XREFs of PiGetFileDirectoryRoot @ 0x140648A5C
 * Callers:
 *     IoGetDeviceDirectory @ 0x140724670 (IoGetDeviceDirectory.c)
 *     PiGetDriverStateSubDirectory @ 0x14072516C (PiGetDriverStateSubDirectory.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1408C0F30 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlGetPersistedStateLocation @ 0x140648E80 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall PiGetFileDirectoryRoot(PCWSTR SourceString, __int64 a2, UNICODE_STRING *a3)
{
  int PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  int v7; // ebx
  PVOID PoolWithTag; // rdi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    LODWORD(NumberOfBytes) = 0;
    PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, 0, (__int64)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      v7 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6F697050u);
      if ( PoolWithTag )
      {
        inited = RtlGetPersistedStateLocation(SourceString, PoolWithTag, v7, (__int64)&NumberOfBytes);
        if ( inited >= 0 )
        {
          inited = RtlInitUnicodeStringEx(a3, (PCWSTR)PoolWithTag);
          if ( inited >= 0 )
            PoolWithTag = 0LL;
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inited;
}
