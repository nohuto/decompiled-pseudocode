/*
 * XREFs of ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1800C8700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800C890C (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PhoneCallAudio::OnEndpointDeviceRemoved(PhoneCallAudio *this, struct IEndpointDevice *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 32LL))(*((_QWORD *)this + 7)) )
    PhoneCallAudio::ReleasePhoneTopology(this);
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
