/*
 * XREFs of ?Reset@ManipulationData@@QEAAXXZ @ 0x180167F14
 * Callers:
 *     ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180167A20 (--0CManipulation@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x180167D74 (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x180168CBC (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18016BBC4 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationData::Reset(ManipulationData *this)
{
  unsigned __int64 v1; // xmm0_8
  unsigned __int64 v2; // xmm0_8

  v1 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_QWORD *)((char *)this + 12) = v1;
  *(_QWORD *)this = v1;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = 0;
  v2 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  *(_QWORD *)((char *)this + 36) = v2;
  *((_QWORD *)this + 3) = v2;
  *(_QWORD *)((char *)this + 52) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_QWORD *)this + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 11) = 1065353216;
  *((_DWORD *)this + 8) = 1065353216;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 34) = 0;
  *(_QWORD *)((char *)this + 140) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 26) = 1065353216;
  *((_DWORD *)this + 21) = 1065353216;
  *((_DWORD *)this + 16) = 1065353216;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_BYTE *)this + 168) &= 0xF8u;
  *((_BYTE *)this + 168) |= 0x18u;
  *(_QWORD *)((char *)this + 156) = 0LL;
}
