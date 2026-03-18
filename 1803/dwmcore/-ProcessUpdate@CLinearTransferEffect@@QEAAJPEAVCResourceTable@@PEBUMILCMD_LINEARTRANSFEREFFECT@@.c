/*
 * XREFs of ?ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARTRANSFEREFFECT@@@Z @ 0x1801AB4B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearTransferEffect::ProcessUpdate(
        CLinearTransferEffect *this,
        struct CResourceTable *a2,
        __m128 *a3)
{
  __int32 v4; // ebx
  __m128 v5; // xmm6
  __m128 v6; // xmm7
  __m128 v7; // xmm8
  unsigned __int64 v9; // [rsp+50h] [rbp-48h]

  v4 = a3[3].m128_i32[2];
  v5 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v9 = a3[3].m128_u64[0];
  (*(void (__fastcall **)(CLinearTransferEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 44) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  *((_DWORD *)this + 47) = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  *((_DWORD *)this + 51) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  *((_DWORD *)this + 52) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v7, 8));
  *((_DWORD *)this + 50) = v7.m128_i32[0];
  *((_DWORD *)this + 46) = _mm_cvtsi128_si32((__m128i)v6);
  *((_DWORD *)this + 54) = v9;
  *((_DWORD *)this + 45) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
  *((_DWORD *)this + 48) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  *((_DWORD *)this + 53) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
  *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v6, 12));
  *((_DWORD *)this + 55) = HIDWORD(v9);
  *((_DWORD *)this + 56) = v4;
  (*(void (__fastcall **)(CLinearTransferEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
