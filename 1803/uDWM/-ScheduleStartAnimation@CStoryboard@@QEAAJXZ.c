/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18000A13C
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x18000B3F0 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x180005B54 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x18000980C (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800098A0 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18000DD90 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18000EFD8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180039590 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18009B2D8 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::ScheduleStartAnimation(CStoryboard *this)
{
  CAnimationEngine *v2; // r14
  int v3; // ebx
  int *v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // r15d
  __int64 v7; // r13
  int v8; // eax
  unsigned int v9; // r12d
  unsigned int v10; // eax
  int v11; // eax
  int started; // eax
  __int64 v13; // rdx
  char v14; // al
  __int64 v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+44h] [rbp-Ch]
  unsigned int v21; // [rsp+90h] [rbp+40h]
  int v22; // [rsp+98h] [rbp+48h]
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+A8h] [rbp+58h] BYREF

  v24 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0LL;
  LOBYTE(v21) = 0;
  v3 = -2147467259;
  if ( *((_DWORD *)this + 6) != 2 )
    goto LABEL_28;
  if ( !*((_DWORD *)this + 28) )
  {
    v14 = 1;
    goto LABEL_20;
  }
  v2 = CDesktopManager::AcquireAnimationEngine();
  if ( !v2 )
    goto LABEL_28;
  v4 = (int *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  v19 = 0;
  v5 = 0;
  v6 = 0;
  v20 = 0LL;
  v7 = 0LL;
  v8 = *v4;
  v22 = v8;
  v18 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    v9 = v21;
    while ( 1 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v7) + 40LL);
      v10 = v6 + 1;
      if ( v6 + 1 >= v6 )
        v9 = v6 + 1;
      v3 = v10 < v6 ? 0x80070216 : 0;
      if ( v10 < v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 <= v5 )
      {
        v16 = v6;
        v6 = v9;
        HIDWORD(v20) = v9;
        *(_QWORD *)(v18 + 8 * v16) = v23;
      }
      else
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(&v18, 8LL, 1LL, &v23);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
        v6 = HIDWORD(v20);
      }
      if ( v3 < 0 )
        break;
      v5 = v20;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 28) )
      {
        v8 = v22;
        goto LABEL_16;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, 0x15AFu);
    goto LABEL_19;
  }
LABEL_16:
  started = CAnimationEngine::ScheduleStartAnimation(v2, v8);
  v3 = started;
  if ( started < 0 )
  {
    v17 = 5553;
  }
  else
  {
    *((_DWORD *)this + 6) = 3;
    CStoryboard::_LogStoryboardEvent((unsigned __int64)this, v13);
    if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 104LL))(this) )
      goto LABEL_19;
    started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
    v3 = started;
    if ( started >= 0 )
      goto LABEL_19;
    v17 = 5558;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, started, v17);
LABEL_19:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v18);
  v14 = 0;
LABEL_20:
  if ( v3 >= 0 && !v14 )
  {
    CStoryboard::_NotifyStoryboardState((__int64)this, 3);
    (*(void (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 32LL))(this);
    goto LABEL_23;
  }
LABEL_28:
  CStoryboard::Abandon(this);
LABEL_23:
  if ( v2 )
    CAnimationEngine::Release(v2);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
  return (unsigned int)v3;
}
