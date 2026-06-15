/*
 * XREFs of ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x180097A9C
 * Callers:
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$75 @ 0x180068D48 (_CAudioResourceManager--DestroyStream_--_1_--dtor$75.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$103 @ 0x180069348 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$103.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x180097969 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800979F4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 */

_WorkTask *__fastcall std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(_WorkTask **a1)
{
  _WorkTask *v1; // rcx
  _WorkTask *result; // rax

  v1 = *a1;
  if ( v1 )
    return _WorkTask::`scalar deleting destructor'(v1);
  return result;
}
