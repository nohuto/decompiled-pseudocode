/*
 * XREFs of _dynamic_atexit_destructor_for__g_powerReferenceManager___0 @ 0x18005C870
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x180048648 (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 */

void *__fastcall dynamic_atexit_destructor_for__g_powerReferenceManager___0(__int64 a1)
{
  void *result; // rax

  if ( g_powerReferenceManager )
    return std::default_delete<CPowerReferenceManager>::operator()(a1, g_powerReferenceManager);
  return result;
}
