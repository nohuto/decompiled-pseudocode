/*
 * XREFs of ?GetManipulationVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016CE6C
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182B70 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801835B0 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall CInteractionTracker::GetManipulationVelocity(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __m128 v3; // xmm2
  __int128 v5; // [rsp+80h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 512);
  v3 = 0LL;
  if ( v2 )
  {
    v5 = *(_OWORD *)(v2 + 364);
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v3 = (__m128)DWORD1(v5);
      }
      else if ( a2 == 2 )
      {
        v3 = (__m128)HIDWORD(v5);
      }
    }
    else
    {
      v3 = (__m128)(unsigned int)v5;
    }
    v3.m128_f32[0] = v3.m128_f32[0] * 1000.0;
    if ( a2 != 2 )
      return _mm_xor_ps(v3, (__m128)_xmm);
  }
  return v3;
}
