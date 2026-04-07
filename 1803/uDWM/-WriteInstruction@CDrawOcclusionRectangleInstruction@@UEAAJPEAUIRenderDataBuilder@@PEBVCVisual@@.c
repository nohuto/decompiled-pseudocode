/*
 * XREFs of ?WriteInstruction@CDrawOcclusionRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800151C0
 * Callers:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x180017FB0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::WriteInstruction(
        CDrawOcclusionRectangleInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  float v10; // xmm1_4
  __m128i v12; // xmm1
  float v13; // [rsp+20h] [rbp-28h] BYREF
  float v14; // [rsp+24h] [rbp-24h]
  float v15; // [rsp+28h] [rbp-20h]
  float v16; // [rsp+2Ch] [rbp-1Ch]

  v5 = *((_DWORD *)this + 8);
  if ( *((_DWORD *)this + 10) <= v5 || *((_DWORD *)this + 11) <= *((_DWORD *)this + 9) )
  {
    v6 = 0;
    v7 = 0;
    v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
    v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
    if ( *((_DWORD *)a3 + 30) - *((_DWORD *)this + 5) - *((_DWORD *)this + 4) >= 0 )
      v7 = *((_DWORD *)a3 + 30) - *((_DWORD *)this + 5) - *((_DWORD *)this + 4);
    LODWORD(v10) = _mm_cvtepi32_ps(v8).m128_u32[0];
    if ( *((_DWORD *)a3 + 31) - *((_DWORD *)this + 7) - *((_DWORD *)this + 6) >= 0 )
      v6 = *((_DWORD *)a3 + 31) - *((_DWORD *)this + 7) - *((_DWORD *)this + 6);
    v13 = v10;
    v14 = _mm_cvtepi32_ps(v9).m128_f32[0];
    v15 = (float)v7 + v10;
    v16 = (float)v6 + v14;
  }
  else
  {
    v14 = (float)*((int *)this + 9);
    v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 11));
    v13 = (float)v5;
    v15 = (float)*((int *)this + 10);
    LODWORD(v16) = _mm_cvtepi32_ps(v12).m128_u32[0];
  }
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, float *))(*(_QWORD *)a2 + 64LL))(a2, &v13);
}
