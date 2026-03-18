/*
 * XREFs of ?GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ @ 0x1801AE36C
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED278 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CLegacyMilBrushRealizer::GetOpacityFromRealizedBrush(CLegacyMilBrushRealizer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( !v2 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2) != 3 )
    return FLOAT_1_0;
  v3 = *((_QWORD *)this + 11);
  v4 = v3 + 236;
  if ( !v3 )
    v4 = 260LL;
  return *(float *)v4;
}
