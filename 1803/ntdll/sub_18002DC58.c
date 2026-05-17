/*
 * XREFs of sub_18002DC58 @ 0x18002DC58
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18002E040 (LdrGetDllHandleByMapping.c)
 *     sub_18007AFDC @ 0x18007AFDC (sub_18007AFDC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002C388 @ 0x18002C388 (sub_18002C388.c)
 */

__int64 __fastcall sub_18002DC58(__int64 a1, _DWORD *a2, unsigned __int64 *a3, _DWORD *a4)
{
  int v8; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = a2[2];
  v11 = a2[20];
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, (unsigned __int64)a2, a3, (__int64)a4);
  v8 = sub_18002C388(a1, a2, &v10, (volatile signed __int32 **)a3);
  if ( v8 >= 0 && a4 )
    *a4 = *(_DWORD *)(*(_QWORD *)(*a3 + 152) + 56LL);
  RtlReleaseSRWLockExclusive(&qword_18015D070);
  return (unsigned int)v8;
}
