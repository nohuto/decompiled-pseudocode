/*
 * XREFs of IsShellWndManagementBehaviorEnabled @ 0x1C009690C
 * Callers:
 *     xxxDesktopRecalc @ 0x1C00494C8 (xxxDesktopRecalc.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     IsShellParticipatesInSizing @ 0x1C00938B0 (IsShellParticipatesInSizing.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0096704 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01DCEBC (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxArrangeWindow @ 0x1C01DD468 (xxxArrangeWindow.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F8220 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellWndManagementBehaviorEnabled(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *(_QWORD *)(a1 + 328) )
    return (a2 & *(_DWORD *)(a1 + 336)) != 0;
  return v2;
}
