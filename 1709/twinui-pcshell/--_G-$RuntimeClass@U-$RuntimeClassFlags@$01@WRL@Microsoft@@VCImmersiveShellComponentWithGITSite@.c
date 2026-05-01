/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008777C
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@WRL@Microsoft@@WCI@EAAPEAXI@Z @ 0x180087960 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@.c)
 * Callees:
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180018554 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveShellComponentWithGITSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        CImmersiveShellComponentWithGITSite *this,
        char a2)
{
  __int64 v3; // rcx

  *((_DWORD *)this + 43) = -1073741823;
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
