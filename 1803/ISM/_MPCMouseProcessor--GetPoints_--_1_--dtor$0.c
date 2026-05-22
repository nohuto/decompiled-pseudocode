/*
 * XREFs of _MPCMouseProcessor::GetPoints_::_1_::dtor$0 @ 0x1800E546A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180040B4C (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall MPCMouseProcessor::GetPoints_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<PointData3D>::~vector<PointData3D>(*(unsigned __int64 **)(a2 + 280));
  }
}
