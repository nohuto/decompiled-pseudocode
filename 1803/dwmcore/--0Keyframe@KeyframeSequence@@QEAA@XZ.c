/*
 * XREFs of ??0Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800CD6D0
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

KeyframeSequence *__fastcall KeyframeSequence::Keyframe::Keyframe(KeyframeSequence::Keyframe *this)
{
  KeyframeSequence *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  return result;
}
