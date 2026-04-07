/*
 * XREFs of ??1CAccentBlurBehind@@EEAA@XZ @ 0x18007FF80
 * Callers:
 *     ??_ECAccentBlurBehind@@EEAAPEAXI@Z @ 0x18007FFC0 (--_ECAccentBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseResource@CAccentBlurBehind@@AEAAXXZ @ 0x180080824 (-ReleaseResource@CAccentBlurBehind@@AEAAXXZ.c)
 */

void __fastcall CAccentBlurBehind::~CAccentBlurBehind(CAccentBlurBehind *this)
{
  *(_QWORD *)this = &CAccentBlurBehind::`vftable';
  CAccentBlurBehind::ReleaseResource(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 288);
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
}
