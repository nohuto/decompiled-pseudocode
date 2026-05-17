/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x180106F5C
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x180106FC8 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v4; // rbx
  char v5; // bp
  int v7; // edi

  v4 = (_QWORD *)*a2;
  v5 = (char)a3;
  if ( (_QWORD *)*a2 != a2 )
  {
    v7 = (unsigned __int8)a3 & 1;
    do
    {
      if ( v7 )
      {
        if ( (v5 & 2) != 0 )
          v4[3] = 1LL;
        RtlReleaseSRWLockExclusive(v4 + 3);
      }
      else
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)(v4 + 3), (unsigned __int64)a2, a3, a4);
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != a2 );
  }
}
