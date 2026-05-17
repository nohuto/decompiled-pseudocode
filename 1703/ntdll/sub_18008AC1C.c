/*
 * XREFs of sub_18008AC1C @ 0x18008AC1C
 * Callers:
 *     sub_180093ED0 @ 0x180093ED0 (sub_180093ED0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_18008AC1C(__int64 a1, unsigned __int64 a2)
{
  _QWORD *i; // r8
  char v5; // bl

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 8) )
    {
      v5 = 0;
      goto LABEL_6;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)(i + 126) )
      break;
  }
  v5 = 1;
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v5;
}
