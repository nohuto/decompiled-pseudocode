/*
 * XREFs of ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180028CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18001037C (WPP_SF_Sd.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x180010EE0 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C6B0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E348 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppStateChangedWorkItem::Invoke(const wchar_t **this)
{
  int v2; // r15d
  struct CApplication *v3; // r12
  unsigned int v4; // r14d
  int v5; // r13d
  unsigned __int64 v6; // rbx
  const unsigned __int16 *v7; // rdi
  CApplicationManager *v8; // rsi
  int Application; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+A0h] [rbp+40h] BYREF
  int v13; // [rsp+A8h] [rbp+48h] BYREF
  CApplication *v14; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x14u,
      &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
      this[1],
      *((_DWORD *)this + 4));
  }
  v4 = *((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 4);
  v6 = (unsigned __int64)this[3];
  v7 = this[1];
  v8 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = 0;
  v13 = 0;
  Application = CApplicationManager::GetApplication(v8, v7, v6, v4, &v14, 1, &v12);
  if ( Application >= 0 )
  {
    v3 = v14;
    CApplication::UpdateAppState(v14, v5, &v13);
    if ( v12 || (v2 = 0, v13) )
      v2 = 1;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        &WPP_ddae050dd73e37d577adf215a51a3607_Traceguids,
        Application);
    }
    AudPolicyLogError("CAppStateChangedWorkItem::Invoke", 577, Application);
  }
  else if ( v2 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(g_ApplicationManager, v3);
  }
}
