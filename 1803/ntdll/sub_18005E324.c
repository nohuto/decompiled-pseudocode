/*
 * XREFs of sub_18005E324 @ 0x18005E324
 * Callers:
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_18005E324(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Ptr )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, (PRTL_RUN_ONCE_INIT_FN)sub_1800833C0, a2, 0LL);
}
