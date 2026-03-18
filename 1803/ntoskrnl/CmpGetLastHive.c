/*
 * XREFs of CmpGetLastHive @ 0x14049BD04
 * Callers:
 *     CmpDoFlushAll @ 0x1401551E0 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpReferenceHive @ 0x14049D1FC (CmpReferenceHive.c)
 */

__int64 CmpGetLastHive()
{
  __int64 v0; // rbx
  __int64 v1; // r8
  __int64 *v2; // r9
  __int64 v3; // rcx

  v0 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v1 = qword_140862710;
  v2 = &CmpHiveListHead;
  while ( (__int64 *)v1 != v2 )
  {
    if ( (unsigned __int8)CmpReferenceHive(v1 - 1600) )
    {
      v0 = v3;
      break;
    }
    v1 = *(_QWORD *)(v1 + 8);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v1, (__int64)v2);
  return v0;
}
