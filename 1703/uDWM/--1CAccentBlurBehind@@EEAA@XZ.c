/*
 * XREFs of ??1CAccentBlurBehind@@EEAA@XZ @ 0x18001ABF0
 * Callers:
 *     ??_ECAccentBlurBehind@@EEAAPEAXI@Z @ 0x18001A880 (--_ECAccentBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResource@CAccentBlurBehind@@AEAAXXZ @ 0x18001A8C0 (-ReleaseResource@CAccentBlurBehind@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAccentBlurBehind::~CAccentBlurBehind(CAccentBlurBehind *this)
{
  *(_QWORD *)this = &CAccentBlurBehind::`vftable';
  CAccentBlurBehind::ReleaseResource(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 288);
  CRenderDataVisual::~CRenderDataVisual(this);
}
