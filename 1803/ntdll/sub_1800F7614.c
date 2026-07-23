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

__int64 __fastcall sub_1800F7614(_QWORD *a1, int a2)
{
  PVOID Heap; // rbx
  int Event; // edi

  *a1 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
  if ( Heap )
  {
    *(_QWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 1) = 0LL;
    *((_QWORD *)Heap + 2) = 0LL;
    Event = ZwCreateEvent((PHANDLE)Heap + 2, 0x1F0003u, 0LL, NotificationEvent, 0);
    if ( Event < 0
      || (Event = TpAllocWork((PTP_WORK *)Heap, sub_1800F7730, Heap, 0LL), Event < 0)
      || (Event = sub_1800496F4(
                    (PVOID *)Heap + 1,
                    0x41840B3EA3BCB875LL,
                    a2,
                    (int)sub_1800F7710,
                    (__int64)Heap,
                    0LL,
                    0,
                    4,
                    17),
          Event < 0) )
    {
      sub_1800F75C0((__int64)Heap);
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
