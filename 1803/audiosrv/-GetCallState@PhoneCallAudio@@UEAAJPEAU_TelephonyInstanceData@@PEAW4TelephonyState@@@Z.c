/*
 * XREFs of ?GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x1800FA590
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?IsPendingCellularRoutingEnabledForInstance@PhoneCallAudio@@AEAAHPEAU_TelephonyInstanceData@@@Z @ 0x1800FAA2C (-IsPendingCellularRoutingEnabledForInstance@PhoneCallAudio@@AEAAHPEAU_TelephonyInstanceData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::GetCallState(
        struct _RTL_CRITICAL_SECTION *this,
        struct _TelephonyInstanceData *a2,
        enum TelephonyState *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 5);
  if ( a2 && a3 )
  {
    *(_DWORD *)a3 = 1;
    if ( *(_QWORD *)&this[1].LockCount )
    {
      if ( (unsigned int)PhoneCallAudio::IsPendingCellularRoutingEnabledForInstance(
                           (PhoneCallAudio *)&this[-1].SpinCount,
                           a2) )
      {
        *(_DWORD *)a3 = 0;
      }
      else
      {
        v11 = 0;
        v7 = (*(__int64 (__fastcall **)(_QWORD, struct _TelephonyInstanceData *, int *))(**(_QWORD **)&this[1].LockCount
                                                                                       + 96LL))(
               *(_QWORD *)&this[1].LockCount,
               a2,
               &v11);
        if ( v7 >= 0 )
          *(_DWORD *)a3 = v11 == 0;
        else
          v6 = v7;
      }
    }
    else
    {
      v6 = -2147019873;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
