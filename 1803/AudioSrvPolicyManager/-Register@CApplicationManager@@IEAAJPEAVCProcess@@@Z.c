/*
 * XREFs of ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_::_Do_call @ 0x18000AB60 (std--_Func_impl_no_alloc__lambda_8fb95896ce858fa14a6982eb9316d878__void_--_Do_call.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001AA78 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001AB60 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001AC34 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001AD08 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x18001E010 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Do_call @ 0x180022E40 (std--_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_--_Do_call.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010A08 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C6B0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18001CAC8 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DA1C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x180025DF8 (-TsSessionIdIsMuted@@YAHK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Register(CApplicationManager *this, struct CProcess *a2)
{
  int Application; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+80h] [rbp+20h] BYREF
  struct CApplication *v9; // [rsp+88h] [rbp+28h] BYREF

  Application = 0;
  v9 = 0LL;
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_QWORD *)a2 + 35) )
  {
    Application = CApplicationManager::GetApplication(
                    this,
                    *((const unsigned __int16 **)a2 + 29),
                    *((_QWORD *)a2 + 33),
                    *((_DWORD *)a2 + 55),
                    &v9,
                    1,
                    &v8);
    if ( Application < 0 || (Application = CApplication::LinkProcess(v9, a2), Application < 0) )
    {
      if ( v8 )
        CApplicationManager::RemoveApplication(this, &v9);
    }
    else if ( (unsigned int)TsSessionIdIsMuted(*((_DWORD *)a2 + 55)) )
    {
      CApplicationManager::SilenceAndRevokePLMExemption(this, v9);
    }
    if ( Application < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x16u,
          &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids,
          Application);
      }
      AudPolicyLogError("CApplicationManager::Register", 848, Application);
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Application;
}
