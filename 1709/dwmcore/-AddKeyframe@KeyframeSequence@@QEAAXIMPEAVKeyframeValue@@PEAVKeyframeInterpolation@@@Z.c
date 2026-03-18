/*
 * XREFs of ?AddKeyframe@KeyframeSequence@@QEAAXIMPEAVKeyframeValue@@PEAVKeyframeInterpolation@@@Z @ 0x1800A6BBC
 * Callers:
 *     ?SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800A48AC (-SetKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??4?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z @ 0x18006A4BC (--4-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeInterpolation@@@Z.c)
 *     ??4?$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z @ 0x180092E08 (--4-$ComPtr@VKeyframeValue@@@WRL@Microsoft@@QEAAAEAV012@PEAVKeyframeValue@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall KeyframeSequence::AddKeyframe(
        KeyframeSequence *this,
        unsigned int a2,
        double a3,
        struct KeyframeValue *a4,
        struct KeyframeInterpolation *a5)
{
  int v6; // ecx
  __int64 v7; // rbx
  int v8; // ecx
  __m128 v9; // rt1
  float v10; // [rsp+38h] [rbp+10h]

  *(float *)&a3 = *(float *)&a3 * 1000.0;
  if ( (LODWORD(a3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v8 = (int)*(float *)&a3;
    *(float *)&a3 = (float)(int)*(float *)&a3 - *(float *)&a3;
    v9.m128_f32[0] = FLOAT_N0_5;
    v6 = v8 - _mm_cmple_ss(*(__m128 *)&a3, v9).m128_u32[0];
  }
  else
  {
    v10 = *(float *)&a3 + 6291456.25;
    v6 = (int)(LODWORD(v10) << 10) >> 11;
  }
  v7 = 3LL * a2;
  *(_DWORD *)(*((_QWORD *)this + 12) + 24LL * a2) = v6;
  Microsoft::WRL::ComPtr<KeyframeValue>::operator=((KeyframeValue **)(*((_QWORD *)this + 12) + 8LL + 24LL * a2), a4);
  Microsoft::WRL::ComPtr<KeyframeInterpolation>::operator=(
    (KeyframeInterpolation **)(*((_QWORD *)this + 12) + 8 * (v7 + 2)),
    a5);
  *((_BYTE *)this + 132) |= 4u;
}
