/*
 * XREFs of sub_1800F7614 @ 0x1800F7614
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800F7360 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800496F4 @ 0x1800496F4 (sub_1800496F4.c)
 *     TpAllocWork @ 0x180056F90 (TpAllocWork.c)
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 *     sub_1800F75C0 @ 0x1800F75C0 (sub_1800F75C0.c)
 */

__int64 __fastcall sub_1800F7614(__int64 **a1, int a2)
{
  __int64 *Heap; // rbx
  int Event; // edi

  *a1 = 0LL;
  Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 24LL);
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Event = ZwCreateEvent();
    if ( Event < 0
      || (Event = TpAllocWork((struct _PEB_LDR_DATA *)Heap, (__int64)sub_1800F7730, (__int64)Heap, 0LL), Event < 0)
      || (Event = sub_1800496F4(Heap + 1, 0x41840B3EA3BCB875LL, a2, (int)sub_1800F7710, (__int64)Heap, 0LL, 0, 4, 17),
          Event < 0) )
    {
      sub_1800F75C0(Heap);
    }
    else
    {
      *a1 = Heap;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
