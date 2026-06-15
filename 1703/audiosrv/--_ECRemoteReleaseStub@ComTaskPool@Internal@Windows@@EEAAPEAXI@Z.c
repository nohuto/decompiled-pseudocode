/*
 * XREFs of ??_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x1800D5180
 * Callers:
 *     ??_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@GBA@EAAPEAXI@Z @ 0x180058B00 (--_ECRemoteReleaseStub@ComTaskPool@Internal@Windows@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18002DFEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadRefTaker@@UEAA@XZ @ 0x1800D4DC4 (--1CThreadRefTaker@@UEAA@XZ.c)
 */

Windows::Internal::ComTaskPool::CRemoteReleaseStub *__fastcall Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CRemoteReleaseStub *this,
        char a2)
{
  bool v2; // zf
  __int64 v5; // rcx

  v2 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `CThreadRefTaker'};
  *((_QWORD *)this + 2) = &Windows::Internal::ComTaskPool::CRemoteReleaseStub::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  if ( !v2 )
  {
    v5 = *((_QWORD *)this + 4);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
  CThreadRefTaker::~CThreadRefTaker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
