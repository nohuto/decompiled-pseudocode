/*
 * XREFs of ?GetDepthSortedList@CVisual@@QEBAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x18013CB24
 * Callers:
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18013C71C (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 *     ?CreateDepthSortedList@CVisual@@AEAAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@XZ @ 0x1801A758C (-CreateDepthSortedList@CVisual@@AEAAPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetDepthSortedList(__int64 a1)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *(_QWORD *)(a1 + 216);
  if ( (*(_BYTE *)(v1 + 4) & 0x40) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x1A000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(_QWORD *)(i + 4);
}
