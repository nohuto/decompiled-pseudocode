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

__int64 __fastcall PiGetFileDirectoryRoot(PCWSTR SourceID, PCWSTR DefaultPath, PUNICODE_STRING DestinationString)
{
  NTSTATUS PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  ULONG BufferLengthIn; // ebx
  WCHAR *TargetPath; // rdi
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF

  if ( DestinationString )
  {
    LODWORD(NumberOfBytes) = 0;
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceID,
                               0LL,
                               DefaultPath,
                               LocationTypeFileSystem,
                               0LL,
                               0,
                               (PULONG)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      BufferLengthIn = NumberOfBytes;
      TargetPath = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6F697050u);
      if ( TargetPath )
      {
        inited = RtlGetPersistedStateLocation(
                   SourceID,
                   0LL,
                   DefaultPath,
                   LocationTypeFileSystem,
                   TargetPath,
                   BufferLengthIn,
                   (PULONG)&NumberOfBytes);
        if ( inited >= 0 )
        {
          inited = RtlInitUnicodeStringEx(DestinationString, TargetPath);
          if ( inited >= 0 )
            TargetPath = 0LL;
        }
        if ( TargetPath )
          ExFreePoolWithTag(TargetPath, 0);
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
