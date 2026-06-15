/*
 * XREFs of ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x1800DE0C8
 * Callers:
 *     _CMonitorManager::OnPropertyValueChanged_::_1_::dtor$1 @ 0x180067BC2 (_CMonitorManager--OnPropertyValueChanged_--_1_--dtor$1.c)
 * Callees:
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800DE30C (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<PropertyChangedContext>::~CAutoPtr<PropertyChangedContext>(
        PropertyChangedContext **a1,
        unsigned int a2)
{
  PropertyChangedContext *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = PropertyChangedContext::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
