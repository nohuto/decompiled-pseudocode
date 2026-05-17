/*
 * XREFs of LdrInitializeThunk @ 0x180074F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180074FB0 @ 0x180074FB0 (sub_180074FB0.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x18009B320 (ZwContinue.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax

  sub_180074FB0();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
