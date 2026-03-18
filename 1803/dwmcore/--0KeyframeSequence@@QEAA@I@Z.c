/*
 * XREFs of ??0KeyframeSequence@@QEAA@I@Z @ 0x18003EF08
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18003E7DC (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

KeyframeSequence *__fastcall KeyframeSequence::KeyframeSequence(KeyframeSequence *this, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rax
  bool v6; // cf
  SIZE_T v7; // rax
  _QWORD *v8; // rax
  KeyframeSequence *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  memset_0(this, 0, 0x40uLL);
  v4 = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 18;
  *((_BYTE *)this + 76) = 0;
  *((_BYTE *)this + 140) &= ~0x10u;
  *((_DWORD *)this + 28) = v2;
  *((_DWORD *)this + 34) = 1065353216;
  if ( (unsigned int)v2 < 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v5 = 24 * v2;
  if ( !is_mul_ok(v2, 0x18uLL) )
    v5 = -1LL;
  v6 = __CFADD__(v5, 8LL);
  v7 = v5 + 8;
  if ( v6 )
    v7 = -1LL;
  v8 = operator new(v7);
  if ( v8 )
  {
    v4 = v8 + 1;
    *v8 = v2;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)(v8 + 1),
      0x18uLL,
      (unsigned int)v2,
      (void *(*)(void *))KeyframeSequence::Keyframe::Keyframe);
  }
  result = this;
  *((_QWORD *)this + 13) = v4;
  return result;
}
