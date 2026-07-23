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

__int64 __fastcall sub_18002DC58(PVOID File2MappedAsFile, _DWORD *Buf1, volatile signed __int32 **a3, _DWORD *a4)
{
  int v8; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = Buf1[2];
  v11 = Buf1[20];
  RtlAcquireSRWLockExclusive(&stru_18015D070);
  v8 = sub_18002C388(File2MappedAsFile, Buf1, &v10, a3);
  if ( v8 >= 0 && a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)*a3 + 19) + 56LL);
  RtlReleaseSRWLockExclusive(&stru_18015D070);
  return (unsigned int)v8;
}
