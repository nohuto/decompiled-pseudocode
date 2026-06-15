/*
 * XREFs of ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x1800C8A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?ClearPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJXZ @ 0x1800C7B38 (-ClearPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800C7DF4 (-DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?RequestPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1800C89A0 (-RequestPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetCallState(__int64 a1, struct _TelephonyInstanceData *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 120));
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_17;
  }
  if ( a3 > 1 )
    goto LABEL_4;
  v7 = *(_QWORD *)(a1 + 40);
  if ( !v7 )
  {
    v8 = -2147019873;
LABEL_7:
    v6 = v8;
    goto LABEL_17;
  }
  if ( a3 || *(_DWORD *)(a1 + 68) )
  {
    v13 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *, int *))(*(_QWORD *)v7 + 112LL))(
           v7,
           a2,
           &v13);
    if ( v8 < 0 )
      goto LABEL_7;
    if ( !v13 )
    {
LABEL_4:
      v6 = -2147024809;
      goto LABEL_17;
    }
    v8 = PhoneCallAudio::ClearPendingCellularRoutingEnable((PhoneCallAudio *)(a1 - 8));
    if ( v8 < 0 )
      goto LABEL_7;
    v9 = PhoneCallAudio::DoEnableCellularRouting((PhoneCallAudio *)(a1 - 8), a2, a3 == 0);
    if ( v9 < 0 )
      v6 = v9;
  }
  else
  {
    v8 = PhoneCallAudio::RequestPendingCellularRoutingEnable((PhoneCallAudio *)(a1 - 8), a2);
    if ( v8 < 0 )
      goto LABEL_7;
  }
LABEL_17:
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
