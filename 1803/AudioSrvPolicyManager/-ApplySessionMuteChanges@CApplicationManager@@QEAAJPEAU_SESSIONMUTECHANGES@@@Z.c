/*
 * XREFs of ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18001CDB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001D070 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DA1C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplySessionMuteChanges(
        CApplicationManager *this,
        struct _SESSIONMUTECHANGES *a2)
{
  _UNKNOWN **v4; // rcx
  int v5; // esi
  _QWORD *v6; // rbx
  struct CApplication *v7; // rdx
  unsigned int v8; // ebx
  _QWORD *v9; // rdx
  _DWORD *v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v13; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v5 = *((_DWORD *)a2 + 1);
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
  {
    WPP_SF_D((TRACEHANDLE)v4[2], 0x28u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v5);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    do
    {
      v7 = (struct CApplication *)v6[2];
      v6 = (_QWORD *)*v6;
      if ( *((_DWORD *)v7 + 43) == v5 )
        CApplicationManager::SilenceAndRevokePLMExemption(this, v7);
    }
    while ( v6 );
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v8 = *(_DWORD *)a2;
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_D((TRACEHANDLE)v4[2], 0x29u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, v8);
  v9 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v9 )
  {
    v10 = (_DWORD *)v9[2];
    v9 = (_QWORD *)*v9;
    if ( v10[43] == v8 && !v10[139] )
    {
      v10[131] = 0;
      v10[132] = 0;
      v10[133] = 0;
      v10[134] = 0;
      v10[135] = 0;
      v10[136] = 0;
      v10[137] = 1;
    }
  }
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, v8, 0);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
