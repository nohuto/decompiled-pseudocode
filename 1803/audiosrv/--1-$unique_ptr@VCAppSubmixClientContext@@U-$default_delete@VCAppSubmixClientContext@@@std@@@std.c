/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAA@XZ @ 0x1800D652C
 * Callers:
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$1 @ 0x1800D6D1D (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$1.c)
 * Callees:
 *     ??_GCAppSubmixClientContext@@QEAAPEAXI@Z @ 0x1800D65BC (--_GCAppSubmixClientContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>(
        CAppSubmixClientContext **a1,
        unsigned int a2)
{
  CAppSubmixClientContext *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CAppSubmixClientContext::`scalar deleting destructor'(v2, a2);
  return result;
}
