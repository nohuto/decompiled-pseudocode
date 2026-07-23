/*
 * XREFs of sub_1801039D4 @ 0x1801039D4
 * Callers:
 *     sub_180103A40 @ 0x180103A40 (sub_180103A40.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_1801039D4(__int64 a1, _RTL_SRWLOCK **a2, char a3)
{
  _RTL_SRWLOCK *v3; // rbx
  int v6; // edi

  v3 = *a2;
  if ( *a2 != (_RTL_SRWLOCK *)a2 )
  {
    v6 = a3 & 1;
    do
    {
      if ( v6 )
      {
        if ( (a3 & 2) != 0 )
          v3[3].Ptr = (PVOID)1;
        RtlReleaseSRWLockExclusive(v3 + 3);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v3 + 3);
      }
      v3 = (_RTL_SRWLOCK *)v3->Ptr;
    }
    while ( v3 != (_RTL_SRWLOCK *)a2 );
  }
}
