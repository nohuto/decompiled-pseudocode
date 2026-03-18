/*
 * XREFs of ?IncrementFrameCounts@CAnimationTracking@@QEAAX_K0@Z @ 0x180133D8C
 * Callers:
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationTracking::IncrementFrameCounts(CAnimationTracking *this, unsigned __int64 a2, __int64 a3)
{
  __int64 i; // r10
  __int64 v5; // rdx
  unsigned __int64 v6; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
    if ( *(_QWORD *)(v5 + 56) && a2 >= *(_QWORD *)(v5 + 56) )
    {
      ++*(_DWORD *)(v5 + 72);
      if ( *(_QWORD *)(v5 + 88) )
      {
        v6 = a3 - *(_QWORD *)(v5 + 88);
        *(_QWORD *)(v5 + 80) += v6;
        if ( *(_QWORD *)(v5 + 96) > v6 )
          v6 = *(_QWORD *)(v5 + 96);
        *(_QWORD *)(v5 + 96) = v6;
      }
      else
      {
        *(_QWORD *)(v5 + 104) = a3;
      }
      *(_QWORD *)(v5 + 88) = a3;
    }
  }
}
