/*
 * XREFs of ??1PhoneCallAudio@@MEAA@XZ @ 0x1800F9E30
 * Callers:
 *     ??_GPhoneCallAudio@@MEAAPEAXI@Z @ 0x1800F9F70 (--_GPhoneCallAudio@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Free@?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ @ 0x18005FCD0 (-Free@-$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060AB8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PhoneCallAudio::~PhoneCallAudio(PhoneCallAudio *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = &PhoneCallAudio::`vftable'{for `IEndpointNotificationCallback'};
  *((_QWORD *)this + 1) = &PhoneCallAudio::`vftable'{for `ITelephonyControl'};
  *((_QWORD *)this + 2) = &PhoneCallAudio::`vftable'{for `ITelephonyControlInternal'};
  *((_QWORD *)this + 3) = &PhoneCallAudio::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 4) = &PhoneCallAudio::`vftable'{for `CUnknown'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 208);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
  ATL::CAutoPtr<PhoneCallEndTimer>::Free((__int64 *)this + 9);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(v2);
  `eh vector destructor iterator'(
    (char *)this + 192,
    8LL,
    2LL,
    (void (*)(void *))ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>);
  `eh vector destructor iterator'(
    (char *)this + 176,
    8LL,
    2LL,
    (void (*)(void *))ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ATL::CAutoPtr<PhoneCallEndTimer>::Free((__int64 *)this + 9);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 4) = &CUnknown::`vftable';
}
