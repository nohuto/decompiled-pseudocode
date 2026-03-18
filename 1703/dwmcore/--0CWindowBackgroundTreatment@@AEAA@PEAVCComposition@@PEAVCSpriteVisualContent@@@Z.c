/*
 * XREFs of ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x180010344
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180013148 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800BBE48 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::CWindowBackgroundTreatment(
        CWindowBackgroundTreatment *this,
        struct CComposition *a2,
        struct CSpriteVisualContent *a3)
{
  CPtrArrayBase *v4; // rcx
  unsigned __int64 v5; // r8

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable';
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 8) = 0LL;
  *(_OWORD *)((char *)this + 72) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 11) = qword_18023DC80;
  *((_OWORD *)this + 6) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 14) = qword_18023DC80;
  *((_WORD *)this + 92) = 32085;
  *(_OWORD *)((char *)this + 120) = _xmm;
  *(_OWORD *)((char *)this + 136) = _xmm;
  *(_OWORD *)((char *)this + 152) = _xmm;
  *(_OWORD *)((char *)this + 168) = _xmm;
  *((_DWORD *)this + 47) = 0;
  *((_WORD *)this + 128) = 32085;
  *((_OWORD *)this + 12) = _xmm;
  *((_OWORD *)this + 13) = _xmm;
  *((_OWORD *)this + 14) = _xmm;
  *((_OWORD *)this + 15) = _xmm;
  *(_OWORD *)((char *)this + 260) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_DWORD *)this + 69) = 0x1000000;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  v4 = (CPtrArrayBase *)(*((_QWORD *)this + 7) + 24LL);
  if ( (*(_QWORD *)v4 & 2) != 0 )
    v5 = *(_QWORD *)(*(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v5 = *(_QWORD *)v4 & 1LL;
  CPtrArrayBase::InsertAt(v4, (unsigned __int64)this, v5);
  return this;
}
