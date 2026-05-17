/*
 * XREFs of sub_1801039D4 @ 0x1801039D4
 * Callers:
 *     sub_180103A40 @ 0x180103A40 (sub_180103A40.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_1801039D4(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // rbx
  int v6; // edi

  v3 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    v6 = a3 & 1;
    do
    {
      if ( v6 )
      {
        if ( (a3 & 2) != 0 )
          v3[3] = 1LL;
        RtlReleaseSRWLockExclusive(v3 + 3);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v3 + 3);
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != a2 );
  }
}
