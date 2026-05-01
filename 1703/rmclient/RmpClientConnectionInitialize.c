/*
 * XREFs of RmpClientConnectionInitialize @ 0x1800071A8
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x180006488 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     memset_0 @ 0x180007FF4 (memset_0.c)
 */

__int64 __fastcall RmpClientConnectionInitialize(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax

  memset_0(a1, 0, 0x50uLL);
  memset_0(a1 + 3, 0, 0x38uLL);
  a1[6] = 0LL;
  a1[7] = 0LL;
  RtlInitializeSRWLock(a1 + 4);
  a1[9] = a1 + 8;
  a1[8] = a1 + 8;
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock, v2, v3);
  v4 = (_QWORD *)qword_180018678;
  if ( *(__int64 **)qword_180018678 != &RmpClientConnectionListHead )
    __fastfail(3u);
  *a1 = &RmpClientConnectionListHead;
  a1[1] = v4;
  *v4 = a1;
  qword_180018678 = (__int64)a1;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
