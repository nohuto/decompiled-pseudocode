/*
 * XREFs of ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C
 * Callers:
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C0012C84 (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C0012CB0 (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C0012CE0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002CD48 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C003A640 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003A694 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C003C314 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00593E0 (NtGdiCreateRectRgn.c)
 *     vRestoreRegion @ 0x1C007C950 (vRestoreRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00965F8 (GreCreatePolyPolygonRgnInternal.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C00EAC80 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00ECA9C (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  __int64 v2; // rdi

  if ( this && this != prgnDefault )
  {
    if ( *((__int16 *)this + 7) >= 0 )
    {
      Win32FreePool(this);
    }
    else
    {
      v2 = qword_1C018AF80;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v2, this);
    }
  }
}
