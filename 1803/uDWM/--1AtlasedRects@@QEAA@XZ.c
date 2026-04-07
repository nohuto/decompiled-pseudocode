/*
 * XREFs of ??1AtlasedRects@@QEAA@XZ @ 0x18006C5A0
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020750 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall AtlasedRects::~AtlasedRects(AtlasedRects *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 32);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
