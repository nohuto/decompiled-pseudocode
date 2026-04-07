/*
 * XREFs of ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180003D78
 * Callers:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x1800079D0 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180093F80 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x1800033EC (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180003B9C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18000D84C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180092BB8 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnEndTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        struct CStoryboard *a3)
{
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  struct _GUID v12; // xmm6
  unsigned __int64 v13; // rcx
  struct _GUID v15; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(v6, &UdwmSystemAnimation_EndTransitionRequest, a2);
  v7 = -2147467259;
  v8 = (unsigned int)(*((_DWORD *)this + 10) - 1);
  if ( (int)v8 >= 0 )
  {
    v9 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 8 * v8);
      if ( !*(_DWORD *)(v10 + 24) && *(_DWORD *)(v10 + 72) == a2 && *(struct CStoryboard **)(v10 + 80) == a3 )
        break;
      v8 = (unsigned int)(v8 - 1);
      if ( (int)v8 < 0 )
        goto LABEL_20;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 72LL))(*(_QWORD *)(v9 + 8 * v8));
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF320, 1u, v11, 0x131u);
    }
    else
    {
      v12 = *(struct _GUID *)(v10 + 48);
      v7 = -2147024809;
      v13 = *(_QWORD *)(v10 + 48) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v13 )
        v13 = _mm_srli_si128((__m128i)v12, 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
      if ( v13 )
      {
        v15 = *(struct _GUID *)(v10 + 48);
        v7 = CAnimationClockCoordinator::OnEndAnimationClock(
               *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 23),
               &v15);
        if ( v7 == -2147019873 )
        {
          v15 = v12;
          v7 = CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(this, &v15);
        }
      }
      if ( v7 >= 0 )
        goto LABEL_15;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF320, 1u, v7, 0x134u);
    }
LABEL_20:
    if ( *(_DWORD *)(v10 + 72) == a2 && (!*(_DWORD *)(v10 + 24) || !*(_BYTE *)(v10 + 76)) )
      CStoryboard::Abandon((CStoryboard *)v10);
  }
LABEL_15:
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return (unsigned int)v7;
}
