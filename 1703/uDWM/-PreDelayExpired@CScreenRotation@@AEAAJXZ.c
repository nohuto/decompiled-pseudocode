/*
 * XREFs of ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180094988
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800948F0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012174 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800123A4 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180012B30 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800170B0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180081E50 (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800951C0 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::PreDelayExpired(CScreenRotation *this)
{
  __int64 v2; // rax
  LONG v3; // r8d
  LONG v4; // ecx
  CAnimationEngine *v5; // r14
  int v6; // ebx
  int v7; // eax
  int v8; // r9d
  __int64 v9; // rax
  int started; // eax
  __int64 v11; // rcx
  char v12; // al
  void *v13; // rdx
  void *v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-38h]
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]
  int v19; // [rsp+48h] [rbp-10h]
  struct tagSIZE v20; // [rsp+60h] [rbp+8h] BYREF

  *((_DWORD *)this + 84) = (int)*((double *)this + 20);
  v2 = *((_QWORD *)this + 14);
  v17 = 0LL;
  *(_QWORD *)((char *)this + 348) = v2;
  v20 = 0LL;
  v18 = 0LL;
  v19 = 0;
  CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)&v20);
  CVisual::SetRotation(this, 0.0);
  v3 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 91);
  if ( v3 < 0 )
    v3 = 0;
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 92);
  v20.cx = v3;
  if ( v4 < 0 )
    v4 = 0;
  v20.cy = v4;
  CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v20, 0);
  *((_BYTE *)this + 331) = 1;
  v5 = CDesktopManager::AcquireAnimationEngine();
  if ( v5 )
  {
    v20 = (struct tagSIZE)*((_QWORD *)this + 39);
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v17, 8u, 1, &v20);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xC0u);
    if ( v6 < 0 )
    {
      v16 = 514;
      v8 = v6;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, v16);
LABEL_29:
      CAnimationEngine::Release(v5);
      goto LABEL_30;
    }
    v9 = *((_QWORD *)this + 39);
    *(_DWORD *)(v9 + 736) = 76;
    *(_DWORD *)(v9 + 740) = 1;
    started = CAnimationEngine::ScheduleStartAnimation(v5, 76, (__int64)&v17, (unsigned int *)this + 89);
    v6 = started;
    if ( started < 0 )
    {
      v16 = 519;
LABEL_14:
      v8 = started;
      goto LABEL_11;
    }
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(v5, (CScreenRotation *)((char *)this + 280));
    v6 = started;
    if ( started < 0 )
    {
      v16 = 520;
      goto LABEL_14;
    }
    v12 = Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( *((_BYTE *)this + 380) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v13 = &UdwmHardwareExpression_Animation_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v13 = &UdwmScreenRotation_Animation_Start;
    }
    TemplateEventDescriptor(v11, (__int64)v13);
    v12 = Microsoft_Windows_Dwm_UdwmEnableBits;
LABEL_23:
    if ( *((_BYTE *)this + 380) )
    {
      if ( (v12 & 1) == 0 )
        goto LABEL_29;
      v14 = &UdwmHardwareExpression_PreDelayAnimation_Start;
    }
    else
    {
      if ( (v12 & 1) == 0 )
        goto LABEL_29;
      v14 = &UdwmScreenRotation_PreDelayAnimation_Start;
    }
    TemplateEventDescriptor(v11, (__int64)v14);
    goto LABEL_29;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x200u);
LABEL_30:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v17);
  return (unsigned int)v6;
}
