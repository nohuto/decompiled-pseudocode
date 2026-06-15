/*
 * XREFs of ?RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800FB108
 * Callers:
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1800FAC20 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::RefreshPhoneTopology(PhoneCallAudio *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 8) + 32LL))(
         *((_QWORD *)this + 8),
         (char *)this + 56);
  v4 = 0;
  if ( v3 < 0 )
    v4 = v3;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
