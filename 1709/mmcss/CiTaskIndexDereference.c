/*
 * XREFs of CiTaskIndexDereference @ 0x1C000233C
 * Callers:
 *     CiCreateTaskIndexClientFromThread @ 0x1C00093C4 (CiCreateTaskIndexClientFromThread.c)
 *     CiDispatchClose @ 0x1C00095F0 (CiDispatchClose.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C0009A40 (CiDispatchCreateTaskIndexClient.c)
 *     CiThreadCleanup @ 0x1C000A884 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 * Callees:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002F08 (CiSchedulerRemoveTaskIndex.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000A538 (CiAcquireTaskIndexListLock.c)
 *     CiReleaseTaskIndexListLock @ 0x1C000A568 (CiReleaseTaskIndexListLock.c)
 *     CiTaskIndexRemove @ 0x1C000A850 (CiTaskIndexRemove.c)
 */

void __fastcall CiTaskIndexDereference(volatile signed __int64 *a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rax
  bool v5; // cc
  signed __int64 v6; // rax

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
  v4 = _InterlockedExchangeAdd64(v1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4 <= 1;
  v6 = v4 - 1;
  if ( v5 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CiTaskIndexRemove(v1);
  }
  else
  {
    v1 = 0LL;
  }
  CiReleaseTaskIndexListLock();
  if ( v1 )
  {
    CiSchedulerRemoveTaskIndex(v1);
    ExFreePoolWithTag((PVOID)v1, 0);
  }
}
