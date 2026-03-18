/*
 * XREFs of ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026030 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18008695C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097BAC (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015CD60 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18018B6E0 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801CAFC4 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x1801CBC04 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CRegionShape *__fastcall CRegionShape::`vector deleting destructor'(CRegionShape *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CRegionShape::`vftable';
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
