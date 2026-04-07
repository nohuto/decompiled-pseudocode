/*
 * XREFs of ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180005354
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800043CC (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000553C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x1800055EC (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180005680 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x18000DDB8 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800123A4 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180012B30 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800170B0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStoryboard::ScheduleStartAnimation(CStoryboard *this)
{
  CAnimationEngine *v2; // r14
  int v3; // ebx
  int *v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // r15d
  __int64 v7; // r12
  int v8; // eax
  unsigned int v9; // r13d
  unsigned int v10; // eax
  int v11; // eax
  int started; // eax
  char v13; // al
  __int64 v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+44h] [rbp-Ch]
  unsigned int v20; // [rsp+90h] [rbp+40h]
  int v21; // [rsp+98h] [rbp+48h]
  __int64 v22; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+A8h] [rbp+58h] BYREF

  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0LL;
  LOBYTE(v20) = 0;
  v3 = -2147467259;
  if ( *((_DWORD *)this + 6) != 2 )
    goto LABEL_29;
  if ( !*((_DWORD *)this + 28) )
  {
    v13 = 1;
    goto LABEL_19;
  }
  v2 = CDesktopManager::AcquireAnimationEngine();
  if ( !v2 )
    goto LABEL_29;
  v4 = (int *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  v18 = 0;
  v5 = 0;
  v6 = 0;
  v19 = 0LL;
  v7 = 0LL;
  v8 = *v4;
  v21 = v8;
  v17 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    v9 = v20;
    while ( 1 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v7) + 40LL);
      v10 = v6 + 1;
      if ( v6 + 1 >= v6 )
        v9 = v6 + 1;
      v3 = v10 < v6 ? 0x80070216 : 0;
      if ( v10 < v6 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 <= v5 )
      {
        v15 = v6;
        v6 = v9;
        HIDWORD(v19) = v9;
        *(_QWORD *)(v17 + 8 * v15) = v22;
      }
      else
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(&v17, 8LL, 1LL, &v22);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
        v6 = HIDWORD(v19);
      }
      if ( v3 < 0 )
        break;
      v5 = v19;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)this + 28) )
      {
        v8 = v21;
        goto LABEL_16;
      }
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v3, 0x1572u);
    goto LABEL_18;
  }
LABEL_16:
  started = CAnimationEngine::ScheduleStartAnimation(v2, v8);
  v3 = started;
  if ( started < 0 )
  {
    v16 = 5492;
  }
  else
  {
    *((_DWORD *)this + 6) = 3;
    CStoryboard::_LogStoryboardEvent(this);
    if ( !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 104LL))(this) )
      goto LABEL_18;
    started = CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
    v3 = started;
    if ( started >= 0 )
      goto LABEL_18;
    v16 = 5497;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, started, v16);
LABEL_18:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v17);
  v13 = 0;
LABEL_19:
  if ( v3 >= 0 && !v13 )
  {
    CStoryboard::_NotifyStoryboardState(this, 3LL);
    (*(void (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 32LL))(this);
    goto LABEL_22;
  }
LABEL_29:
  CStoryboard::Abandon(this);
LABEL_22:
  if ( v2 )
    CAnimationEngine::Release(v2);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return (unsigned int)v3;
}
