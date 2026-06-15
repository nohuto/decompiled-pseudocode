/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x18001F2B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800127C4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     WPP_SF_Ss @ 0x18001A044 (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C6B0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001DBA4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationStateChanged(
        CApplicationManager *this,
        struct ApplicationStateChangedContext *a2)
{
  __int64 v4; // r8
  const char *v5; // rax
  int Application; // eax
  unsigned int v7; // esi
  int v8; // edx
  struct CApplication *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-28h] BYREF
  char v14; // [rsp+50h] [rbp-20h]
  LPCRITICAL_SECTION v15; // [rsp+58h] [rbp-18h] BYREF
  char v16; // [rsp+60h] [rbp-10h]
  struct CApplication *v17; // [rsp+90h] [rbp+20h] BYREF

  v15 = (LPCRITICAL_SECTION)((char *)this + 32);
  v16 = 0;
  ATL::CCritSecLock::Lock(&v15);
  v17 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = "PENDING_TERMINATION";
    if ( !*((_DWORD *)a2 + 3) )
      v5 = "LAUNCHED";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)"LAUNCHED", v4, *(const wchar_t **)a2, v5);
  }
  Application = CApplicationManager::GetApplication(
                  this,
                  *(const unsigned __int16 **)a2,
                  *((_QWORD *)a2 + 2),
                  *((_DWORD *)a2 + 2),
                  &v17,
                  0,
                  0LL);
  v7 = Application;
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Du,
        &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::OnApplicationStateChanged", 3281, v7);
  }
  else
  {
    v8 = *((_DWORD *)a2 + 3);
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = v17;
        if ( *((_DWORD *)v17 + 42) )
          CApplicationManager::OnApplicationClosed(
            this,
            *(unsigned __int16 **)a2,
            *((_QWORD *)v17 + 74),
            *((_DWORD *)a2 + 2));
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v9 + 32);
        v14 = 0;
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        v10 = (_QWORD *)*((_QWORD *)v9 + 9);
        while ( v10 )
        {
          v11 = v10[2];
          v10 = (_QWORD *)*v10;
          if ( !*(_DWORD *)(v11 + 472) )
            *(_DWORD *)(v11 + 472) = 1;
        }
        if ( v14 )
          LeaveCriticalSection(lpCriticalSection);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v17);
    }
  }
  if ( v16 )
    LeaveCriticalSection(v15);
  return v7;
}
