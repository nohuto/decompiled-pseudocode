/*
 * XREFs of TppPoolpDereferenceGlobalPool @ 0x1800110F8
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TpUnreserveTaskPost @ 0x180011098 (TpUnreserveTaskPost.c)
 *     TpDereferenceGlobalPool @ 0x18001359C (TpDereferenceGlobalPool.c)
 *     TpSetDefaultPoolStackInformation @ 0x180014360 (TpSetDefaultPoolStackInformation.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     TpReleasePool @ 0x180081D20 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010A920 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x180081D20 (TpReleasePool.c)
 */

__int64 __fastcall TppPoolpDereferenceGlobalPool(const void **a1, __int64 a2)
{
  volatile signed __int32 *v4; // r8
  signed __int32 v5; // ecx
  signed __int32 v6; // edx
  bool v7; // zf
  signed __int32 v8; // eax
  __int64 result; // rax
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // ecx
  signed __int32 v12; // r8d
  signed __int32 v13; // eax
  signed __int32 v14; // eax
  const void *v15; // [rsp+30h] [rbp+8h]

  v15 = 0LL;
  v4 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v5 = *v4;
  while ( v5 > 1 )
  {
    v6 = v5;
    v8 = _InterlockedCompareExchange(v4, v5 - 1, v5);
    v7 = v5 == v8;
    v5 = v8;
    if ( v7 )
    {
      result = (unsigned int)(v6 - 1);
      goto LABEL_5;
    }
  }
  result = 0LL;
LABEL_5:
  if ( !(_DWORD)result )
  {
    RtlAcquireSRWLockExclusive(a2);
    v10 = (volatile signed __int32 *)*a1;
    _m_prefetchw(*a1);
    v11 = *v10;
    while ( v11 > 1 )
    {
      v12 = v11;
      v13 = _InterlockedCompareExchange(v10, v11 - 1, v11);
      v7 = v11 == v13;
      v11 = v13;
      if ( v7 )
      {
        v14 = v12 - 1;
        goto LABEL_13;
      }
    }
    v14 = 0;
LABEL_13:
    if ( !v14 )
    {
      v15 = *a1;
      *a1 = 0LL;
    }
    result = RtlReleaseSRWLockExclusive(a2);
    if ( v15 )
      return TpReleasePool();
  }
  return result;
}
