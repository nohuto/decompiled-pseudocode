/*
 * XREFs of ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001D764
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisRssV2Initialize(struct _KEVENT *DeferredContext)
{
  unsigned int v2; // ebx
  struct _KDPC *PoolWithTag; // rax
  struct _KDPC *v4; // rsi

  v2 = 0;
  LODWORD(DeferredContext[239].Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(DeferredContext + 240, NotificationEvent, 0);
  DeferredContext[239].Header.WaitListHead.Flink = 0LL;
  PoolWithTag = (struct _KDPC *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0xC88uLL, 0x7372444Eu);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeDpc(PoolWithTag, ndisEmulateRSSv1Dpc, DeferredContext);
    KeSetImportanceDpc(v4, MediumHighImportance);
    DeferredContext[239].Header.WaitListHead.Flink = (_LIST_ENTRY *)v4;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
