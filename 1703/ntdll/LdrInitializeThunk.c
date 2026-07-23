/*
 * XREFs of LdrInitializeThunk @ 0x180079D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180079D20 @ 0x180079D20 (sub_180079D20.c)
 *     ZwContinue @ 0x1800A5B60 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  sub_180079D20(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
