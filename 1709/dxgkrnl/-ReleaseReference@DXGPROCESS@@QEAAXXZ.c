/*
 * XREFs of ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002A70
 * Callers:
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C0024B7C (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00F1AA0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01AAB4C (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     ??1DXGPROCESS@@AEAA@XZ @ 0x1C0088F9C (--1DXGPROCESS@@AEAA@XZ.c)
 */

void __fastcall DXGPROCESS::ReleaseReference(__int64 *P)
{
  __int64 v3; // rax

  if ( P[3] <= 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(P);
    *(_QWORD *)(v3 + 24) = 816LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( P[3]-- == 1 )
  {
    DXGPROCESS::~DXGPROCESS((DXGPROCESS *)P);
    ExFreePoolWithTag(P, 0);
  }
}
