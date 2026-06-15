/*
 * XREFs of ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002FE88
 * Callers:
 *     _ATL::CComCreator_ATL::CComObject_CSystemAudioDeviceShared___::CreateInstance_::_1_::dtor$1 @ 0x1400206B0 (_ATL--CComCreator_ATL--CComObject_CSystemAudioDeviceShared___--CreateInstance_--_1_--dtor$1.c)
 *     _ATL::CComObject_CSystemAudioDeviceShared_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x140020DD0 (_ATL--CComObject_CSystemAudioDeviceShared_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14003BB24 (--1-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14003BB84 (--1-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14003BBD0 (--_E-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140005700 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005CE0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSystemAudioDeviceShared::~CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-58h] BYREF
  char v3; // [rsp+28h] [rbp-50h]
  __int64 v4; // [rsp+30h] [rbp-48h]
  CSystemAudioDeviceShared *v5; // [rsp+38h] [rbp-40h]
  __int128 v6; // [rsp+40h] [rbp-38h]
  __int128 v7; // [rsp+50h] [rbp-28h] BYREF

  v4 = -2LL;
  v5 = this;
  v6 = *(_OWORD *)((char *)this + 248);
  v7 = v6;
  EtwEventActivityIdControl(4LL, &v7);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v3 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v7);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( *((_BYTE *)this + 416) )
  {
    *((_BYTE *)this + 416) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 376));
  }
}
