/*
 * XREFs of ?GetShadowPath@CProjectedShadow@@AEBA?AW4ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801B5C1C
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AreCasterAndReceiverParallel@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B3D34 (-AreCasterAndReceiverParallel@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B4450 (-CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetShadowPath(__int64 a1, struct CDrawingContext *a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  _DWORD v6[60]; // [rsp+30h] [rbp-108h] BYREF

  if ( CProjectedShadow::CanUseRectOptimization((CProjectedShadowCaster **)a1, a2)
    && *(float *)(*(_QWORD *)(a1 + 72) + 92LL) <= (float)(fminf(
                                                            *(float *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 56LL) + 132LL),
                                                            *(float *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 56LL) + 136LL))
                                                        * 0.5)
    && !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 1192LL) )
  {
    return 0LL;
  }
  if ( CProjectedShadow::CanUseRectOptimization((CProjectedShadowCaster **)a1, a2) )
    return 1LL;
  v5 = *(_QWORD *)(a1 + 88);
  v6[42] = 0;
  v6[59] = 0;
  (*(void (__fastcall **)(_QWORD, struct CDrawingContext *, __int64, _DWORD *))(**(_QWORD **)(v5 + 80) + 176LL))(
    *(_QWORD *)(v5 + 80),
    a2,
    (__int64)a2 + 3472,
    v6);
  if ( CProjectedShadow::AreCasterAndReceiverParallel((CProjectedShadow *)a1, a2) )
    return 2LL;
  result = 3LL;
  if ( v6[0] == 1 )
    return 2LL;
  return result;
}
