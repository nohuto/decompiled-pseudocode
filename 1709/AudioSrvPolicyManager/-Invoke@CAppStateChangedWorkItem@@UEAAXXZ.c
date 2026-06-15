/*
 * XREFs of ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18001F710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18000B568 (WPP_SF_Sd.c)
 *     ?UpdateAppState@CApplication@@QEAAXHPEAH@Z @ 0x18000BF44 (-UpdateAppState@CApplication@@QEAAXHPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x180013D3C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800157F0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppStateChangedWorkItem::Invoke(const wchar_t **this)
{
  BOOL v2; // r14d
  struct CApplication *v3; // r15
  unsigned int v4; // esi
  int v5; // r12d
  const unsigned __int16 *v6; // rbx
  CApplicationManager *v7; // rdi
  int Application; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+90h] [rbp+40h] BYREF
  int v12; // [rsp+98h] [rbp+48h] BYREF
  CApplication *v13; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x14u,
      &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids,
      this[1],
      *((_DWORD *)this + 4));
  }
  v4 = *((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 4);
  v6 = this[1];
  v7 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v11 = 0;
  v12 = 0;
  Application = CApplicationManager::GetApplication(v7, v6, v4, &v13, 1, &v11);
  if ( Application >= 0 )
  {
    v3 = v13;
    CApplication::UpdateAppState(v13, v5, &v12);
    v2 = v11 || v12;
  }
  if ( v10 )
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
        &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids,
        Application);
    }
    AudPolicyLogError("CAppStateChangedWorkItem::Invoke", 575, Application);
  }
  else if ( v2 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(g_ApplicationManager, v3);
  }
}
