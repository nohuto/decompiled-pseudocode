/*
 * XREFs of ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01C2B24
 * Callers:
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0069E5C (PhysicalToLogicalInPlaceRgn.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C010B2D8 (LogicalToPhysicalInPlaceRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TransformRgn(HRGN a1, struct tagXFORM *a2)
{
  __int64 Region; // rbx
  unsigned int RegionData; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8

  Region = 0LL;
  RegionData = GreGetRegionData(a1, 0LL, 0LL);
  v6 = RegionData;
  if ( RegionData )
  {
    v7 = Win32AllocPool((int)RegionData, 1919775573LL);
    v8 = v7;
    if ( v7 )
    {
      if ( (unsigned int)GreGetRegionData(a1, v6, v7) )
        Region = GreExtCreateRegion(a2, v6, v8);
      Win32FreePool(v8, v9, v10);
    }
  }
  return Region;
}
