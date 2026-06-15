/*
 * XREFs of ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000CA48
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180014268 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18000CBEC (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GrantGoodFaithPLMExemption(const wchar_t **this)
{
  int v2; // edx
  _UNKNOWN **v3; // rcx
  int started; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 98) )
  {
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, this[3]);
      v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    started = -2147024809;
  }
  else
  {
    *((_DWORD *)this + 131) = 0;
    *((_DWORD *)this + 132) = 0;
    *((_DWORD *)this + 133) = 0;
    *((_DWORD *)this + 134) = 0;
    *((_DWORD *)this + 135) = 0;
    *((_DWORD *)this + 136) = 0;
    *((_DWORD *)this + 137) = 1;
    if ( *((_DWORD *)this + 131) != 2 )
    {
      *((_DWORD *)this + 131) = 2;
      *((_DWORD *)this + 132) = 1;
      *((_DWORD *)this + 133) = 0;
      *((_DWORD *)this + 134) = 1;
      *((_DWORD *)this + 135) = 2;
      *((_DWORD *)this + 136) = 1;
      *((_DWORD *)this + 137) = 2;
    }
    started = CApplication::StartGoodFaithPLMExemptionTimer((CApplication *)this, v2);
    if ( started >= 0 )
    {
      *((_DWORD *)this + 98) = 1;
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)this, 0xA3u, 0);
      goto LABEL_17;
    }
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v3 != &WPP_GLOBAL_Control && (*((_DWORD *)v3 + 7) & 0x40000000) != 0 && *((_BYTE *)v3 + 25) >= 2u )
    WPP_SF_D((TRACEHANDLE)v3[2], 0x12u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, started);
  AudPolicyLogError("CApplication::GrantGoodFaithPLMExemption", 1275, started);
LABEL_17:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)started;
}
