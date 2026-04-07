/*
 * XREFs of ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180090EA8
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x180090E10 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18002D588 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x18002D824 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18002DFB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030830 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180079920 (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800916D0 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::PreDelayExpired(CScreenRotation *this)
{
  __int64 v2; // rax
  LONG v3; // ecx
  LONG v4; // edx
  CAnimationEngine *v5; // r14
  int v6; // ebx
  int v7; // eax
  int v8; // r9d
  __int64 v9; // rax
  int started; // eax
  char v11; // al
  __int128 *v12; // rdx
  __int128 *v13; // rdx
  unsigned int v15; // [rsp+20h] [rbp-48h]
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+48h] [rbp-20h]
  struct tagSIZE v19; // [rsp+70h] [rbp+8h] BYREF

  *((_DWORD *)this + 84) = (int)*((double *)this + 20);
  v2 = *((_QWORD *)this + 14);
  v16 = 0LL;
  *(_QWORD *)((char *)this + 348) = v2;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0;
  CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)&v19);
  CVisual::SetRotation(this, 0.0);
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 103);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 104);
  if ( v3 < 0 )
    v3 = 0;
  v19.cx = v3;
  if ( v4 < 0 )
    v4 = 0;
  v19.cy = v4;
  CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v19, 0);
  *((_BYTE *)this + 331) = 1;
  v5 = CDesktopManager::AcquireAnimationEngine();
  if ( v5 )
  {
    v19 = (struct tagSIZE)*((_QWORD *)this + 39);
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v16, 8u, 1, &v19);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
    if ( v6 < 0 )
    {
      v15 = 514;
      v8 = v6;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v15);
LABEL_29:
      CAnimationEngine::Release(v5);
      goto LABEL_30;
    }
    v9 = *((_QWORD *)this + 39);
    *(_DWORD *)(v9 + 736) = 76;
    *(_DWORD *)(v9 + 740) = 1;
    started = CAnimationEngine::ScheduleStartAnimation(v5, 76, (__int64)&v16, (unsigned int *)this + 89);
    v6 = started;
    if ( started < 0 )
    {
      v15 = 519;
LABEL_14:
      v8 = started;
      goto LABEL_11;
    }
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(v5, (CScreenRotation *)((char *)this + 280));
    v6 = started;
    if ( started < 0 )
    {
      v15 = 520;
      goto LABEL_14;
    }
    v11 = Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( *((_BYTE *)this + 380) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v12 = (__int128 *)&UdwmHardwareExpression_Animation_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v12 = (__int128 *)&UdwmScreenRotation_Animation_Start;
    }
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, v12);
    v11 = Microsoft_Windows_Dwm_UdwmEnableBits;
LABEL_23:
    if ( *((_BYTE *)this + 380) )
    {
      if ( (v11 & 1) == 0 )
        goto LABEL_29;
      v13 = (__int128 *)&UdwmHardwareExpression_PreDelayAnimation_Start;
    }
    else
    {
      if ( (v11 & 1) == 0 )
        goto LABEL_29;
      v13 = (__int128 *)&UdwmScreenRotation_PreDelayAnimation_Start;
    }
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, v13);
    goto LABEL_29;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x200u);
LABEL_30:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v16);
  return (unsigned int)v6;
}
