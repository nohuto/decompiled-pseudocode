/*
 * XREFs of ??1AgileRegistrationList@@QEAA@XZ @ 0x180007D7C
 * Callers:
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$2 @ 0x1801E612C (_CApplicationManager--_CApplicationManager_--_1_--dtor$2.c)
 *     _CApplicationViewManager::_CApplicationViewManager_::_1_::dtor$1 @ 0x1801E9649 (_CApplicationViewManager--_CApplicationViewManager_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall AgileRegistrationList::~AgileRegistrationList(AgileRegistrationList *this)
{
  std::vector<AgileRegistrationList::Item>::~vector<AgileRegistrationList::Item>(this);
}
