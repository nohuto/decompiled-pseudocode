/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180090AA0
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x180090CF0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x180090E10 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180091298 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18002D588 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18002D824 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18002DFB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030830 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800908C0 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
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
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rax
  int started; // eax
  __int128 *v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-10h]
  unsigned int v19; // [rsp+44h] [rbp-Ch]
  unsigned int v20; // [rsp+48h] [rbp-8h]
  __int64 v21; // [rsp+78h] [rbp+28h] BYREF

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0LL;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual(this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LiveDesktopVisual, 0x1D2u);
    goto LABEL_34;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v21 = *((_QWORD *)this + 39);
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8u, 1, &v21);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC0u);
    if ( v3 >= 0 )
    {
      v7 = *((_QWORD *)this + 39);
      v8 = v20;
      *(_DWORD *)(v7 + 736) = 76;
      *(_DWORD *)(v7 + 740) = 2;
      v21 = *((_QWORD *)this + 40);
      v9 = v8 + 1;
      v10 = v21;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v10 = v8 + 1;
      v3 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v9 >= (unsigned int)v8 )
      {
        if ( v10 > v19 )
        {
          v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8u, 1, &v21);
          v3 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
        }
        else
        {
          v20 = v10;
          *(_QWORD *)(v17 + 8 * v8) = v21;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      if ( v3 >= 0 )
      {
        v12 = *((_QWORD *)this + 40);
        *(_DWORD *)(v12 + 736) = 76;
        *(_DWORD *)(v12 + 740) = 3;
        started = CAnimationEngine::ScheduleStartAnimation(v4, 76, (__int64)&v17, (unsigned int *)this + 90);
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
                goto LABEL_33;
              v14 = (__int128 *)&UdwmHardwareExpression_PostDelayAnimation_Start;
            }
            else
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
                goto LABEL_33;
              v14 = (__int128 *)&UdwmScreenRotation_PostDelayAnimation_Start;
            }
            McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, v14);
            goto LABEL_33;
          }
          v16 = 479;
        }
        else
        {
          v16 = 478;
        }
        v6 = started;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v16);
LABEL_33:
        CAnimationEngine::Release(v4);
        goto LABEL_34;
      }
      v16 = 473;
    }
    else
    {
      v16 = 470;
    }
    v6 = v3;
    goto LABEL_11;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1D4u);
LABEL_34:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v17);
  return (unsigned int)v3;
}
