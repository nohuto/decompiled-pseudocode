/*
 * XREFs of ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x180099868
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x180099490 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x180099AF0 (-Start@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180013AB0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180026C60 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180038148 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x180098F74 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenRotation::SetupTimeline(__int64 a1, int a2)
{
  __int64 v4; // r8
  int v5; // ecx
  _QWORD *v6; // r8
  unsigned int v7; // edi
  int v8; // eax
  char v9; // al
  __int128 *v10; // rdx
  CWindowList *v11; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-28h] BYREF
  struct _GUID v14; // [rsp+38h] [rbp-20h] BYREF

  CScreenRotation::CleanupTimeline((CScreenRotation *)a1);
  v14 = (struct _GUID)xmmword_1800B4A98;
  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v4 )
  {
    v5 = 100;
    if ( a2 != 1 )
      v5 = 400;
    CTimelineBase::CTimelineBase(v4, (float)((float)v5 / 1000.0), 0.0, 1.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 296) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x105u);
    return v7;
  }
  *(_DWORD *)(a1 + 304) = a2;
  v8 = CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x109u);
    return v7;
  }
  v9 = *(_BYTE *)(a1 + 380);
  *(_BYTE *)(a1 + 288) = 1;
  if ( a2 == 1 )
  {
    if ( v9 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v10 = (__int128 *)&UdwmHardwareExpression_Delay_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v10 = (__int128 *)&UdwmScreenRotation_Delay_Start;
    }
  }
  else if ( v9 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_23;
    v10 = (__int128 *)&UdwmHardwareExpression_HintDelay_Start;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_23;
    v10 = (__int128 *)&UdwmScreenRotation_HintDelay_Start;
  }
  McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, v10);
LABEL_23:
  QueryPerformanceCounter(&PerformanceCount);
  if ( (int)CWindowList::BeginTelemetryScenario(v11, &v14, PerformanceCount.QuadPart) >= 0 )
    (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 4)
                                                                     + 224LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      &v14,
      a1 | 0xD100000000000000uLL);
  return v7;
}
