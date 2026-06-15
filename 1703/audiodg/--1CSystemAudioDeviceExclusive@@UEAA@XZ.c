/*
 * XREFs of ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14003991C
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceExclusive_::CComObject_CSystemAudioDeviceExclusive__::_1_::dtor$0 @ 0x14003976D (_ATL--CComObject_CSystemAudioDeviceExclusive_--CComObject_CSystemAudioDeviceExclusive__--_1_--dt.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140039838 (--1-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140039898 (--1-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x1400398A0 (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceExclusive_::_CComObject_CSystemAudioDeviceExclusive__::_1_::dtor$0 @ 0x14003990D (_ATL--CComObject_CSystemAudioDeviceExclusive_--_CComObject_CSystemAudioDeviceExclusive__--_1_--d.c)
 *     ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x140039B00 (--_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140003B50 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x140039B40 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(CSystemAudioDeviceExclusive *this)
{
  __int128 v2; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceOffload::`vftable'{for `ISubmix'};
  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  if ( !*((_DWORD *)this + 96) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    CSystemAudioDeviceExclusive::Cleanup(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  }
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 344) )
  {
    *((_BYTE *)this + 344) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  }
}
