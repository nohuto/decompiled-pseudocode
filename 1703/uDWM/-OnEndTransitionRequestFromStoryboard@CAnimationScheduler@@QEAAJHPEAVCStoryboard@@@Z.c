/*
 * XREFs of ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180004C38
 * Callers:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x1800065A4 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x1800970F0 (-OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x1800040D4 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180004A0C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000553C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18001049C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
 */

__int64 __fastcall CAnimationScheduler::OnEndTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        struct CStoryboard *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  struct _GUID v12; // xmm6
  int v13; // r9d
  unsigned __int64 v14; // rax
  struct _GUID v16; // [rsp+30h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v6, &UdwmSystemAnimation_EndTransitionRequest, a2);
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
        goto LABEL_21;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 72LL))(*(_QWORD *)(v9 + 8 * v8));
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800B0AB8, 1u, v11, 0x131u);
    }
    else
    {
      v12 = *(struct _GUID *)(v10 + 48);
      v13 = -2147024809;
      v14 = *(_QWORD *)(v10 + 48) - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v14 )
        v14 = _mm_srli_si128((__m128i)v12, 8).m128i_u64[0] - *(_QWORD *)GUID_NULL.Data4;
      if ( v14 )
      {
        v16 = *(struct _GUID *)(v10 + 48);
        v13 = CAnimationClockCoordinator::OnEndAnimationClock(
                *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 19),
                &v16);
        if ( v13 == -2147019873 )
        {
          v16 = v12;
          v13 = CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(this, &v16);
        }
        v7 = v13;
        if ( v13 >= 0 )
          goto LABEL_15;
      }
      else
      {
        v7 = -2147024809;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1800B0AB8, 1u, v13, 0x134u);
    }
LABEL_21:
    if ( *(_DWORD *)(v10 + 72) == a2 && (!*(_DWORD *)(v10 + 24) || !*(_BYTE *)(v10 + 76)) )
      CStoryboard::Abandon((CStoryboard *)v10);
  }
LABEL_15:
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v7;
}
