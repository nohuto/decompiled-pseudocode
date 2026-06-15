/*
 * XREFs of ?RequestPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800C89A0
 * Callers:
 *     ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x1800C8A60 (-SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?IsPendingCellularRoutingEnabledForInstance@PhoneCallAudio@@AEAAHPEAU_TelephonyInstanceData@@@Z @ 0x1800C84BC (-IsPendingCellularRoutingEnabledForInstance@PhoneCallAudio@@AEAAHPEAU_TelephonyInstanceData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::RequestPendingCellularRoutingEnable(
        PhoneCallAudio *this,
        struct _TelephonyInstanceData *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  if ( !*((_DWORD *)this + 20) || PhoneCallAudio::IsPendingCellularRoutingEnabledForInstance(this, a2) )
  {
    v9 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct _TelephonyInstanceData *, int *))(**((_QWORD **)this + 6) + 112LL))(
           *((_QWORD *)this + 6),
           a2,
           &v9);
    if ( v5 >= 0 )
    {
      if ( v9 )
      {
        *((_DWORD *)this + 20) = 1;
        *(_QWORD *)((char *)this + 92) = *(_QWORD *)a2;
      }
      else
      {
        v4 = -2147024809;
      }
    }
    else
    {
      v4 = v5;
    }
  }
  else
  {
    v4 = -2147019873;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
