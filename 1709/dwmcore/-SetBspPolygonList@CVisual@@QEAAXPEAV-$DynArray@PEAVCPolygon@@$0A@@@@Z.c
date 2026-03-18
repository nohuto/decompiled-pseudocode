/*
 * XREFs of ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180177F3C
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18011A694 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x180176C14 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetBspPolygonList(__int64 a1, __int64 a2)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == `CVisual::SetBspPolygonList'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) &= ~0x1000000u;
  else
    CSparseStorage::SetData((CSparseStorage *)(a1 + 208), 8u, 8u, &v2);
}
