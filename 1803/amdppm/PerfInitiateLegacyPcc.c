/*
 * XREFs of PerfInitiateLegacyPcc @ 0x1C000AC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfInitiateLegacyPcc(__int64 (*a1)(void))
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(), __int64 (*)(void)))qword_1C00118F8)(
             qword_1C00118D0,
             PccInitiateAcquireCallback,
             a1);
  if ( (int)result < 0 )
  {
    if ( a1 )
      return a1();
  }
  return result;
}
