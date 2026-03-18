/*
 * XREFs of ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800BB1E0
 * Callers:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006A48C (-InternalRelease@-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall KeyframeSequence::Keyframe::~Keyframe(KeyframeInterpolation **this)
{
  Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(this + 2);
  Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(this + 1);
}
