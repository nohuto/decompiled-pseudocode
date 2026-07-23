/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800DE280
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

NTSTATUS __cdecl LdrUpdatePackageSearchPath(PWSTR SearchPathA)
{
  NTSTATUS v1; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  wchar_t *StringRoutine; // rax
  wchar_t *v6; // r14
  wchar_t *Buffer; // rsi

  v1 = 0;
  if ( !SearchPathA )
    return -1073741811;
  if ( !LdrpAppPackagesPath.Length )
    return -1073741811;
  v3 = -1LL;
  do
    ++v3;
  while ( SearchPathA[v3] );
  v4 = 2 * v3;
  if ( !v4 )
    return -1073741811;
  if ( v4 >= 0xFFFE )
    return -1073741562;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4 + 2);
  v6 = StringRoutine;
  if ( !StringRoutine )
    return -1073741801;
  memmove(StringRoutine, SearchPathA, v4);
  v6[v4 >> 1] = 0;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  Buffer = LdrpAppPackagesPath.Buffer;
  LdrpAppPackagesPath.Length = v4;
  LdrpAppPackagesPath.MaximumLength = v4 + 2;
  LdrpAppPackagesPath.Buffer = v6;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( Buffer != LdrpOriginalAppPackagesPath.Buffer )
    NtdllpFreeStringRoutine(Buffer);
  return v1;
}
