/*
 * XREFs of CmpGetLastHive @ 0x1404D861C
 * Callers:
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 * Callees:
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 CmpGetLastHive()
{
  __int64 v0; // rbx
  __int64 v1; // r8
  __int64 *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  v0 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v1 = qword_1407ACD50;
  v2 = &CmpHiveListHead;
  while ( (__int64 *)v1 != v2 )
  {
    if ( CmpReferenceHive(v1 - 2728) )
    {
      v0 = v3;
      break;
    }
    v1 = *(_QWORD *)(v4 + 8);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  return v0;
}
