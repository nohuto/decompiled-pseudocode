/*
 * XREFs of sub_180102858 @ 0x180102858
 * Callers:
 *     sub_180102BEC @ 0x180102BEC (sub_180102BEC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_180102858(PRTL_SRWLOCK SRWLock, unsigned __int64 a2)
{
  _RTL_SRWLOCK *i; // r8
  char v5; // bl

  RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (_RTL_SRWLOCK *)SRWLock[1].Ptr; ; i = (_RTL_SRWLOCK *)i->Ptr )
  {
    if ( i == &SRWLock[1] )
    {
      v5 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)&i[126] )
      break;
  }
  v5 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive(SRWLock);
  return v5;
}
