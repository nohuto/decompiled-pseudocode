/*
 * XREFs of ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18004C3B0
 * Callers:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18000B568 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18004CAD8 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180165E28 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C4BC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004D094 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseHeatMap(CPrimitiveGroup *this)
{
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 544);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 552);
}
