/*
 * XREFs of ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024D48
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisRssV2Initialize(char *DeferredContext)
{
  unsigned int v2; // ebx
  struct _KDPC *PoolWithTag; // rax
  struct _KDPC *v4; // rsi

  v2 = 0;
  *((_DWORD *)DeferredContext + 1442) = 0;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 5776), NotificationEvent, 0);
  *((_QWORD *)DeferredContext + 720) = 0LL;
  PoolWithTag = (struct _KDPC *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0xC88uLL, 0x7372444Eu);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeDpc(PoolWithTag, ndisEmulateRSSv1Dpc, DeferredContext);
    KeSetImportanceDpc(v4, MediumHighImportance);
    *((_QWORD *)DeferredContext + 720) = v4;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
