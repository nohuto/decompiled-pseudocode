/*
 * XREFs of CpcAcquirePerformance @ 0x1C0007F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64 (*)(void)))(qword_1C001AAD8 + 96))(
             *(_QWORD *)(qword_1C001AAD8 + 56),
             CpcAcquirePerformanceCallback,
             a1);
  if ( (int)result < 0 )
    return a1();
  return result;
}
