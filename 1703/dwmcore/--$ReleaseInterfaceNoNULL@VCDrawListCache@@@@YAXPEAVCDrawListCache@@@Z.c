/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCDrawListCache@@@@YAXPEAVCDrawListCache@@@Z @ 0x18004F7FC
 * Callers:
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18004F708 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180160ED8 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NP.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall ReleaseInterfaceNoNULL<CDrawListCache>(CMILRefCountBase *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
    if ( (char *)v1 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(a1);
    else
      v1();
  }
}
