/*
 * XREFs of ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sxs @ 0x18001A0E8 (WPP_SF_Sxs.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C6B0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E348 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnHostedAppStateChanged(
        CApplicationManager *this,
        struct HostedAppStateChangedContext *a2,
        __int64 a3)
{
  BOOL v5; // ebp
  struct CApplication *v6; // r14
  const char *v7; // rax
  int v8; // r12d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdi
  const unsigned __int16 *v11; // rsi
  int Application; // ebx
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+90h] [rbp+8h] BYREF
  struct CApplication *v21; // [rsp+98h] [rbp+10h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = "HAC_NON_INTERACTIVE";
    if ( *((_DWORD *)a2 + 3) )
      v7 = "HAC_INTERACTIVE";
    WPP_SF_Sxs(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, a3, *(const wchar_t **)a2, *((_QWORD *)a2 + 2), v7);
  }
  v8 = *((_DWORD *)a2 + 3);
  v9 = *((_DWORD *)a2 + 2);
  v10 = *((_QWORD *)a2 + 2);
  v11 = *(const unsigned __int16 **)a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v20 = 0;
  Application = CApplicationManager::GetApplication(this, v11, v10, v9, &v21, 1, &v20);
  if ( Application >= 0 )
  {
    v6 = v21;
    v13 = *((_DWORD *)v21 + 42);
    if ( v8 )
      v14 = v13 | 4;
    else
      v14 = v13 & 0xFFFFFFFB;
    *((_DWORD *)v21 + 42) = v14;
    v15 = (v13 & 6) != 0;
    v16 = (v14 & 6) != 0;
    Application = 0;
    v5 = v20 || v15 != v16;
  }
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::OnHostedAppStateChanged", 2730, Application);
  }
  else if ( v5 )
  {
    CApplicationManager::OnApplicationInteractivityChanged(this, v6);
  }
  return (unsigned int)Application;
}
