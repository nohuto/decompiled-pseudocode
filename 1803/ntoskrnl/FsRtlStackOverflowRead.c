/*
 * XREFs of FsRtlStackOverflowRead @ 0x140226670
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall FsRtlStackOverflowRead(PVOID P)
{
  struct _KTHREAD *result; // rax

  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  (*((void (__fastcall **)(_QWORD, _QWORD))P + 4))(*((_QWORD *)P + 5), *((_QWORD *)P + 6));
  if ( P == &StackOverflowFallback )
    KeSetEvent(&StackOverflowFallbackSerialEvent, 0, 0);
  else
    ExFreePoolWithTag(P, 0);
  result = KeGetCurrentThread();
  result[1].TrapFrame = 0LL;
  return result;
}
