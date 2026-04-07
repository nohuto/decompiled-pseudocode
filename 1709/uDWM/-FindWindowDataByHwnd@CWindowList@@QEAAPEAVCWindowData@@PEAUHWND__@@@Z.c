/*
 * XREFs of ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180025658
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x1800016E4 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180004BFC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180006D9C (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x1800092C4 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x1800092F8 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x1800093C4 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000BDB8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18000F368 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180034B78 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18006DE68 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18007B644 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18007F59C (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180099CA0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CWindowList::FindWindowDataByHwnd(CWindowList *this, HWND a2)
{
  char *v2; // rbx
  struct _RTL_GENERIC_TABLE *v4; // rsi
  _QWORD *v5; // rax
  char *v6; // rcx
  char *i; // rax
  PVOID RestartKey; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RestartKey = 0LL;
  if ( a2 )
  {
    v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
LABEL_4:
    while ( 1 )
    {
      v5 = RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
      if ( !v5 || v2 )
        break;
      v6 = (char *)(v5 + 8);
      for ( i = (char *)v5[8]; i != v6; i = *(char **)i )
      {
        if ( *((HWND *)i + 5) == a2 )
        {
          v2 = i;
          goto LABEL_4;
        }
      }
    }
  }
  return (struct CWindowData *)v2;
}
