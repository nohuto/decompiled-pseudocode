/*
 * XREFs of ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180015640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Ss @ 0x180011E64 (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x180013D3C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800157F0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnHostedAppStateChanged(
        CApplicationManager *this,
        struct HostedAppStateChangedContext *a2,
        __int64 a3)
{
  BOOL v5; // ebp
  struct CApplication *v6; // rsi
  const char *v7; // rax
  int v8; // r15d
  unsigned int v9; // ebx
  const unsigned __int16 *v10; // rdi
  int Application; // ebx
  int v12; // eax
  BOOL v13; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+80h] [rbp+8h] BYREF
  struct CApplication *v18; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = "HAC_NON_INTERACTIVE";
    if ( *((_DWORD *)a2 + 3) )
      v7 = "HAC_INTERACTIVE";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, a3, *(const wchar_t **)a2, v7);
  }
  v8 = *((_DWORD *)a2 + 3);
  v9 = *((_DWORD *)a2 + 2);
  v10 = *(const unsigned __int16 **)a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v17 = 0;
  Application = CApplicationManager::GetApplication(this, v10, v9, &v18, 1, &v17);
  if ( Application >= 0 )
  {
    v6 = v18;
    v12 = *((_DWORD *)v18 + 42);
    if ( v8 )
      *((_DWORD *)v18 + 42) |= 4u;
    else
      *((_DWORD *)v18 + 42) &= ~4u;
    v13 = (v12 & 0xFFFFFFF7) != 0;
    Application = 0;
    v5 = v17 || v13 != ((*((_DWORD *)v6 + 42) & 0xFFFFFFF7) != 0);
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x34u,
        &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::OnHostedAppStateChanged", 2696, Application);
  }
  else if ( v5 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(this, v6);
  }
  return (unsigned int)Application;
}
