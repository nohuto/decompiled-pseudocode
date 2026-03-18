/*
 * XREFs of ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD7C0
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x180049D78 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC504 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_ffff @ 0x18016637C (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::FillRectangles(
        CD2DContext *this,
        struct ID2DContextOwner *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rdi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbx

  v8 = a4;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a8, &a7, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_ffff(
      v12,
      (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
      v13,
      v14,
      COERCE_UNSIGNED_INT((float)*(int *)(a6 + 8)),
      COERCE_UNSIGNED_INT((float)*(int *)(a6 + 12)));
  if ( (_DWORD)v8 )
  {
    v15 = v8;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 22) + 136LL))(
        *((_QWORD *)this + 22),
        a3,
        a5);
      a3 += 16LL;
      --v15;
    }
    while ( v15 );
  }
  return 0LL;
}
