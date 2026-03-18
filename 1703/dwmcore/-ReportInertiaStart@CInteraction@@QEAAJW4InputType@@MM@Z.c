/*
 * XREFs of ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801670BC
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::InputTypeToInertiaSourceType @ 0x180166C7C (_anonymous_namespace_--InputTypeToInertiaSourceType.c)
 */

__int64 __fastcall CInteraction::ReportInertiaStart(__int64 a1, int a2, float a3, float a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  const __m128i *v8; // rdi
  __m128 v9; // xmm6
  float v10; // xmm0_4
  __int64 v11; // rcx
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  signed int LastError; // eax
  __int128 v17; // [rsp+38h] [rbp-39h]
  _DWORD v18[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v19; // [rsp+58h] [rbp-19h] BYREF
  int v20; // [rsp+68h] [rbp-9h]
  int v21; // [rsp+6Ch] [rbp-5h]
  int v22; // [rsp+70h] [rbp-1h]
  int v23; // [rsp+74h] [rbp+3h]
  int v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+7Ch] [rbp+Bh]

  v4 = *(_QWORD *)(a1 + 120);
  v5 = 0;
  if ( v4 )
  {
    v8 = *(const __m128i **)(v4 + 8);
    if ( v8 )
    {
      (*(void (__fastcall **)(const __m128i *))(v8->m128i_i64[0] + 8))(v8);
      memset_0(&v19, 0, 0x28uLL);
      *(float *)v18 = a3;
      *(float *)&v18[1] = a4;
      v18[2] = anonymous_namespace_::InputTypeToInertiaSourceType(a2);
      v9 = (__m128)_mm_loadu_si128(v8 + 10);
      LODWORD(v17) = (int)ceilf_0(v9.m128_f32[0]);
      DWORD1(v17) = (int)ceilf_0(_mm_shuffle_ps(v9, v9, 85).m128_f32[0]);
      DWORD2(v17) = (int)ceilf_0(_mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
      v10 = ceilf_0(_mm_shuffle_ps(v9, v9, 255).m128_f32[0]);
      v11 = *(unsigned int *)(a1 + 1312);
      HIDWORD(v17) = (int)v10;
      v20 = *(_DWORD *)(a1 + 296);
      v12 = *(_DWORD *)(a1 + 312);
      v19 = v17;
      v21 = *(_DWORD *)(a1 + 300);
      v23 = *(_DWORD *)(a1 + 316);
      v13 = *(_DWORD *)(a1 + 348);
      v22 = v12;
      v14 = *(_DWORD *)(a1 + 344);
      v25 = v13;
      v24 = v14;
      if ( !(unsigned int)ReportInertia(v11, 5LL, 0LL, v18, &v19) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        else
          v5 = LastError;
      }
      (*(void (__fastcall **)(const __m128i *))(v8->m128i_i64[0] + 16))(v8);
    }
  }
  return v5;
}
