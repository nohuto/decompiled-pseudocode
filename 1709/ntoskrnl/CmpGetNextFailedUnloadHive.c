/*
 * XREFs of CmpGetNextFailedUnloadHive @ 0x140131358
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 * Callees:
 *     CmpUnlockHiveList @ 0x1404E61E8 (CmpUnlockHiveList.c)
 *     CmpLockHiveListShared @ 0x14059E074 (CmpLockHiveListShared.c)
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
