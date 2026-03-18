/*
 * XREFs of ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GAUSSIANBLUREFFECT@@@Z @ 0x1801AAFE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGaussianBlurEffect::ProcessUpdate(CGaussianBlurEffect *this, struct CResourceTable *a2, __m128 *a3)
{
  __int32 v4; // ebx
  __m128 v5; // xmm6

  v4 = a3[1].m128_i32[0];
  v5 = *a3;
  (*(void (__fastcall **)(CGaussianBlurEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 46) = v4;
  *((_DWORD *)this + 45) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v5, 12));
  *((_DWORD *)this + 44) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  (*(void (__fastcall **)(CGaussianBlurEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
