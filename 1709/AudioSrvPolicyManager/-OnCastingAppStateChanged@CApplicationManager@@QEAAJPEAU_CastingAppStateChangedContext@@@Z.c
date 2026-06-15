/*
 * XREFs of ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x1800154C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18000B568 (WPP_SF_Sd.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x18000DFCC (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012C64 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800157F0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnCastingAppStateChanged(
        CApplicationManager *this,
        struct _CastingAppStateChangedContext *a2)
{
  __int64 v4; // rbx
  struct CApplication *v5; // rdi
  BOOL v6; // r14d
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v10; // [rsp+40h] [rbp-28h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_QWORD *)a2;
  v5 = *(struct CApplication **)(*(_QWORD *)a2 + 272LL);
  if ( v5
    || (CApplicationManager::Register(this, *(struct CProcess **)a2), (v5 = *(struct CApplication **)(v4 + 272)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x32u,
        &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids,
        *(const wchar_t **)(v4 + 232),
        *((_DWORD *)a2 + 2));
    }
    v6 = *((_DWORD *)v5 + 42) != 0;
    v7 = *((_DWORD *)a2 + 2);
    if ( !*(_DWORD *)(v4 + 464) )
    {
      if ( v7 )
        --*(_DWORD *)(v4 + 544);
      else
        ++*(_DWORD *)(v4 + 544);
      if ( *(int *)(v4 + 544) >= 0 )
      {
        CApplication::CastingStateChanged(*(CApplication **)(v4 + 272), v7 != 0 ? -1 : 1);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids);
        }
        *(_DWORD *)(v4 + 544) = 0;
      }
    }
    if ( v6 != (*((_DWORD *)v5 + 42) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(this, v5);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
