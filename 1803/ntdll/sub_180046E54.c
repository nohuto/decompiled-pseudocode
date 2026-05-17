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

__int64 __fastcall sub_180046E54(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (_DWORD)a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = sub_180046EDC(v6, v4, &v13);
  RtlReleaseSRWLockExclusive(&qword_18015D070);
  if ( v13 )
  {
    sub_180046FBC();
    sub_180046AE0(v6, v9, v10, v11);
    sub_180046F60(v12, 8LL, 0LL);
  }
  return v7;
}
