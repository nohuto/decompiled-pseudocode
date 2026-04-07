/*
 * XREFs of ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180013E00
 * Callers:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800152B0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::WriteInstruction(
        CDrawOcclusionRectangleInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __m128i v5; // xmm1
  int v6; // edx
  __m128i v7; // xmm2
  int v8; // eax
  int v9; // ecx
  float v10; // xmm1_4
  float v12; // xmm1_4
  __m128i v13; // xmm0
  float v14; // xmm1_4
  float v15; // [rsp+20h] [rbp-28h] BYREF
  float v16; // [rsp+24h] [rbp-24h]
  float v17; // [rsp+28h] [rbp-20h]
  float v18; // [rsp+2Ch] [rbp-1Ch]

  if ( *((_DWORD *)this + 10) <= *((_DWORD *)this + 8) || *((_DWORD *)this + 11) <= *((_DWORD *)this + 9) )
  {
    v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
    v6 = 0;
    v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
    v8 = 0;
    v9 = *((_DWORD *)a3 + 30) - *((_DWORD *)this + 5) - *((_DWORD *)this + 4);
    LODWORD(v10) = _mm_cvtepi32_ps(v5).m128_u32[0];
    if ( v9 >= 0 )
      v8 = v9;
    if ( *((_DWORD *)a3 + 31) - *((_DWORD *)this + 7) - *((_DWORD *)this + 6) >= 0 )
      v6 = *((_DWORD *)a3 + 31) - *((_DWORD *)this + 7) - *((_DWORD *)this + 6);
    v15 = v10;
    v16 = _mm_cvtepi32_ps(v7).m128_f32[0];
    v17 = (float)v8 + v10;
    v18 = (float)v6 + v16;
  }
  else
  {
    v12 = (float)*((int *)this + 9);
    v15 = (float)*((int *)this + 8);
    v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 10));
    v16 = v12;
    v14 = (float)*((int *)this + 11);
    LODWORD(v17) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v18 = v14;
  }
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, float *))(*(_QWORD *)a2 + 64LL))(a2, &v15);
}
