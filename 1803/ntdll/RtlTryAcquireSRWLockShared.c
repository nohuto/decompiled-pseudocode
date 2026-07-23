/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x180074F10
 * Callers:
 *     sub_180005A98 @ 0x180005A98 (sub_180005A98.c)
 *     sub_180005BC4 @ 0x180005BC4 (sub_180005BC4.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E1EC0 (RtlQueryCriticalSectionOwner.c)
 * Callees:
 *     sub_1800289C0 @ 0x1800289C0 (sub_1800289C0.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  volatile signed __int64 *v1; // r10
  BOOLEAN v2; // r9
  unsigned __int64 v3; // rax
  __int64 v5; // r8
  signed __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (volatile signed __int64 *)SRWLock;
  v7 = 0;
  v2 = 0;
  v3 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    v5 = (v3 >> 1) & 1;
    if ( (v3 & 1) != 0 && (v5 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      break;
    v6 = (v3 | 1) + 16;
    if ( v5 )
      v6 = v3 | 1;
    if ( v3 == _InterlockedCompareExchange64(v1, v6, v3) )
      return 1;
    sub_1800289C0(&v7);
    _m_prefetchw((const void *)v1);
    v3 = *v1;
  }
  return v2;
}
