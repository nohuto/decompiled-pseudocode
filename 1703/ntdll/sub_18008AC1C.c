/*
 * XREFs of sub_18008AC1C @ 0x18008AC1C
 * Callers:
 *     sub_180093ED0 @ 0x180093ED0 (sub_180093ED0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_18008AC1C(PRTL_SRWLOCK SRWLock, unsigned __int64 a2)
{
  _RTL_SRWLOCK *i; // r8
  char v5; // bl

  RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (_RTL_SRWLOCK *)SRWLock[1].Ptr; ; i = (_RTL_SRWLOCK *)i->Ptr )
  {
    if ( i == &SRWLock[1] )
    {
      v5 = 0;
      goto LABEL_6;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)&i[126] )
      break;
  }
  v5 = 1;
LABEL_6:
  RtlReleaseSRWLockExclusive(SRWLock);
  return v5;
}
