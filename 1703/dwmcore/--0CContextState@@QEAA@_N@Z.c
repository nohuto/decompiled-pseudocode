/*
 * XREFs of ??0CContextState@@QEAA@_N@Z @ 0x1800C23E4
 * Callers:
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x1800A9C48 (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ??0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800C2490 (--0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

CContextState *__fastcall CContextState::CContextState(CContextState *this)
{
  CContextState *result; // rax

  *((_DWORD *)this + 16) = 0;
  CAliasedClip::CAliasedClip((CContextState *)((char *)this + 72), 0LL, D2D1_ANTIALIAS_MODE_ALIASED);
  *((_WORD *)this + 80) = 32085;
  *((_OWORD *)this + 6) = _xmm;
  *((_OWORD *)this + 7) = _xmm;
  *((_OWORD *)this + 8) = _xmm;
  *((_OWORD *)this + 9) = _xmm;
  CMILMatrix::operator=((__int64)this + 96);
  *((_DWORD *)this + 23) &= ~1u;
  result = this;
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
