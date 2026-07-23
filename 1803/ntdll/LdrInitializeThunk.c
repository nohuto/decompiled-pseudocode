/*
 * XREFs of LdrInitializeThunk @ 0x180074F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180074FB0 @ 0x180074FB0 (sub_180074FB0.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x18009B320 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  sub_180074FB0(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
