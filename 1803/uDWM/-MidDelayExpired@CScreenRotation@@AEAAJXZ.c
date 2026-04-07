/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180099244
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x180099490 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800995B0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180099A30 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18000DD90 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18000ED3C (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18000EFD8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180039590 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x18009906C (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::MidDelayExpired(CScreenRotation *this)
{
  int LiveDesktopVisual; // eax
  int v3; // ebx
  CAnimationEngine *v4; // r14
  int v5; // eax
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  int started; // eax
  __int128 *v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-30h]
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  unsigned int v17; // [rsp+44h] [rbp-Ch]
  unsigned int v18; // [rsp+48h] [rbp-8h]
  __int64 v19; // [rsp+78h] [rbp+28h] BYREF

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v15 = 0LL;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual(this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x177u);
    goto LABEL_32;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v19 = *((_QWORD *)this + 39);
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v15, 8, 1, &v19);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
    if ( v3 >= 0 )
    {
      v7 = *((_QWORD *)this + 39);
      *(_DWORD *)(v7 + 736) = 76;
      *(_DWORD *)(v7 + 740) = 2;
      v19 = *((_QWORD *)this + 40);
      v3 = v18 + 1 < v18 ? 0x80070216 : 0;
      if ( v18 + 1 >= v18 )
      {
        if ( v18 + 1 > v17 )
        {
          v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v15, 8, 1, &v19);
          v3 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC0u);
        }
        else
        {
          v8 = v18++;
          *(_QWORD *)(v15 + 8 * v8) = v19;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xB5u);
      }
      if ( v3 >= 0 )
      {
        v10 = *((_QWORD *)this + 40);
        *(_DWORD *)(v10 + 736) = 76;
        *(_DWORD *)(v10 + 740) = 3;
        started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v15, (unsigned int *)this + 90);
        v3 = started;
        if ( started >= 0 )
        {
          started = CAnimationEngine::RegisterForAnimationCompleteNotification(
                      v4,
                      (CScreenRotation *)((char *)this + 280));
          v3 = started;
          if ( started >= 0 )
          {
            if ( *((_BYTE *)this + 380) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
                goto LABEL_31;
              v12 = (__int128 *)&UdwmHardwareExpression_PostDelayAnimation_Start;
            }
            else
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
                goto LABEL_31;
              v12 = (__int128 *)&UdwmScreenRotation_PostDelayAnimation_Start;
            }
            McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, v12);
            goto LABEL_31;
          }
          v14 = 388;
        }
        else
        {
          v14 = 387;
        }
        v6 = started;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v14);
LABEL_31:
        CAnimationEngine::Release(v4);
        goto LABEL_32;
      }
      v14 = 382;
    }
    else
    {
      v14 = 379;
    }
    v6 = v3;
    goto LABEL_11;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x179u);
LABEL_32:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v15);
  return (unsigned int)v3;
}
