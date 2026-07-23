/*
 * XREFs of sub_180104E2C @ 0x180104E2C
 * Callers:
 *     sub_180104E98 @ 0x180104E98 (sub_180104E98.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180104E2C(__int64 a1, _RTL_SRWLOCK **a2, char a3)
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
