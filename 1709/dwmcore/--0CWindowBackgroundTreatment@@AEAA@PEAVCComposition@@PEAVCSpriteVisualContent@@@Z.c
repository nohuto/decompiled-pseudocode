/*
 * XREFs of ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCSpriteVisualContent@@@Z @ 0x1800B1C34
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180051D88 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B219C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  *((_QWORD *)this + 11) = qword_18026E200;
  *((_OWORD *)this + 6) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 14) = qword_18026E200;
  *(_OWORD *)((char *)this + 120) = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 17) = qword_18026E200;
  *((_WORD *)this + 104) = 32085;
  *((_OWORD *)this + 9) = _xmm;
  *((_OWORD *)this + 10) = _xmm;
  *((_OWORD *)this + 11) = _xmm;
  *((_OWORD *)this + 12) = _xmm;
  *((_DWORD *)this + 53) = 0;
  *((_WORD *)this + 140) = 32085;
  *(_OWORD *)((char *)this + 216) = _xmm;
  *(_OWORD *)((char *)this + 232) = _xmm;
  *(_OWORD *)((char *)this + 248) = _xmm;
  *(_OWORD *)((char *)this + 264) = _xmm;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  v4 = (CPtrArrayBase *)(*((_QWORD *)this + 7) + 24LL);
  *((_DWORD *)this + 71) = 0x10000;
  if ( (*(_QWORD *)v4 & 2) != 0 )
    v5 = *(_QWORD *)(*(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v5 = *(_QWORD *)v4 & 1LL;
  CPtrArrayBase::InsertAt(v4, (unsigned __int64)this, v5);
  return this;
}
