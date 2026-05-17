/*
 * XREFs of sub_180043094 @ 0x180043094
 * Callers:
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 *     sub_180070650 @ 0x180070650 (sub_180070650.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002BF70 @ 0x18002BF70 (sub_18002BF70.c)
 */

__int64 __fastcall sub_180043094(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        volatile signed __int32 **a5)
{
  int v6; // ebp
  unsigned int v7; // esi
  __int64 v9; // rdx
  int v10; // ebx

  v6 = a4;
  v7 = (unsigned int)a3;
  *a5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
  v9 = 0LL;
  if ( (v7 & 0x20) == 0 )
    v9 = a2;
  v10 = sub_18002BF70(a1, v9, v7, a5, v6);
  if ( v10 == -1073741515 && (v7 & 8) != 0 )
  {
    v10 = sub_18002BF70(0LL, a2, 0LL, a5, v6);
    if ( v10 >= 0 )
      *((_DWORD *)*a5 + 26) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&qword_18015D070);
  return (unsigned int)v10;
}
