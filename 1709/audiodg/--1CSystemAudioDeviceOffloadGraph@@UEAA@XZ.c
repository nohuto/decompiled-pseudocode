/*
 * XREFs of ??1CSystemAudioDeviceOffloadGraph@@UEAA@XZ @ 0x14003E4C4
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceOffloadGraph_::CComObject_CSystemAudioDeviceOffloadGraph__::_1_::dtor$0 @ 0x14003E30B (_ATL--CComObject_CSystemAudioDeviceOffloadGraph_--CComObject_CSystemAudioDeviceOffloadGraph__--_.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14003E39C (--1-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14003E3FC (--1-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14003E404 (--1-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSystemAudioDeviceOffloadGraph_::_CComObject_CSystemAudioDeviceOffloadGraph__::_1_::dtor$0 @ 0x14003E4B7 (_ATL--CComObject_CSystemAudioDeviceOffloadGraph_--_CComObject_CSystemAudioDeviceOffloadGraph__--.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x14003E6C0 (--_E-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x14000F9BC (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ @ 0x14003E770 (-Cleanup@CSystemAudioDeviceOffloadGraph@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph(CSystemAudioDeviceOffloadGraph *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  CSystemAudioDeviceOffloadGraph *v9; // [rsp+38h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF

  v8 = -2LL;
  v9 = this;
  v10 = *(_OWORD *)((char *)this + 248);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CSystemAudioDeviceOffloadGraph::Cleanup(this);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v11);
  v2 = *((_QWORD *)this + 59);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 58);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 57);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 56);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( *((_BYTE *)this + 440) )
  {
    *((_BYTE *)this + 440) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  }
}
