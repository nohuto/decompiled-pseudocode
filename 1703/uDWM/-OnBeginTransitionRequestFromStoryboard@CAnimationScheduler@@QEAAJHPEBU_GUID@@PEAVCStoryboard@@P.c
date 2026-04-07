/*
 * XREFs of ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180004D68
 * Callers:
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180006634 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180096DE0 (-OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180003024 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z @ 0x1800045C0 (-_ShouldContinueStoryboardSetup@CAnimationScheduler@@AEAA_NPEAVCStoryboard@@@Z.c)
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x180004F64 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180005218 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?IsEnabled@CStoryboard@@QEAA_NXZ @ 0x18000523C (-IsEnabled@CStoryboard@@QEAA_NXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000529C (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000553C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009E40 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ @ 0x18001049C (-_RecycleAbandonedStoryboards@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
 */

__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct CStoryboard *a4,
        struct _GUID *a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int64 v11; // rcx
  int v12; // eax
  CStoryboard *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // eax
  CAnimationScheduler *v16; // rcx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-58h]
  struct CStoryboard *v25; // [rsp+30h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+38h] [rbp-40h] BYREF
  __int128 v27; // [rsp+40h] [rbp-38h]
  __int128 v28; // [rsp+50h] [rbp-28h]

  v26 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v9, &UdwmSystemAnimation_BeginTransitionRequest, a2);
  v25 = 0LL;
  v10 = -2147467259;
  CAnimationScheduler::_RecycleAbandonedStoryboards(this);
  v11 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v19 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v20 = *(_QWORD *)(v19 + 8LL * (unsigned int)v11);
      if ( *(_DWORD *)(v20 + 72) == a2 )
      {
        v21 = *(_QWORD *)(v20 + 32);
        if ( a3 )
        {
          v28 = *(_OWORD *)(v20 + 32);
          v22 = v21 - *(_QWORD *)&a3->Data1;
          if ( !v22 )
            v22 = *((_QWORD *)&v28 + 1) - *(_QWORD *)a3->Data4;
        }
        else
        {
          v22 = v21 - *(_QWORD *)&GUID_NULL.Data1;
          v27 = *(_OWORD *)(v20 + 32);
          if ( !v22 )
            v22 = *((_QWORD *)&v27 + 1) - *(_QWORD *)GUID_NULL.Data4;
        }
        if ( !v22 && !*(_DWORD *)(v20 + 24) )
          break;
      }
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *((_DWORD *)this + 10) )
        goto LABEL_4;
    }
    v11 = *(_QWORD *)(v19 + 8LL * (unsigned int)v11);
    v25 = (struct CStoryboard *)v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v10 = 0;
  }
LABEL_4:
  if ( !v25 )
  {
    if ( *((_DWORD *)this + 10) > 0xAu )
    {
      v10 = -2147024809;
      goto LABEL_25;
    }
    v12 = CStoryboardFactory::Create(a2, a4, &v25);
    v10 = v12;
    if ( v12 < 0 )
    {
      v24 = 214;
LABEL_42:
      v23 = v12;
LABEL_44:
      MilInstrumentationCheckHR(0x14u, &dword_1800B0AB8, 1u, v23, v24);
      goto LABEL_23;
    }
    if ( a3 )
      *((struct _GUID *)v25 + 2) = *a3;
    if ( CStoryboard::IsEnabled(v13) )
    {
      v11 = *((unsigned int *)this + 10);
      v14 = (unsigned int)v25;
      v15 = v11 + 1;
      if ( (int)v11 + 1 >= (unsigned int)v11 )
        v14 = v11 + 1;
      v10 = v15 < (unsigned int)v11 ? 0x80070216 : 0;
      if ( v15 < (unsigned int)v11 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB5u);
      }
      else if ( v14 > *((_DWORD *)this + 9) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 8LL, 1LL, &v25);
        v10 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v11) = v25;
        *((_DWORD *)this + 10) = v14;
      }
      if ( v10 < 0 )
      {
        v24 = 225;
        v23 = v10;
        goto LABEL_44;
      }
      _InterlockedIncrement((volatile signed __int32 *)v25 + 2);
    }
  }
  if ( v10 < 0 )
    goto LABEL_23;
  if ( CStoryboard::IsEnabled((CStoryboard *)v11) )
  {
    if ( CAnimationScheduler::_ShouldContinueStoryboardSetup(this, v25) )
    {
      v12 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)v25 + 64LL))(v25);
      v10 = v12;
      if ( v12 < 0 )
      {
        v24 = 249;
      }
      else
      {
        CStoryboard::SetParentStoryboard(v25, a4);
        v12 = CTransitionVisualController::RemoveTargetsForStoryboard(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
                v25,
                0,
                0);
        v10 = v12;
        if ( v12 < 0 )
        {
          v24 = 253;
        }
        else
        {
          v12 = CAnimationScheduler::_OnBeginAnimationClock(v16, v25, a3, a5);
          v10 = v12;
          if ( v12 >= 0 )
            goto LABEL_23;
          v24 = 256;
        }
      }
      goto LABEL_42;
    }
    CStoryboard::Abandon(v25);
    v10 = -2147467259;
  }
  else
  {
    v10 = -2147024809;
  }
LABEL_23:
  if ( v25 )
  {
    CStoryboard::Release(v25);
    v25 = 0LL;
  }
LABEL_25:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v26);
  return (unsigned int)v10;
}
