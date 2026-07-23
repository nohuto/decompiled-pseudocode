/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800DF900
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __cdecl LdrUpdatePackageSearchPath(PWSTR SearchPathA)
{
  NTSTATUS v1; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi
  WCHAR *v5; // rax
  WCHAR *v6; // r14
  _OBJECT_BOUNDARY_DESCRIPTOR *Buffer; // rsi

  v1 = 0;
  if ( !SearchPathA )
    return -1073741811;
  if ( !DestinationString.Length )
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
  v5 = (WCHAR *)sub_180043FE0(v4 + 2);
  v6 = v5;
  if ( !v5 )
    return -1073741801;
  memmove(v5, SearchPathA, v4);
  v6[v4 >> 1] = 0;
  RtlAcquireSRWLockExclusive(&SRWLock);
  Buffer = (_OBJECT_BOUNDARY_DESCRIPTOR *)DestinationString.Buffer;
  DestinationString.Length = v4;
  DestinationString.MaximumLength = v4 + 2;
  DestinationString.Buffer = v6;
  RtlReleaseSRWLockExclusive(&SRWLock);
  if ( Buffer != (_OBJECT_BOUNDARY_DESCRIPTOR *)stru_18015A2C0.Buffer )
    RtlDeleteBoundaryDescriptor(Buffer);
  return v1;
}
