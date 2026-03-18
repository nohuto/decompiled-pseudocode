/*
 * XREFs of PspRundownProcess @ 0x14049369C
 * Callers:
 *     PspProcessClose @ 0x140519E00 (PspProcessClose.c)
 * Callees:
 *     ExAcquireRundownProtectionEx @ 0x1400066B0 (ExAcquireRundownProtectionEx.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall PspRundownProcess(signed __int64 Object)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(Object + 760), 0) )
  {
    ObfReferenceObjectWithTag((PVOID)Object, 0x77537350u);
    if ( !_InterlockedCompareExchange64(&PspRundownProcessCache, Object, 0LL) )
    {
      if ( _InterlockedIncrement(&PspRundownNeededCountCache) != 1 )
        return;
      v2 = &PspProcessRundownCacheWorkItem;
      goto LABEL_5;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 768), 8u) )
    {
      ObfDereferenceObjectWithTag((PVOID)Object, 0x77537350u);
      return;
    }
    if ( _InterlockedIncrement(&PspRundownNeededCount) == 1 )
    {
      v2 = (struct _WORK_QUEUE_ITEM *)&PspProcessRundownWorkItem;
LABEL_5:
      ExQueueWorkItem(v2, NormalWorkQueue);
    }
  }
}
