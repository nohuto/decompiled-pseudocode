/*
 * XREFs of ?SetDepthSortedList@CVisual@@QEAAXPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801A8CD0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18013C71C (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 *     ?CreateDepthSortedList@CVisual@@AEAAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x1801A758C (-CreateDepthSortedList@CVisual@@AEAAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetDepthSortedList(__int64 a1, __int64 a2)
{
  char **v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)(a1 + 216);
  if ( a2 == `CVisual::SetDepthSortedList'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x40u;
  else
    CSparseStorage::SetData(v2, 26, 8u, &v3);
}
