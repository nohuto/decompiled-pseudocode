/*
 * XREFs of ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x180090CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180090AA0 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800910CC (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800913C0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::OnAnimationComplete(CScreenRotation *this, int a2)
{
  unsigned int v4; // edi
  __int128 *v5; // rdx
  CScreenRotation *v6; // rcx
  int v7; // eax
  int v8; // eax
  __int128 *v9; // rdx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 != *((_DWORD *)this + 19) )
  {
    if ( a2 != *((_DWORD *)this + 20) )
      goto LABEL_22;
    if ( *((_BYTE *)this + 100) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v9 = (__int128 *)&UdwmHardwareExpression_PostDelayAnimation_Stop;
LABEL_20:
        McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, v9);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v9 = (__int128 *)&UdwmScreenRotation_PostDelayAnimation_Stop;
      goto LABEL_20;
    }
    CScreenRotation::Stop((CScreenRotation *)((char *)this - 280), 0);
    goto LABEL_22;
  }
  *((_DWORD *)this + 19) = -1;
  if ( *((_BYTE *)this + 100) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v5 = (__int128 *)&UdwmHardwareExpression_PreDelayAnimation_Stop;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v5 = (__int128 *)&UdwmScreenRotation_PreDelayAnimation_Stop;
  }
  McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, v5);
LABEL_8:
  v6 = (CScreenRotation *)((char *)this - 280);
  if ( *((_BYTE *)this + 49) )
  {
    v7 = CScreenRotation::MidDelayExpired(v6);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x193u);
  }
  else
  {
    v8 = CScreenRotation::SetupTimeline(v6, 2LL);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x197u);
  }
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
