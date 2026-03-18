/*
 * XREFs of ?RecordGlitch@CAnimationTracking@@QEAAX_KI@Z @ 0x1800B9664
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180065DC0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationTracking::RecordGlitch(CAnimationTracking *this, unsigned __int64 a2, unsigned int a3)
{
  __int64 i; // r10
  __int64 v5; // rdx
  unsigned int v6; // eax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
    if ( *(_QWORD *)(v5 + 56) && a2 > *(_QWORD *)(v5 + 56) )
    {
      ++*(_DWORD *)(v5 + 40);
      v6 = a3;
      *(_DWORD *)(v5 + 32) += a3;
      if ( *(_DWORD *)(v5 + 36) > a3 )
        v6 = *(_DWORD *)(v5 + 36);
      *(_DWORD *)(v5 + 36) = v6;
    }
  }
}
