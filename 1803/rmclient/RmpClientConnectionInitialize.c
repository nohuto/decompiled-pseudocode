/*
 * XREFs of RmpClientConnectionInitialize @ 0x18000C23C
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x18000C094 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     HamIpcChannelInitialize @ 0x180004E94 (HamIpcChannelInitialize.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

__int64 __fastcall RmpClientConnectionInitialize(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax

  memset_0(a1, 0, 0x68uLL);
  memset_0(a1 + 3, 0, 0x50uLL);
  HamIpcChannelInitialize(
    (__int64)RmpClientSubscriptionDeliverPayload,
    (__int64)RmpClientCallbackCompareToCallback,
    (__int64)RmpClientCallbackCompareToPayload,
    a1 + 3);
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock, v2, v3);
  v4 = (_QWORD *)qword_18001C698;
  if ( *(__int64 **)qword_18001C698 != &RmpClientConnectionListHead )
    __fastfail(3u);
  *a1 = &RmpClientConnectionListHead;
  a1[1] = v4;
  *v4 = a1;
  qword_18001C698 = (__int64)a1;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
