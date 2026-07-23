/*
 * XREFs of VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x1408175C4
 * Callers:
 *     VfGetDmaAdapter @ 0x140818BD0 (VfGetDmaAdapter.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_LIST_ENTRY *__fastcall VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  _LIST_ENTRY *v2; // rbx
  KIRQL v3; // si
  _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&Lock);
  for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
  {
    if ( i[1].Blink == a1 && (SHIDWORD(i[2].Flink) <= 0 || LOBYTE(i[2].Flink) == 1) )
    {
      Flink = i->Flink;
      v2 = i;
      if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      break;
    }
  }
  KxReleaseSpinLock(&Lock);
  __writecr8(v3);
  return v2;
}
