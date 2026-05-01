/*
 * XREFs of ??_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x1801055E0
 * Callers:
 *     ??_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@GBA@EAAPEAXI@Z @ 0x1800A2810 (--_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CThreadRefTaker@@UEAA@XZ @ 0x1800960B8 (--1CThreadRefTaker@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Windows::Internal::ComTaskPool::CRemoteReleaseStub *__fastcall Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CRemoteReleaseStub *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `CThreadRefTaker'};
  *((_QWORD *)this + 2) = &Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>'};
  if ( *((_BYTE *)this + 40) )
  {
    v4 = *((_QWORD *)this + 4);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
  CThreadRefTaker::~CThreadRefTaker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
