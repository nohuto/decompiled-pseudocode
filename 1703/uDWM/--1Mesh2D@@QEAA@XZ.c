/*
 * XREFs of ??1Mesh2D@@QEAA@XZ @ 0x18008C680
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18008CA68 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18008D3DC (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall Mesh2D::~Mesh2D(Mesh2D *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 96);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 32);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
