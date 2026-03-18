/*
 * XREFs of ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800CD6B0
 * Callers:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ @ 0x180040920 (-InternalRelease@-$ComPtr@VKeyframeInterpolation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall KeyframeSequence::Keyframe::~Keyframe(KeyframeInterpolation **this)
{
  Microsoft::WRL::ComPtr<KeyframeInterpolation>::InternalRelease(this + 2);
  Microsoft::WRL::ComPtr<KeyframeValue>::InternalRelease(this + 1);
}
