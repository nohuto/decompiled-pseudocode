/*
 * XREFs of KiSwapToUmsThreadContinue @ 0x14024CAD0
 * Callers:
 *     KiUmsTrapEntryContinue @ 0x1401BC440 (KiUmsTrapEntryContinue.c)
 *     KiUmsCallEntryContinue @ 0x1401BC600 (KiUmsCallEntryContinue.c)
 *     KeSynchronizeUmsThread @ 0x140742C8C (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiSwitchQueue @ 0x1400AF2F8 (KiSwitchQueue.c)
 *     KeInsertQueue @ 0x1400C1D70 (KeInsertQueue.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 KiSwapToUmsThreadContinue()
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID Object; // rdi
  int v2; // eax
  struct _KQUEUE *v3; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 Queue; // r8

  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v2 = *((_DWORD *)Object + 20);
  if ( (v2 & 2) == 0 )
  {
    *((_DWORD *)Object + 20) = v2 | 2;
    CurrentThread->MiscFlags = CurrentThread->MiscFlags & 0xFFFEFFFF | (!(*((_QWORD *)CurrentThread->WaitBlock[3].SparePtr
                                                                          + 9) & 1) << 16);
    v3 = (struct _KQUEUE *)*((_QWORD *)Object + 4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    Queue = (__int64)CurrentThread->Queue;
    if ( v3 != (struct _KQUEUE *)Queue )
      KiSwitchQueue((__int64)CurrentThread, (__int64)v3, Queue);
    KeInsertQueue(v3, *((PLIST_ENTRY *)Object + 5));
    __writecr8(CurrentIrql);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
