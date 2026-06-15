/*
 * XREFs of ??1?$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ @ 0x1800988B0
 * Callers:
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$5 @ 0x18009C713 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$5.c)
 * Callees:
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18005B43C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 */

LPVOID *__fastcall ATL::CAutoPtr<AuxiliaryInputDescriptor>::~CAutoPtr<AuxiliaryInputDescriptor>(LPVOID **a1)
{
  LPVOID *v2; // rcx
  LPVOID *result; // rax

  v2 = *a1;
  if ( v2 )
    result = AuxiliaryInputDescriptor::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
