/*
 * XREFs of ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800FB194
 * Callers:
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1800FAC40 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::ReleasePhoneTopology(PhoneCallAudio *this)
{
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v5; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v6; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v6,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
  if ( *((_DWORD *)this + 20) )
  {
    v2 = *((_QWORD *)this + 7);
    if ( v2 )
    {
      *((_QWORD *)this + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    *((_DWORD *)this + 21) = 0;
    *((_DWORD *)this + 22) = 0;
    *((_DWORD *)this + 27) = 0;
    *((_DWORD *)this + 20) = 0;
    *((_DWORD *)this + 23) = 0;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
    Microsoft::WRL::WeakRef::~WeakRef((PhoneCallAudio *)((char *)this + 192));
    Microsoft::WRL::WeakRef::~WeakRef((PhoneCallAudio *)((char *)this + 200));
    Microsoft::WRL::WeakRef::~WeakRef((PhoneCallAudio *)((char *)this + 176));
    Microsoft::WRL::WeakRef::~WeakRef((PhoneCallAudio *)((char *)this + 184));
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v7 )
    LeaveCriticalSection(v6);
  return 0LL;
}
