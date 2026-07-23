/*
 * XREFs of sub_180018928 @ 0x180018928
 * Callers:
 *     sub_180011C88 @ 0x180011C88 (sub_180011C88.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800856A0 (TpSetDefaultPoolStackInformation.c)
 *     sub_180086D90 @ 0x180086D90 (sub_180086D90.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180105340 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 */

void __fastcall sub_180018928(const void **a1, _RTL_SRWLOCK *a2)
{
  signed __int32 *v4; // rcx
  signed __int32 v5; // eax
  signed __int32 v6; // edx
  signed __int32 v7; // ett
  volatile signed __int32 *v8; // rcx
  signed __int32 v9; // eax
  signed __int32 v10; // edx
  signed __int32 v11; // ett
  _TP_POOL *Pool; // [rsp+30h] [rbp+8h]

  Pool = 0LL;
  v4 = (signed __int32 *)*a1;
  _m_prefetchw(v4);
  v5 = *v4;
  while ( v5 > 1 )
  {
    v6 = v5 - 1;
    v7 = v5;
    v5 = _InterlockedCompareExchange(v4, v5 - 1, v5);
    if ( v7 == v5 )
      goto LABEL_4;
  }
  v6 = 0;
LABEL_4:
  if ( !v6 )
  {
    RtlAcquireSRWLockExclusive(a2);
    v8 = (volatile signed __int32 *)*a1;
    _m_prefetchw(*a1);
    v9 = *v8;
    while ( v9 > 1 )
    {
      v10 = v9 - 1;
      v11 = v9;
      v9 = _InterlockedCompareExchange(v8, v9 - 1, v9);
      if ( v11 == v9 )
        goto LABEL_12;
    }
    v10 = 0;
LABEL_12:
    if ( !v10 )
    {
      Pool = (_TP_POOL *)*a1;
      *a1 = 0LL;
    }
    RtlReleaseSRWLockExclusive(a2);
    if ( Pool )
      TpReleasePool(Pool);
  }
}
