/*
 * XREFs of ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x180098F74
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800995B0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x180099868 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180099A30 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x180099AF0 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180099B58 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037048 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 */

void __fastcall CScreenRotation::CleanupTimeline(CScreenRotation *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al
  char v5; // al
  __int128 *v6; // rdx

  if ( *((_BYTE *)this + 288) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v2 = *((_QWORD *)this + 37);
    if ( v2 )
    {
      v3 = (*(_DWORD *)(v2 + 8))-- == 1;
      v4 = CDesktopManager::s_fTimelineDirty;
      if ( v3 )
        v4 = 1;
      *((_QWORD *)this + 37) = 0LL;
      CDesktopManager::s_fTimelineDirty = v4;
    }
    v5 = *((_BYTE *)this + 380);
    *((_BYTE *)this + 288) = 0;
    if ( *((_DWORD *)this + 76) == 1 )
    {
      if ( v5 )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          v6 = (__int128 *)&UdwmHardwareExpression_Delay_Stop;
LABEL_17:
          McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, v6);
        }
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v6 = (__int128 *)&UdwmScreenRotation_Delay_Stop;
        goto LABEL_17;
      }
    }
    else if ( v5 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v6 = (__int128 *)&UdwmHardwareExpression_HintDelay_Stop;
        goto LABEL_17;
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v6 = (__int128 *)&UdwmScreenRotation_HintDelay_Stop;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(_QWORD, __int128 *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 4)
                                                                 + 232LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      &xmmword_1800B4A98,
      (unsigned __int64)this | 0xD100000000000000uLL);
    *((_DWORD *)this + 76) = 0;
  }
}
