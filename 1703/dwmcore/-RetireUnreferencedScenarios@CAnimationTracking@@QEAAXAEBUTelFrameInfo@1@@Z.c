/*
 * XREFs of ?RetireUnreferencedScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x180133DE4
 * Callers:
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B9C94 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 */

void __fastcall CAnimationTracking::RetireUnreferencedScenarios(
        CAnimationTracking *this,
        const struct CAnimationTracking::TelFrameInfo *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rax

  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 6) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v2) + 64LL);
    if ( v5 && *((_QWORD *)a2 + 1) >= v5 )
      CAnimationTracking::StopAnalyzingAnimationScenario(this, v2, a2);
    else
      v2 = (unsigned int)(v2 + 1);
  }
}
