/*
 * XREFs of CpcReadFeedback @ 0x1C0004180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcReadFeedback(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64 (*)(void)))(qword_1C0011918 + 96))(
             *(_QWORD *)(qword_1C0011918 + 56),
             CpcReadFeedbackAcquireCallback,
             a1);
  if ( (int)result < 0 )
    return a1();
  return result;
}
