/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000BCDC
 * Callers:
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18002C5C4 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x18009C360 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006840 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009150 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000A04C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?IsEnabled@CStoryboard@@QEAA_NXZ @ 0x18000A070 (-IsEnabled@CStoryboard@@QEAA_NXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000A0CC (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18000B5EC (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x18000B660 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18000BECC (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18009B2D8 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct CStoryboard *a4,
        struct _GUID *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // edx
  int v14; // eax
  CStoryboard *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  CAnimationScheduler *v18; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-58h]
  struct CStoryboard *v26; // [rsp+30h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+38h] [rbp-40h] BYREF
  __int128 v28; // [rsp+40h] [rbp-38h]
  __int128 v29; // [rsp+50h] [rbp-28h]

  v27 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(v10, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v26 = 0LL;
  v11 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this, v9);
  v13 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    v21 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v12 = *(_QWORD *)(v21 + 8LL * v13);
      if ( *(_DWORD *)(v12 + 72) == a2 )
      {
        v22 = *(_QWORD *)(v12 + 32);
        if ( a3 )
        {
          v29 = *(_OWORD *)(v12 + 32);
          v23 = v22 - *(_QWORD *)&a3->Data1;
          if ( !v23 )
            v23 = *((_QWORD *)&v29 + 1) - *(_QWORD *)a3->Data4;
        }
        else
        {
          v23 = v22 - *(_QWORD *)&GUID_NULL.Data1;
          v28 = *(_OWORD *)(v12 + 32);
          if ( !v23 )
            v23 = *((_QWORD *)&v28 + 1) - *(_QWORD *)GUID_NULL.Data4;
        }
        if ( !v23 && !*(_DWORD *)(v12 + 24) )
          break;
      }
      if ( ++v13 >= *((_DWORD *)this + 10) )
        goto LABEL_4;
    }
    v26 = (struct CStoryboard *)v12;
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v11 = 0;
  }
LABEL_4:
  if ( !v26 )
  {
    if ( *((_DWORD *)this + 10) > 0xAu )
    {
      v11 = -2147024809;
      goto LABEL_23;
    }
    v14 = CStoryboardFactory::Create(a2, a4, &v26);
    v11 = v14;
    if ( v14 < 0 )
    {
      v25 = 215;
LABEL_40:
      v24 = v14;
LABEL_42:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800B9F5C, 1u, v24, v25);
      goto LABEL_21;
    }
    if ( a3 )
      *((struct _GUID *)v26 + 2) = *a3;
    if ( CStoryboard::IsEnabled(v15) )
    {
      v16 = *((_DWORD *)this + 10);
      v17 = v16 + 1;
      v11 = v16 + 1 < v16 ? 0x80070216 : 0;
      if ( v16 + 1 < v16 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
      }
      else if ( v17 > *((_DWORD *)this + 9) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 8LL, 1LL, &v26);
        v11 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
      }
      else
      {
        v12 = v16;
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v16) = v26;
        *((_DWORD *)this + 10) = v17;
      }
      if ( v11 < 0 )
      {
        v25 = 226;
        v24 = v11;
        goto LABEL_42;
      }
      _InterlockedIncrement((volatile signed __int32 *)v26 + 2);
    }
  }
  if ( v11 < 0 )
    goto LABEL_21;
  if ( CStoryboard::IsEnabled((CStoryboard *)v12) )
  {
    if ( CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v26) )
    {
      v14 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v26 + 64LL))(v26);
      v11 = v14;
      if ( v14 < 0 )
      {
        v25 = 250;
      }
      else
      {
        CStoryboard::SetParentStoryboard(v26, a4);
        v14 = CTransitionVisualController::RemoveTargetsForStoryboard(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
                v26,
                0,
                0);
        v11 = v14;
        if ( v14 < 0 )
        {
          v25 = 254;
        }
        else
        {
          v14 = CAnimationScheduler::_OnBeginAnimationClock(v18, v26, a3, a5);
          v11 = v14;
          if ( v14 >= 0 )
            goto LABEL_21;
          v25 = 257;
        }
      }
      goto LABEL_40;
    }
    CStoryboard::Abandon(v26);
    v11 = -2147467259;
  }
  else
  {
    v11 = -2147024809;
  }
LABEL_21:
  if ( v26 )
  {
    CStoryboard::Release(v26);
    v26 = 0LL;
  }
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
  return (unsigned int)v11;
}
