/*
 * XREFs of ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8D70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?ClearPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJXZ @ 0x1800C7B38 (-ClearPendingCellularRoutingEnable@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800C7DF4 (-DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C7FA4 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1800C87AC (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x1800C8F08 (-UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_000.c)
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88 (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::StartSession(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // eax
  int *v7; // r8
  int *v8; // r8
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int *v12; // r8
  int *v13; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v17; // [rsp+38h] [rbp-20h] BYREF
  char v18; // [rsp+40h] [rbp-18h]

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v17,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 120));
  if ( !*(_DWORD *)(a1 + 68) )
  {
    *(_DWORD *)(a1 + 68) = 1;
    v5 = a1 - 8;
    v6 = PhoneCallAudio::UpdatePhoneCallAudioState((PhoneCallAudio *)(a1 - 8));
    if ( v6 >= 0 )
    {
      if ( ((PhoneCallAudio::UpdateCommsPreferredEndpoint((PhoneCallAudio *)(a1 - 8), eRender, v7),
             PhoneCallAudio::UpdateCommsPreferredEndpoint((PhoneCallAudio *)(a1 - 8), eCapture, v8),
             !a2)
         || a2 == 5)
        && *(_DWORD *)(a1 + 92)
        || (v6 = PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(a1 - 8), v6 >= 0) )
      {
        v9 = 0;
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&lpCriticalSection,
          (struct _RTL_CRITICAL_SECTION *)(v5 + 128));
        if ( *(_DWORD *)(v5 + 80) )
        {
          v10 = PhoneCallAudio::DoEnableCellularRouting(
                  (PhoneCallAudio *)(a1 - 8),
                  (struct _TelephonyInstanceData *)(v5 + 92),
                  1u);
          if ( v10 >= 0 )
          {
            v11 = PhoneCallAudio::ClearPendingCellularRoutingEnable((PhoneCallAudio *)(a1 - 8));
            if ( v11 < 0 )
              v9 = v11;
          }
          else
          {
            v9 = v10;
          }
        }
        if ( v16 )
          LeaveCriticalSection(lpCriticalSection);
        if ( v9 < 0 )
        {
          v4 = v9;
LABEL_19:
          *(_DWORD *)(a1 + 68) = 0;
          PhoneCallAudio::UpdatePhoneCallAudioState((PhoneCallAudio *)(a1 - 8));
          PhoneCallAudio::UpdateCommsPreferredEndpoint((PhoneCallAudio *)(a1 - 8), eRender, v12);
          PhoneCallAudio::UpdateCommsPreferredEndpoint((PhoneCallAudio *)(a1 - 8), eCapture, v13);
          goto LABEL_20;
        }
        v6 = PhoneCallAudio::OnPhoneCallStarted((PhoneCallAudio *)(a1 - 8));
        if ( v6 >= 0 )
          goto LABEL_20;
      }
    }
    v4 = v6;
    goto LABEL_19;
  }
LABEL_20:
  if ( v18 )
    LeaveCriticalSection(v17);
  return v4;
}
