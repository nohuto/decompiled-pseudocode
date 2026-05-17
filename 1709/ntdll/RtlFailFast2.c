/*
 * XREFs of RtlFailFast2 @ 0x1800A4E90
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180020260 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F69A0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
