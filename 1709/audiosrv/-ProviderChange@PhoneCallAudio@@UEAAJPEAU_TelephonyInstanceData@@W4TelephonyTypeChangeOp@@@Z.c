/*
 * XREFs of ?ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800C8830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800C7D64 (-DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyType.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::ProviderChange(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, unsigned int a3)
{
  signed int v6; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    a1 + 3);
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_11;
  }
  if ( a3 > 2 )
    goto LABEL_10;
  DebugInfo = a1[1].DebugInfo;
  if ( !DebugInfo )
  {
    v6 = -2147019873;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, __int64, int *))(*(_QWORD *)&DebugInfo->Type + 112LL))(
         DebugInfo,
         a2,
         &v11);
  if ( v6 >= 0 )
  {
    if ( !v11 )
    {
      v6 = -2147024809;
      goto LABEL_11;
    }
    v6 = PhoneCallAudio::DoEnableCellularProviderChange((__int64)&a1[-1].SpinCount, a2, a3);
    if ( v6 >= 0 )
LABEL_10:
      v6 = a3 > 2 ? 0x80070057 : 0;
  }
LABEL_11:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
