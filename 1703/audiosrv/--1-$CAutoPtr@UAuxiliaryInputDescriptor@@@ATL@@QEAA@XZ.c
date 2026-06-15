/*
 * XREFs of ??1?$CAutoPtr@UAuxiliaryInputDescriptor@@@ATL@@QEAA@XZ @ 0x1800A9FEC
 * Callers:
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$5 @ 0x1800AD5C7 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$5.c)
 * Callees:
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x18007B910 (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
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
