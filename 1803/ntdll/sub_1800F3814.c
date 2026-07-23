/*
 * XREFs of sub_1800F3814 @ 0x1800F3814
 * Callers:
 *     sub_1800F3B70 @ 0x1800F3B70 (sub_1800F3B70.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800F38FC @ 0x1800F38FC (sub_1800F38FC.c)
 */

__int64 __fastcall sub_1800F3814(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  _QWORD *i; // rcx
  __int64 v6; // rbx

  v2 = sub_1800F38FC();
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_18015D7C8 + 8 * v3), 0LL) )
    return 0LL;
  for ( i = *(_QWORD **)(qword_18015D720 + 16LL * v2); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(qword_18015D720 + 16LL * v2) )
    {
      v6 = 0LL;
      goto LABEL_8;
    }
    if ( i[3] == a1 )
      break;
  }
  v6 = i[4];
  i[3] = 0LL;
LABEL_8:
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7C8 + 8 * v3));
  return v6;
}
