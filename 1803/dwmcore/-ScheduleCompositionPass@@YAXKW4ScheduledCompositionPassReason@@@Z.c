/*
 * XREFs of ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800C53F0
 * Callers:
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18005FF50 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x180060830 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800609D0 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180088BE0 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180156994 (-TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ScheduleCompositionPass(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( g_pComposition )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pComposition + 69) + 104LL))(
             *((_QWORD *)g_pComposition + 69),
             a1,
             a2);
  return result;
}
