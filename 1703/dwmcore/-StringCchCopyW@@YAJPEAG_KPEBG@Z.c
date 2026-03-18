/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800C6740
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x18004E6B4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180075E2C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x1800B5D5C (-Initialize@CMit@@AEAAJXZ.c)
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800B96A8 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x18012C164 (-ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBU.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18013678C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180137F88 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180187E68 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 *     ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x180191E34 (-Initialize@CDWMInputThread@@AEAAJXZ.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1800C677C (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
