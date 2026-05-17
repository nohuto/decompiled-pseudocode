/*
 * XREFs of sub_18005E324 @ 0x18005E324
 * Callers:
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E324(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)a1 )
    return 0LL;
  else
    return RtlRunOnceExecuteOnce(
             (volatile signed __int64 *)(a1 + 8),
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_1800833C0,
             a2,
             0LL);
}
