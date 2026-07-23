/*
 * XREFs of sub_180046E54 @ 0x180046E54
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180046EDC @ 0x180046EDC (sub_180046EDC.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 */

__int64 __fastcall sub_180046E54(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive(&stru_18015D070);
  v4 = *(_QWORD *)(a1 + 152);
  v5 = sub_180046EDC(v4, a2, &v8);
  RtlReleaseSRWLockExclusive(&stru_18015D070);
  if ( v8 )
  {
    sub_180046FBC();
    sub_180046AE0(v4);
    sub_180046F60(v7, 8LL, 0LL);
  }
  return v5;
}
