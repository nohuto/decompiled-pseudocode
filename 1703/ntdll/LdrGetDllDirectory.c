/*
 * XREFs of LdrGetDllDirectory @ 0x180082570
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 */

NTSTATUS __cdecl LdrGetDllDirectory(PUNICODE_STRING DllDirectory)
{
  unsigned int MaximumLength; // edx
  unsigned int v3; // eax
  NTSTATUS v4; // edi

  if ( (dword_180158674 & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&SRWLock);
  MaximumLength = DllDirectory->MaximumLength;
  v3 = stru_18015BF60.Length + 2;
  if ( MaximumLength >= v3 )
  {
    RtlCopyUnicodeString(DllDirectory, &stru_18015BF60);
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
