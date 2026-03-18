/*
 * XREFs of ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801A8C58
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18013C6AC (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801A6FF4 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetBspPolygonList(__int64 a1, __int64 a2)
{
  char **v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)(a1 + 216);
  if ( a2 == `CVisual::SetBspPolygonList'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x1000000u;
  else
    CSparseStorage::SetData(v2, 8, 8u, &v3);
}
