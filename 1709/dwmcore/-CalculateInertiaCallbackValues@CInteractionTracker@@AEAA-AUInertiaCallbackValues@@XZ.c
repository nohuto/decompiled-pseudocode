/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016B210
 * Callers:
 *     ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D804 (-SendPendingCallbacks@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EC8C (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ @ 0x180188C4C (-CanDetermineModifiedRestingValue@CScrollAnimation@@QEBA_NXZ.c)
 *     ?GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ @ 0x180188CD0 (-GetInertiaStartVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ @ 0x180188DD0 (-GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180188DF0 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::CalculateInertiaCallbackValues(CScrollAnimation **a1, __int64 a2)
{
  __m128 v2; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool CanDetermineModifiedRestingValue; // si
  __m128 v8; // xmm6
  CScrollAnimation *v9; // rcx
  CScrollAnimation *v10; // rcx
  __m128 v11; // xmm6
  CScrollAnimation *v12; // rcx
  CScrollAnimation *v13; // rcx
  __m128 v14; // xmm6
  CScrollAnimation *v15; // rcx
  float ModifiedRestingValue; // xmm0_4
  CScrollAnimation *v17; // rcx
  CScrollAnimation *v18; // rcx
  __m128 v19; // xmm4
  int v20; // xmm3_4
  int v21; // xmm2_4

  CanDetermineModifiedRestingValue = 0;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
  {
    v2.m128_f32[0] = CScrollAnimation::GetInertiaStartVelocity(*(CScrollAnimation **)(v6 + 392));
    v8 = v2;
    v2.m128_f32[0] = CScrollAnimation::GetInertiaStartVelocity(a1[50]);
    v9 = a1[48];
    *(_QWORD *)a2 = _mm_unpacklo_ps(v8, v2).m128_u64[0];
    *(_DWORD *)(a2 + 8) = 0;
    v2.m128_f32[0] = CScrollAnimation::GetInertiaStartVelocity(v9);
    v10 = a1[49];
    *(_DWORD *)(a2 + 12) = v2.m128_i32[0];
    v2.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(v10);
    v11 = v2;
    v2.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(a1[50]);
    v12 = a1[48];
    *(_QWORD *)(a2 + 16) = _mm_unpacklo_ps(v11, v2).m128_u64[0];
    *(_DWORD *)(a2 + 24) = 0;
    v2.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(v12);
    v13 = a1[49];
    *(_DWORD *)(a2 + 28) = v2.m128_i32[0];
    v2.m128_f32[0] = CScrollAnimation::GetModifiedRestingValue(v13);
    v14 = v2;
    v2.m128_f32[0] = CScrollAnimation::GetModifiedRestingValue(a1[50]);
    v15 = a1[48];
    *(_QWORD *)(a2 + 32) = _mm_unpacklo_ps(v14, v2).m128_u64[0];
    *(_DWORD *)(a2 + 40) = 0;
    ModifiedRestingValue = CScrollAnimation::GetModifiedRestingValue(v15);
    v17 = a1[49];
    *(float *)(a2 + 48) = ModifiedRestingValue;
    if ( CScrollAnimation::CanDetermineModifiedRestingValue(v17) )
      CanDetermineModifiedRestingValue = CScrollAnimation::CanDetermineModifiedRestingValue(a1[50]);
    v18 = a1[48];
    *(_BYTE *)(a2 + 44) = CanDetermineModifiedRestingValue;
    *(_BYTE *)(a2 + 52) = CScrollAnimation::CanDetermineModifiedRestingValue(v18);
  }
  else
  {
    v19 = (__m128)*(unsigned int *)(v6 + 68);
    v20 = *(_DWORD *)(v6 + 72);
    v21 = *(_DWORD *)(v6 + 112);
    *(_QWORD *)(v5 + 32) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 64), v19).m128_u64[0];
    *(_QWORD *)(v5 + 16) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 64), v19).m128_u64[0];
    *(_DWORD *)(v5 + 40) = v20;
    *(_DWORD *)(v5 + 24) = v20;
    *(_QWORD *)v5 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 48) = v21;
    *(_DWORD *)(v5 + 28) = v21;
    *(_BYTE *)(v5 + 44) = 0;
    *(_BYTE *)(v5 + 52) = 0;
    *(_DWORD *)(v5 + 12) = 0;
  }
  return a2;
}
