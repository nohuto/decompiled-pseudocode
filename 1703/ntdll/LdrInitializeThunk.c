/*
 * XREFs of LdrInitializeThunk @ 0x180079D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180079D20 @ 0x180079D20 (sub_180079D20.c)
 *     ZwContinue @ 0x1800A5B60 (ZwContinue.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax

  sub_180079D20();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
