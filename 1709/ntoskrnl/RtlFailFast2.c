/*
 * XREFs of RtlFailFast2 @ 0x140189C60
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1402572FC (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
