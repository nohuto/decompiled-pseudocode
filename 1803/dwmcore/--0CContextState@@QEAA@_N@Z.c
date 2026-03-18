/*
 * XREFs of ??0CContextState@@QEAA@_N@Z @ 0x1800C36FC
 * Callers:
 *     ??0CDrawingContext@@AEAA@PEAVCComposition@@@Z @ 0x18006E7D0 (--0CDrawingContext@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800C37B4 (--0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

CContextState *__fastcall CContextState::CContextState(CContextState *this)
{
  CContextState *result; // rax

  *((_DWORD *)this + 16) = 0;
  CAliasedClip::CAliasedClip((CContextState *)((char *)this + 72), 0LL, D2D1_ANTIALIAS_MODE_ALIASED);
  *((_WORD *)this + 80) = 32085;
  result = this;
  *((_WORD *)this + 80) = 32085;
  *((_OWORD *)this + 6) = _xmm;
  *((_OWORD *)this + 7) = _xmm;
  *((_OWORD *)this + 8) = _xmm;
  *((_OWORD *)this + 9) = _xmm;
  *((_DWORD *)this + 23) &= ~1u;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 200) = 1;
  *((_DWORD *)this + 51) = 1068827891;
  *((_DWORD *)this + 45) = 1;
  *((_DWORD *)this + 46) = 1;
  *((_DWORD *)this + 69) = 0;
  return result;
}
