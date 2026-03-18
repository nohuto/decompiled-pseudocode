/*
 * XREFs of RtlFailFast2 @ 0x140189F60
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x140240FAC (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
