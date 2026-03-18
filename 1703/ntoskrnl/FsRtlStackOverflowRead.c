/*
 * XREFs of FsRtlStackOverflowRead @ 0x1401E4880
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall FsRtlStackOverflowRead(PVOID P)
{
  struct _KTHREAD *result; // rax

  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
  (*((void (__fastcall **)(_QWORD, _QWORD))P + 4))(*((_QWORD *)P + 5), *((_QWORD *)P + 6));
  if ( P == &StackOverflowFallback )
    KeSetEvent(&StackOverflowFallbackSerialEvent, 0, 0);
  else
    ExFreePoolWithTag(P, 0);
  result = KeGetCurrentThread();
  result[1].ApcState.ApcListHead[0].Flink = 0LL;
  return result;
}
