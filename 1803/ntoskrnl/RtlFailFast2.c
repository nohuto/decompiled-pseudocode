/*
 * XREFs of RtlFailFast2 @ 0x1401B38D0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x14028F66C (RtlGuardCheckLongJumpTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
