/*
 * XREFs of CiTaskIndexDereference @ 0x1C0002320
 * Callers:
 *     CiCreateTaskIndexClientFromThread @ 0x1C00093B4 (CiCreateTaskIndexClientFromThread.c)
 *     CiDispatchClose @ 0x1C00095E0 (CiDispatchClose.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C0009A30 (CiDispatchCreateTaskIndexClient.c)
 *     CiThreadCleanup @ 0x1C000A8DC (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000AA4C (CiThreadCreate.c)
 * Callees:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002F3C (CiSchedulerRemoveTaskIndex.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000A53C (CiAcquireTaskIndexListLock.c)
 *     CiReleaseTaskIndexListLock @ 0x1C000A56C (CiReleaseTaskIndexListLock.c)
 *     CiTaskIndexRemove @ 0x1C000A854 (CiTaskIndexRemove.c)
 */

void __fastcall CiTaskIndexDereference(volatile signed __int64 *a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  __int64 v4; // rdx
  __int64 v5; // r8
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  char v9; // r8

  v1 = a1;
  _m_prefetchw((const void *)(a1 + 6));
  v2 = *((_QWORD *)a1 + 6);
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(a1 + 6, v2 - 1, v2);
    if ( v3 == v2 )
      return;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  CiAcquireTaskIndexListLock();
  v6 = _InterlockedExchangeAdd64(v1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    LOBYTE(v5) = 1;
    CiTaskIndexRemove(v1, v4, v5);
  }
  else
  {
    v9 = 0;
  }
  if ( !v9 )
    v1 = 0LL;
  CiReleaseTaskIndexListLock();
  if ( v1 )
  {
    CiSchedulerRemoveTaskIndex(v1);
    ExFreePoolWithTag((PVOID)v1, 0);
  }
}
