/*
 * XREFs of ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801689F0
 * Callers:
 *     ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180168418 (-CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z.c)
 *     ?GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168800 (-GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180168908 (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x180168A4C (-ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z.c)
 *     ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x180168BB8 (-ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z.c)
 *     ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x180168D1C (-ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z.c)
 *     ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x180168F1C (-ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DInk::GetID2D1InkAndInkStyle(CD2DInk *this, struct ID2D1Ink **a2, struct ID2D1InkStyle **a3)
{
  __int64 v6; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 8LL))(*((_QWORD *)this + 13));
  v6 = *((_QWORD *)this + 14);
  *a2 = (struct ID2D1Ink *)*((_QWORD *)this + 13);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *a3 = (struct ID2D1InkStyle *)*((_QWORD *)this + 14);
  return 0LL;
}
