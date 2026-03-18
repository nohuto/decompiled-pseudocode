/*
 * XREFs of ?ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TURBULENCEEFFECT@@@Z @ 0x1801ABC74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTurbulenceEffect::ProcessUpdate(
        CTurbulenceEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_TURBULENCEEFFECT *a3)
{
  __m128 v4; // xmm6
  __m128 v5; // xmm7
  __m128i v6; // xmm8

  v4 = *(__m128 *)a3;
  v5 = *((__m128 *)a3 + 1);
  v6 = *((__m128i *)a3 + 2);
  (*(void (__fastcall **)(CTurbulenceEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 46) = v5.m128_i32[0];
  *((_DWORD *)this + 44) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
  *((_DWORD *)this + 47) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  *((_DWORD *)this + 48) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  *((_DWORD *)this + 50) = _mm_cvtsi128_si32(v6);
  *((_DWORD *)this + 51) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
  *((_DWORD *)this + 45) = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  *((_DWORD *)this + 49) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  *((_DWORD *)this + 52) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  *((_DWORD *)this + 53) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 12));
  (*(void (__fastcall **)(CTurbulenceEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
