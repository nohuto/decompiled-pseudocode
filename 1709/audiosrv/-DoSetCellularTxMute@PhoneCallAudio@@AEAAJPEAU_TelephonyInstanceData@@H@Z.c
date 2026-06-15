/*
 * XREFs of ?DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800C7F14
 * Callers:
 *     ?SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z @ 0x1800C8B70 (-SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::DoSetCellularTxMute(
        PhoneCallAudio *this,
        struct _TelephonyInstanceData *a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v6 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *, _QWORD))(*(_QWORD *)v7 + 56LL))(
           v7,
           a2,
           a3);
    if ( v8 < 0 )
      v6 = v8;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
