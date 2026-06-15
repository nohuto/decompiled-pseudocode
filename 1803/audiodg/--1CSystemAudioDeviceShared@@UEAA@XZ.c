/*
 * XREFs of ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14002EB00
 * Callers:
 *     _ATL::CComCreator_ATL::CComObject_CSystemAudioDeviceShared___::CreateInstance_::_1_::dtor$1 @ 0x1400209B5 (_ATL--CComCreator_ATL--CComObject_CSystemAudioDeviceShared___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14003A878 (--1-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14003A8C0 (--1-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14003A910 (--_E-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x1400129AC (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140012D50 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 */

void __fastcall CSystemAudioDeviceShared::~CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v3; // [rsp+28h] [rbp-40h]
  __int64 v4; // [rsp+30h] [rbp-38h]
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int128 v6; // [rsp+48h] [rbp-20h] BYREF

  v4 = -2LL;
  v5 = *(_OWORD *)((char *)this + 248);
  v6 = v5;
  EtwEventActivityIdControl(4LL, &v6);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v3 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CSystemAudioDeviceSharedBase::Cleanup(this);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v6);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( *((_BYTE *)this + 416) )
  {
    *((_BYTE *)this + 416) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 376));
  }
}
