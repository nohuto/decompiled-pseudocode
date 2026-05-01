/*
 * XREFs of RmpClientConnectionCleanup @ 0x18000C900
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x18000649C (RmpClientConnectToResourceManager.c)
 *     RmDisconnectFromResourceManager @ 0x18000C7C0 (RmDisconnectFromResourceManager.c)
 * Callees:
 *     HamIpcChannelRundown @ 0x1800016E4 (HamIpcChannelRundown.c)
 *     RmpClientDisconnectContextHandle @ 0x18000C960 (RmpClientDisconnectContextHandle.c)
 */

__int64 __fastcall RmpClientConnectionCleanup(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax

  HamIpcChannelRundown((__int64)(a1 + 3));
  if ( a1[2] )
    RmpClientDisconnectContextHandle();
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
