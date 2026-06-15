/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180011524
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x1800110B8 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180011CE0 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180015928 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::ProcessPendingPLMExemptionChange(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int i; // ebp
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 296);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 296));
  if ( !*((_DWORD *)this + 84) )
  {
    *((_DWORD *)this + 84) = 1;
    for ( i = *((_DWORD *)this + 85); i; i = *((_DWORD *)this + 85) )
    {
      *((_DWORD *)this + 85) = 0;
      LeaveCriticalSection(v2);
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
      v7 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, i);
      }
      v4 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v4 )
      {
        v5 = v4[2];
        v4 = (_QWORD *)*v4;
        CProcess::NotifyPLM(v5, i);
      }
      if ( v7 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v7 = 0;
      }
      EnterCriticalSection(v2);
    }
    *((_DWORD *)this + 84) = 0;
  }
  LeaveCriticalSection(v2);
}
