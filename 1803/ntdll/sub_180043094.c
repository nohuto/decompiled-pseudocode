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

__int64 __fastcall sub_180043094(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, int a4, _QWORD *a5)
{
  _UNICODE_STRING *v9; // rdx
  int v10; // ebx

  *a5 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_18015D070);
  v9 = 0LL;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  v10 = sub_18002BF70(String1, v9, a3, a5, a4);
  if ( v10 == -1073741515 && (a3 & 8) != 0 )
  {
    v10 = sub_18002BF70(0LL, a2, 0, a5, a4);
    if ( v10 >= 0 )
      *(_DWORD *)(*a5 + 104LL) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&stru_18015D070);
  return (unsigned int)v10;
}
