/*
 * XREFs of ??1Mesh2D@@QEAA@XZ @ 0x180086E5C
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18008780C (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x18008825C (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall Mesh2D::~Mesh2D(Mesh2D *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 96);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 32);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
