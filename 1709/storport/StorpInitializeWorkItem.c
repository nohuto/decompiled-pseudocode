/*
 * XREFs of StorpInitializeWorkItem @ 0x1C000F89C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeWorkItem(__int64 a1, PIO_WORKITEM **a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbp
  PIO_WORKITEM *Pool; // rax
  PIO_WORKITEM *v6; // rsi
  PIO_WORKITEM WorkItem; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      v4 = **(_QWORD **)(a1 - 16);
      Pool = (PIO_WORKITEM *)RaidAllocatePool(NonPagedPoolNx, 0x20uLL, 0x49576152u, *(_QWORD *)(v4 + 8));
      v6 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0x20uLL);
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v4 + 8));
        *v6 = WorkItem;
        if ( WorkItem )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4984));
          *a2 = v6;
          return v2;
        }
        ExFreePoolWithTag(v6, 0x49576152u);
      }
      return (unsigned int)-1056964605;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 60LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids);
    }
    return 3238002696LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 59LL, &WPP_1c803bf8f161365631cb9595cf3477cb_Traceguids, a1, a2);
    }
    return 3238002694LL;
  }
}
