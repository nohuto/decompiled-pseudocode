/*
 * XREFs of RmpClientConnectionInitialize @ 0x1800065AC
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x18000649C (RmpClientConnectToResourceManager.c)
 * Callees:
 *     HamIpcChannelInitialize @ 0x180004590 (HamIpcChannelInitialize.c)
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

__int64 __fastcall RmpClientConnectionInitialize(_QWORD *a1)
{
  _QWORD *v2; // rax

  memset_0(a1, 0, 0x68uLL);
  memset_0(a1 + 3, 0, 0x50uLL);
  HamIpcChannelInitialize(
    (__int64)RmpClientSubscriptionDeliverPayload,
    (__int64)RmpClientCallbackCompareToCallback,
    (__int64)RmpClientCallbackCompareToPayload,
    a1 + 3);
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v2 = (_QWORD *)qword_18001B6C8;
  if ( *(__int64 **)qword_18001B6C8 != &RmpClientConnectionListHead )
    __fastfail(3u);
  *a1 = &RmpClientConnectionListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_18001B6C8 = (__int64)a1;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
