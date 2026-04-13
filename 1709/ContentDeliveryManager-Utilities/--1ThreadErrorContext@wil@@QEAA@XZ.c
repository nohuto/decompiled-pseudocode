/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180003A94
 * Callers:
 *     _ContentManagement::AppManager::UninstallApp_::_1_::dtor$0 @ 0x1800B51CE (_ContentManagement--AppManager--UninstallApp_--_1_--dtor$0.c)
 *     _ContentManagement::AppManager::StartProductInstallWithOverrides_::_1_::dtor$0 @ 0x1800B523A (_ContentManagement--AppManager--StartProductInstallWithOverrides_--_1_--dtor$0.c)
 *     _ContentManagement::AppManager::StartProductInstall_::_1_::dtor$0 @ 0x1800B5276 (_ContentManagement--AppManager--StartProductInstall_--_1_--dtor$0.c)
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x1800BC869 (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
