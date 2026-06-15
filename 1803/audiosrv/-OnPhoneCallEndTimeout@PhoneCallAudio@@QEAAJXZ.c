/*
 * XREFs of ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1800FACEC
 * Callers:
 *     ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x1800FB7D0 (-TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z.c)
 * Callees:
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800559FC (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800FAA14 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FAF20 (-PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::OnPhoneCallEndTimeout(PhoneCallAudio *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  LPCRITICAL_SECTION v6; // [rsp+28h] [rbp-30h] BYREF
  char v7; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = PhoneCallAudio::UpdatePhoneCallAudioState(this);
  if ( v3 >= 0 )
  {
    if ( !PhoneCallAudio::IsInCall(this) )
    {
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&v6,
        (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
      *((_DWORD *)this + 32) = 2;
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
      Microsoft::WRL::WeakRef::~WeakRef((PhoneCallAudio *)((char *)this + 176));
      Microsoft::WRL::WeakRef::~WeakRef((PhoneCallAudio *)((char *)this + 184));
      if ( v9 )
        LeaveCriticalSection(lpCriticalSection);
      v4 = PhoneCallAudio::PublishDefaults(this, eAll);
      if ( v4 < 0 )
        v2 = v4;
      if ( v7 )
        LeaveCriticalSection(v6);
    }
  }
  else
  {
    return (unsigned int)v3;
  }
  return v2;
}
