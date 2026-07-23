/*
 * XREFs of LdrGetDllDirectory @ 0x18007E280
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

NTSTATUS __cdecl LdrGetDllDirectory(PUNICODE_STRING DllDirectory)
{
  unsigned int MaximumLength; // edx
  unsigned int v3; // eax
  NTSTATUS v4; // edi

  if ( (dword_1801596D4 & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&SRWLock);
  MaximumLength = DllDirectory->MaximumLength;
  v3 = stru_18015CFE8.Length + 2;
  if ( MaximumLength >= v3 )
  {
    RtlCopyUnicodeString(DllDirectory, &stru_18015CFE8);
    v4 = 0;
  }
  else
  {
    DllDirectory->Length = v3;
    v4 = -1073741789;
    if ( (_WORD)MaximumLength )
      *DllDirectory->Buffer = 0;
  }
  RtlReleaseSRWLockExclusive(&SRWLock);
  return v4;
}
