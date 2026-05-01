/*
 * XREFs of ??_ELockScreenDirectorServiceProviderImpl@@EEAAPEAXI@Z @ 0x1800E34BC
 * Callers:
 *     ??_ELockScreenDirectorServiceProviderImpl@@GDA@EAAPEAXI@Z @ 0x1800E3670 (--_ELockScreenDirectorServiceProviderImpl@@GDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180018554 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

LockScreenDirectorServiceProviderImpl *__fastcall LockScreenDirectorServiceProviderImpl::`vector deleting destructor'(
        LockScreenDirectorServiceProviderImpl *this,
        char a2)
{
  __int64 v4; // rcx
  char *v5; // rcx
  char *v6; // rcx

  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (char *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  v6 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  *((_DWORD *)this + 31) = -1073741823;
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite((LockScreenDirectorServiceProviderImpl *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
