/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x18007B450
 * Callers:
 *     sub_18001A6A8 @ 0x18001A6A8 (sub_18001A6A8.c)
 *     sub_180052724 @ 0x180052724 (sub_180052724.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E71F0 (RtlQueryCriticalSectionOwner.c)
 * Callees:
 *     sub_1800662B0 @ 0x1800662B0 (sub_1800662B0.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  BOOLEAN v1; // r10
  volatile signed __int64 *v2; // r9
  signed __int64 v3; // rax
  signed __int64 v5; // rcx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (volatile signed __int64 *)SRWLock;
  v6 = 0;
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( !v3 )
    return 1;
  while ( (v3 & 1) == 0 || (v3 & 2) == 0 && (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = v3 | 1;
    if ( (v3 & 2) == 0 )
      v5 += 16LL;
    if ( v3 == _InterlockedCompareExchange64(v2, v5, v3) )
      return 1;
    sub_1800662B0(&v6);
    _m_prefetchw((const void *)v2);
    v3 = *v2;
  }
  return v1;
}
