/*
 * XREFs of ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x180048648
 * Callers:
 *     _dynamic_atexit_destructor_for__g_powerReferenceManager___0 @ 0x18005C870 (_dynamic_atexit_destructor_for__g_powerReferenceManager___0.c)
 * Callees:
 *     ??_GCPowerReferenceManager@@QEAAPEAXI@Z @ 0x1800805FC (--_GCPowerReferenceManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::default_delete<CPowerReferenceManager>::operator()(__int64 a1, CPowerReferenceManager *a2)
{
  void *result; // rax

  if ( a2 )
    return CPowerReferenceManager::`scalar deleting destructor'(a2, (unsigned int)a2);
  return result;
}
