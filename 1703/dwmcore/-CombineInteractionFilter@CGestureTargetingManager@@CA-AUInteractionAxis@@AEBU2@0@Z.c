/*
 * XREFs of ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x1800CC054
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1801953E0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CGestureTargetingManager::CombineInteractionFilter(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  char v4; // r9
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  float v8; // [rsp+8h] [rbp-20h]

  v3 = 0;
  if ( *(_BYTE *)a2 || (v4 = 0, *(_BYTE *)a3) )
    v4 = 1;
  *(_BYTE *)a1 = v4;
  if ( *(_BYTE *)(a2 + 1) || *(_BYTE *)(a3 + 1) )
    v3 = 1;
  v5 = (__m128)*(unsigned int *)(a3 + 4);
  v5.m128_f32[0] = v5.m128_f32[0] + *(float *)(a2 + 4);
  v6 = (__m128)*(unsigned int *)(a3 + 8);
  v6.m128_f32[0] = v6.m128_f32[0] + *(float *)(a2 + 8);
  v8 = *(float *)(a3 + 12) + *(float *)(a2 + 12);
  *(_BYTE *)(a1 + 1) = v3;
  *(_QWORD *)(a1 + 4) = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  *(float *)(a1 + 12) = v8;
  return a1;
}
