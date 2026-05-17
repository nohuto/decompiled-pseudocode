/*
 * XREFs of RtlPushFrame @ 0x180071F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB_ACTIVE_FRAME *__fastcall RtlPushFrame(__int64 a1)
{
  struct _TEB *v1; // rdx
  struct _TEB_ACTIVE_FRAME *result; // rax

  v1 = NtCurrentTeb();
  result = v1->ActiveFrame;
  *(_QWORD *)(a1 + 8) = result;
  v1->ActiveFrame = (struct _TEB_ACTIVE_FRAME *)a1;
  return result;
}
