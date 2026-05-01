/*
 * XREFs of ??1?$MoveOnCopy@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180191454
 * Callers:
 *     _PenWorkspaceDiscoverBroker::ActivateApp_::_1_::dtor$1 @ 0x180191C2E (_PenWorkspaceDiscoverBroker--ActivateApp_--_1_--dtor$1.c)
 *     _PenWorkspaceDiscoverBroker::ActivateApp_::_1_::dtor$2 @ 0x180191C3A (_PenWorkspaceDiscoverBroker--ActivateApp_--_1_--dtor$2.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$2 @ 0x1801C3A2A (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$2.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$3 @ 0x1801C3A36 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$3.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$9 @ 0x1801C3A7E (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$9.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$10 @ 0x1801C3A8A (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$10.c)
 *     _PeoplePaneViewManager::NotifyListeners_::_1_::dtor$0 @ 0x1801C40C3 (_PeoplePaneViewManager--NotifyListeners_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Windows::Internal::MoveOnCopy<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~MoveOnCopy<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
        __int64 a1)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
}
