/*
 * XREFs of sub_180058844 @ 0x180058844
 * Callers:
 *     sub_18005879C @ 0x18005879C (sub_18005879C.c)
 * Callees:
 *     sub_18000799C @ 0x18000799C (sub_18000799C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180058A00 @ 0x180058A00 (sub_180058A00.c)
 *     sub_180058AF0 @ 0x180058AF0 (sub_180058AF0.c)
 */

__int64 __fastcall sub_180058844(PRTL_SRWLOCK SRWLock, __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rax
  bool i; // zf
  __int64 v7; // rcx
  __int64 result; // rax

  v4 = 0;
  v5 = sub_180058A00(SRWLock, SRWLock);
  for ( i = SRWLock[1].Ptr == 0LL; ; i = SRWLock[1].Ptr == 0LL )
  {
    v7 = v5;
    if ( !i || v4 < 0 )
      break;
    if ( ((__int64)SRWLock[9].Ptr & 4) == 0 )
      RtlReleaseSRWLockShared(SRWLock);
    sub_180058AF0(SRWLock, SRWLock);
    if ( !SRWLock[1].Ptr )
      v4 = sub_18000799C((__int64)SRWLock);
    if ( ((__int64)SRWLock[9].Ptr & 4) == 0 )
      RtlReleaseSRWLockExclusive(SRWLock);
    v5 = sub_180058A00(SRWLock, SRWLock);
  }
  result = (unsigned int)v4;
  *a2 = v7;
  return result;
}
