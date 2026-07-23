/*
 * XREFs of sub_18001AB40 @ 0x18001AB40
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18001A750 (LdrGetDllHandleByMapping.c)
 *     sub_18007FB7C @ 0x18007FB7C (sub_18007FB7C.c)
 * Callees:
 *     sub_18001BC68 @ 0x18001BC68 (sub_18001BC68.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18001AB40(PVOID File2MappedAsFile, void *Buf1, __int64 a3, _DWORD *a4)
{
  int v8; // ebx

  RtlAcquireSRWLockExclusive(&stru_18015C040);
  v8 = sub_18001BC68(File2MappedAsFile, Buf1);
  if ( v8 >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&stru_18015C040);
  return (unsigned int)v8;
}
