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

__int64 __fastcall sub_18001AB40(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v8; // ebx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = *(_DWORD *)(a2 + 8);
  v11 = *(_DWORD *)(a2 + 80);
  RtlAcquireSRWLockExclusive(&qword_18015C040);
  v8 = sub_18001BC68(a1, a2, &v10, a3);
  if ( v8 >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 152LL) + 56LL);
  RtlReleaseSRWLockExclusive(&qword_18015C040);
  return (unsigned int)v8;
}
