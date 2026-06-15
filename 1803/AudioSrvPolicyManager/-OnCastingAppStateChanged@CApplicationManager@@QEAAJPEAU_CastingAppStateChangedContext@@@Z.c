/*
 * XREFs of ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001E010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18001037C (WPP_SF_Sd.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180013014 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E348 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnCastingAppStateChanged(
        CApplicationManager *this,
        struct _CastingAppStateChangedContext *a2)
{
  __int64 v4; // rbx
  struct CApplication *v5; // rdi
  BOOL v6; // ebp
  int v7; // edx
  int v8; // ecx
  bool v9; // sf
  char v11[4]; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v13; // [rsp+40h] [rbp-28h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *(_QWORD *)a2;
  v5 = *(struct CApplication **)(*(_QWORD *)a2 + 280LL);
  if ( v5
    || (CApplicationManager::Register(this, *(struct CProcess **)a2), (v5 = *(struct CApplication **)(v4 + 280)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      *(_DWORD *)v11 = *((_DWORD *)a2 + 2);
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids,
        *(const wchar_t **)(v4 + 232),
        *(_DWORD *)v11);
    }
    v6 = *((_DWORD *)v5 + 42) != 0;
    v7 = *((_DWORD *)a2 + 2);
    if ( !*(_DWORD *)(v4 + 472) )
    {
      v8 = v7 != 0 ? -1 : 1;
      v9 = v8 + *(_DWORD *)(v4 + 552) < 0;
      *(_DWORD *)(v4 + 552) += v8;
      if ( v9 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids);
        }
        *(_DWORD *)(v4 + 552) = 0;
      }
      else
      {
        CApplication::CastingStateChanged(*(CApplication **)(v4 + 280), v7 != 0 ? -1 : 1);
      }
    }
    if ( v6 != (*((_DWORD *)v5 + 42) != 0) )
      CApplicationManager::OnApplicationInteractivityChanged(this, v5);
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
