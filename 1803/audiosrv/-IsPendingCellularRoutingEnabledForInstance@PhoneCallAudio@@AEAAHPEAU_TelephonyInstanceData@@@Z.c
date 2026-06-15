/*
 * XREFs of ?IsPendingCellularRoutingEnabledForInstance@PhoneCallAudio@@AEAAHPEAU_TelephonyInstanceData@@@Z @ 0x1800FAA2C
 * Callers:
 *     ?GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x1800FA590 (-GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z.c)
 *     ?RequestPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800FB27C (-RequestPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

_BOOL8 __fastcall PhoneCallAudio::IsPendingCellularRoutingEnabledForInstance(
        PhoneCallAudio *this,
        struct _TelephonyInstanceData *a2)
{
  BOOL v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 208));
  v4 = *((_DWORD *)this + 22)
    && *((_DWORD *)a2 + 1) == *((_DWORD *)this + 26)
    && *(_DWORD *)a2 == *((_DWORD *)this + 25);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
