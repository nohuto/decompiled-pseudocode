/*
 * XREFs of ??1?$unique_ptr@VDDAScreenCapture@@U?$default_delete@VDDAScreenCapture@@@std@@@std@@QEAA@XZ @ 0x1800EDD14
 * Callers:
 *     _DDAScreenCapture::CreateInstance_::_1_::dtor$1 @ 0x1801ECB4C (_DDAScreenCapture--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1800E782C (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 */

DDAScreenCapture *__fastcall std::unique_ptr<DDAScreenCapture>::~unique_ptr<DDAScreenCapture>(DDAScreenCapture **a1)
{
  DDAScreenCapture *v1; // rcx
  DDAScreenCapture *result; // rax

  v1 = *a1;
  if ( v1 )
    return DDAScreenCapture::`scalar deleting destructor'(v1);
  return result;
}
