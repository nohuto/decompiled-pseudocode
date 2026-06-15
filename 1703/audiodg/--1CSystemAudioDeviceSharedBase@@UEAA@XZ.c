/*
 * XREFs of ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140005700
 * Callers:
 *     ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140008EB0 (--_G-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x140020DEF (_ATL--CComObject_CSystemAudioDeviceShared_--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002FE88 (--1CSystemAudioDeviceShared@@UEAA@XZ.c)
 *     _CSystemAudioDeviceShared::_CSystemAudioDeviceShared_::_1_::dtor$1 @ 0x14002FF61 (_CSystemAudioDeviceShared--_CSystemAudioDeviceShared_--_1_--dtor$1.c)
 *     ??_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z @ 0x14003A800 (--_GCSystemAudioDeviceSharedBase@@UEAAPEAXI@Z.c)
 *     ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14003DB54 (--1CSystemAudioDeviceOffloadGraph@@UEAA@XZ.c)
 *     _CSystemAudioDeviceOffloadGraph::_CSystemAudioDeviceOffloadGraph_::_1_::dtor$1 @ 0x14003DC95 (_CSystemAudioDeviceOffloadGraph--_CSystemAudioDeviceOffloadGraph_--_1_--dtor$1.c)
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140003B50 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005CE0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(CSystemAudioDeviceSharedBase *this)
{
  DWORD v2; // ecx
  DWORD v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  CSystemAudioDeviceSharedBase *v9; // [rsp+38h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF

  v8 = -2LL;
  v9 = this;
  *(_QWORD *)this = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 37) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 38) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmixInternal'};
  v10 = *(_OWORD *)((char *)this + 248);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  v2 = *((_DWORD *)this + 90);
  if ( v2 != -1 )
  {
    FlsSetValue(v2, 0LL);
    FlsFree(*((_DWORD *)this + 90));
  }
  v3 = *((_DWORD *)this + 89);
  if ( v3 != -1 )
    TlsFree(v3);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v11);
  v4 = *((_QWORD *)this + 41);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
}
