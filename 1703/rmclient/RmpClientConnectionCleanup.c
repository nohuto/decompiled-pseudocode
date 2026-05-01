/*
 * XREFs of RmpClientConnectionCleanup @ 0x18000BCB0
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x180006488 (RmpClientConnectToResourceManager.c)
 *     RmDisconnectFromResourceManager @ 0x18000BC10 (RmDisconnectFromResourceManager.c)
 * Callees:
 *     RmpClientDisconnectContextHandle @ 0x18000BD10 (RmpClientDisconnectContextHandle.c)
 *     RmpClientSubscriptionCleanup @ 0x18000BDD0 (RmpClientSubscriptionCleanup.c)
 */

__int64 __fastcall RmpClientConnectionCleanup(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  _QWORD *v5; // rax

  RmpClientSubscriptionCleanup(a1 + 3);
  if ( a1[2] )
    RmpClientDisconnectContextHandle();
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock, v2, v3);
  v4 = *a1;
  v5 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v5 != a1 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
