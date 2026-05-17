/*
 * XREFs of LdrInitializeThunk @ 0x180078E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     LdrpInitialize @ 0x180078E20 (LdrpInitialize.c)
 *     ZwContinue @ 0x1800A0920 (ZwContinue.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax

  LdrpInitialize();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
