/*
 * XREFs of std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Do_call @ 0x180022E40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x180015290 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Do_call(__int64 a1)
{
  struct CProcess *v1; // rdi
  int v2; // esi
  int v3; // ebp
  CApplicationManager *v4; // rbx
  int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v1 = *(struct CProcess **)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = CApplicationManager::Register(v4, v1);
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v5);
    }
    AudPolicyLogError("CApplicationManager::SetSmtcSubscriptionState", 798, v5);
  }
  else
  {
    CProcess::SetHasSmtcSubscription((__int64)v1 + 16, v3, v2);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
