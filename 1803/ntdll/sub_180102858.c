/*
 * XREFs of sub_180102858 @ 0x180102858
 * Callers:
 *     sub_180102BEC @ 0x180102BEC (sub_180102BEC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_180102858(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *i; // r8
  char v7; // bl

  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 8) )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)(i + 126) )
      break;
  }
  v7 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v7;
}
