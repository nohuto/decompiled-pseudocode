/*
 * XREFs of ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x1800DE1C4
 * Callers:
 *     ??_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z @ 0x1800DE320 (--_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ @ 0x1800059F4 (--1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180018554 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

RemoteLauncherForegroundHandler *__fastcall RemoteLauncherForegroundHandler::`vector deleting destructor'(
        RemoteLauncherForegroundHandler *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 41) = -1073741823;
  CApplicationManager::ACTIVATION_STACK_DATA::~ACTIVATION_STACK_DATA((RemoteLauncherForegroundHandler *)((char *)this + 120));
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
