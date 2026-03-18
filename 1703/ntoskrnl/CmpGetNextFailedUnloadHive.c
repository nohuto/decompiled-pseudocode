/*
 * XREFs of CmpGetNextFailedUnloadHive @ 0x14007EA48
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x1404CA4C8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1404CC998 (CmpUnlockHiveList.c)
 */

__int64 __fastcall CmpGetNextFailedUnloadHive(__int64 a1)
{
  __int64 *v1; // rbx
  bool v2; // zf
  __int64 v3; // rbx

  v1 = &CmpFailedUnloadListHead;
  if ( a1 )
    v1 = (__int64 *)(a1 + 2760);
  CmpLockHiveListShared();
  v2 = *v1 == (_QWORD)&CmpFailedUnloadListHead;
  v3 = *v1 - 2760;
  if ( v2 )
    v3 = 0LL;
  CmpUnlockHiveList();
  return v3;
}
