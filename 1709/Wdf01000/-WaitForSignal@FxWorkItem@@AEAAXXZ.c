/*
 * XREFs of ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000E3FC
 * Callers:
 *     imp_WdfWorkItemFlush @ 0x1C000E390 (imp_WdfWorkItemFlush.c)
 *     ?Dispose@FxWorkItem@@UEAAEXZ @ 0x1C001F8E0 (-Dispose@FxWorkItem@@UEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWorkItem::WaitForSignal(FxWorkItem *this)
{
  NTSTATUS v2; // ebx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v4; // r8
  _LARGE_INTEGER timeOut; // [rsp+40h] [rbp+8h] BYREF

  timeOut.QuadPart = -600000000LL;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    v2 = KeWaitForSingleObject(&this->m_WorkItemCompleted, Executive, 0, 0, &timeOut);
    KeLeaveCriticalRegion();
    if ( v2 != 258 )
      break;
    CurrentThread = KeGetCurrentThread();
    v4 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v4 = 0LL;
    DbgPrint("Thread 0x%p is waiting on WDFWORKITEM 0x%p\n", CurrentThread, v4);
  }
}
