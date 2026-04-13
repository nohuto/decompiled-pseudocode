/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180003E08
 * Callers:
 *     _ContentManagement::AppManager::UninstallApp_::_1_::dtor$2 @ 0x1800C1F16 (_ContentManagement--AppManager--UninstallApp_--_1_--dtor$2.c)
 *     _ContentManagement::AppManager::StartProductInstallWithOverrides_::_1_::dtor$2 @ 0x1800C1F82 (_ContentManagement--AppManager--StartProductInstallWithOverrides_--_1_--dtor$2.c)
 *     _ContentManagement::AppManager::StartProductInstall_::_1_::dtor$2 @ 0x1800C1FBE (_ContentManagement--AppManager--StartProductInstall_--_1_--dtor$2.c)
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x1800C9E93 (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
