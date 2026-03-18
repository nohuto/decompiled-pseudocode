/*
 * XREFs of ??0KeyframeSequence@@QEAA@I@Z @ 0x1800A6B20
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
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
  *((_DWORD *)this + 16) = 18;
  *((_BYTE *)this + 68) = 0;
  *((_DWORD *)this + 26) = v2;
  *((_DWORD *)this + 32) = 1065353216;
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
      24LL,
      (unsigned int)v2,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))KeyframeSequence::Keyframe::Keyframe);
  }
  result = this;
  *((_QWORD *)this + 12) = v4;
  return result;
}
