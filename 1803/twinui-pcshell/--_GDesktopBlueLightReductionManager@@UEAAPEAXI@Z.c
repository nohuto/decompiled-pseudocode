/*
 * XREFs of ??_GDesktopBlueLightReductionManager@@UEAAPEAXI@Z @ 0x180143FC0
 * Callers:
 *     ??_EDesktopBlueLightReductionManager@@WCI@EAAPEAXI@Z @ 0x1800A43C0 (--_EDesktopBlueLightReductionManager@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800F5B20 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801048B4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x18013D280 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

DesktopBlueLightReductionManager *__fastcall DesktopBlueLightReductionManager::`scalar deleting destructor'(
        DesktopBlueLightReductionManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v3; // di
  wil::details *v4; // rcx

  v3 = (char)a2;
  v4 = (wil::details *)*((_QWORD *)this + 23);
  if ( v4 )
    wil::details::delete_wnf_subscription_state(v4, a2);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 22);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 21);
  *((_DWORD *)this + 41) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  CImmersiveShellComponent::~CImmersiveShellComponent((DesktopBlueLightReductionManager *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  return this;
}
