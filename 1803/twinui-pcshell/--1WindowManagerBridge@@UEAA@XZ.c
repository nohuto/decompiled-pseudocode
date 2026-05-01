/*
 * XREFs of ??1WindowManagerBridge@@UEAA@XZ @ 0x1801D2BB4
 * Callers:
 *     ??_EWindowManagerBridge@@UEAAPEAXI@Z @ 0x1801D2FB0 (--_EWindowManagerBridge@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FC6BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall WindowManagerBridge::~WindowManagerBridge(WindowManagerBridge *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 35);
  v3 = (wil::details *)*((_QWORD *)this + 34);
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 33);
  if ( v4 )
    wil::details::CloseHandle(v4, v2);
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 23);
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
}
