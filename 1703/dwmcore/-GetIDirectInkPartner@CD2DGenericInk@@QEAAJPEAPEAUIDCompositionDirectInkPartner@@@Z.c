/*
 * XREFs of ?GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x18017071C
 * Callers:
 *     ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x18012E2C4 (-ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESU.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18012E434 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@.c)
 *     ?ProcessSegmentCountUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTCOUNTUPDATE@@@Z @ 0x18012E704 (-ProcessSegmentCountUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTCO.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180170108 (-CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180170540 (-GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetDirectInkPartner@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x180170618 (-GetDirectInkPartner@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 *     ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18017073C (-GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DGenericInk::GetIDirectInkPartner(
        CD2DGenericInk *this,
        struct IDCompositionDirectInkPartner **a2)
{
  struct IDCompositionDirectInkPartner *v2; // rcx

  v2 = (struct IDCompositionDirectInkPartner *)*((_QWORD *)this + 13);
  *a2 = v2;
  (*(void (__fastcall **)(struct IDCompositionDirectInkPartner *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
