/*
 * XREFs of RmpClientConnectionCleanup @ 0x18000C1DC
 * Callers:
 *     RmDisconnectFromResourceManager @ 0x18000BF00 (RmDisconnectFromResourceManager.c)
 *     RmpClientConnectToResourceManager @ 0x18000C094 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     RmpClientDisconnectContextHandle @ 0x18000C2D4 (RmpClientDisconnectContextHandle.c)
 *     HamIpcChannelRundown @ 0x18000D7FC (HamIpcChannelRundown.c)
 */

__int64 __fastcall RmpClientConnectionCleanup(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  _QWORD *v5; // rax

  HamIpcChannelRundown(a1 + 3);
  if ( a1[2] )
    RmpClientDisconnectContextHandle();
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock, v2, v3);
  v4 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
