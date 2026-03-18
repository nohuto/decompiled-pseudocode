/*
 * XREFs of ?ProcessMouseWheelPointer@CInteractionContextWrapper@@AEAAJPEBUtagPOINTER_INFO@@@Z @ 0x1801D7EB8
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801D79A0 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801D7710 (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessMouseWheelPointer(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2)
{
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  bool v8; // zf
  float v9; // xmm2_4
  int v10; // ebx
  __int128 v11; // xmm6
  __m128 v12; // xmm7
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  _OWORD v15[2]; // [rsp+28h] [rbp-89h] BYREF
  __int128 v16; // [rsp+48h] [rbp-69h]
  __int128 v17; // [rsp+58h] [rbp-59h]
  __int128 v18; // [rsp+68h] [rbp-49h]
  __int128 v19; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v20[24]; // [rsp+88h] [rbp-29h]
  _BYTE v21[40]; // [rsp+A0h] [rbp-11h]

  if ( (*((_DWORD *)a2 + 3) & 0x180000) == 0 )
    return 2147942487LL;
  memset_0(&v19, 0, 0x50uLL);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 18));
  v6 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 15));
  v7 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 14));
  *(_QWORD *)&v20[16] = 0LL;
  v8 = (*((_DWORD *)a2 + 3) & 0x80000) == 0;
  *(_QWORD *)&v19 = 0x100000001LL;
  DWORD2(v19) = 4;
  *(_DWORD *)&v20[12] = 1065353216;
  *(_DWORD *)v20 = _mm_cvtepi32_ps(v6).m128_u32[0];
  v9 = (float)(_mm_cvtepi32_ps(v5).m128_f32[0] * 250.0) / 120.0;
  HIDWORD(v19) = _mm_cvtepi32_ps(v7).m128_u32[0];
  if ( v8 )
  {
    *(_QWORD *)&v20[4] = LODWORD(v9) ^ (unsigned int)_xmm;
    *(_QWORD *)&v21[20] = COERCE_UNSIGNED_INT(v9 * 0.0099999998) ^ (unsigned int)_xmm;
  }
  else
  {
    *(_DWORD *)&v20[4] = 0;
    *(_DWORD *)&v21[20] = 0;
    *(float *)&v20[8] = v9;
    *(float *)&v21[24] = v9 * 0.0099999998;
  }
  *(_QWORD *)&v21[28] = 0LL;
  v10 = *(_DWORD *)&v20[20];
  v11 = *(_OWORD *)&v20[4];
  v12 = (__m128)*(unsigned __int64 *)&v21[20];
  --*((_QWORD *)this + 29);
  *(_OWORD *)v21 = v11;
  *(_DWORD *)&v21[16] = v10;
  *(_DWORD *)&v21[36] = 1;
  CInteractionContextWrapper::InteractionContextCallback(this, (const struct INTERACTION_CONTEXT_OUTPUT *)&v19);
  memset_0(v15, 0, 0x50uLL);
  v19 = v15[0];
  *(_OWORD *)v20 = v15[1];
  *(_QWORD *)&v20[4] = 0LL;
  *(_QWORD *)v21 = *((_QWORD *)&v16 + 1);
  *(_QWORD *)&v20[16] = 0LL;
  *(_OWORD *)&v21[24] = v18;
  v13 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 14));
  *(_OWORD *)&v21[8] = v17;
  v14 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 15));
  ++*((_QWORD *)this + 29);
  *(_QWORD *)&v19 = 0x200000001LL;
  DWORD2(v19) = 4;
  *(_DWORD *)&v20[12] = 1065353216;
  *(_DWORD *)&v21[16] = v10;
  *(_DWORD *)&v21[36] = 1;
  HIDWORD(v19) = _mm_cvtepi32_ps(v13).m128_u32[0];
  *(_DWORD *)v20 = _mm_cvtepi32_ps(v14).m128_u32[0];
  *(_DWORD *)&v21[20] = v12.m128_i32[0];
  *(_DWORD *)&v21[32] = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
  *(_DWORD *)&v21[24] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  *(_DWORD *)&v21[28] = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  *(_OWORD *)v21 = v11;
  CInteractionContextWrapper::InteractionContextCallback(this, (const struct INTERACTION_CONTEXT_OUTPUT *)&v19);
  return 0LL;
}
