/*
 * XREFs of ??0?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@QEAA@_KAEBV?$allocator@UDepthGraphNode@@@1@@Z @ 0x18021FD80
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18021FF24 (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 *__fastcall std::vector<DepthGraphNode>::vector<DepthGraphNode>(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  v2 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x492492492492492LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v4 = std::_Allocate<std::_Default_allocate_traits<1>>(a2, 0x38uLL);
    *a1 = v4;
    a1[1] = v4;
    a1[2] = v4 + 56 * v2;
    if ( v2 )
    {
      v5 = v4 + 40;
      v4 += 56 * v2;
      do
      {
        *(_QWORD *)(v5 - 16) = 0LL;
        *(_QWORD *)(v5 - 8) = 0LL;
        *(_QWORD *)v5 = 0LL;
        *(_DWORD *)(v5 + 8) = 0;
        *(_BYTE *)(v5 - 24) = 1;
        v5 += 56LL;
        --v2;
      }
      while ( v2 );
    }
    a1[1] = v4;
  }
  return a1;
}
