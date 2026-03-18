/*
 * XREFs of ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000AC80
 * Callers:
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000B460 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsOverlayRequired(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // bl
  CDxHandleBitmapRealization *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsOverlayRequired; // al

  v1 = *((_QWORD *)this + 52);
  v2 = 0;
  if ( v1 )
  {
    v4 = (CDxHandleBitmapRealization *)(v1 + 104);
    v5 = *(__int64 (**)(void))(*(_QWORD *)(v1 + 104) + 80LL);
    if ( (char *)v5 == (char *)CDxHandleBitmapRealization::IsOverlayRequired )
      IsOverlayRequired = CDxHandleBitmapRealization::IsOverlayRequired(v4);
    else
      IsOverlayRequired = v5();
    if ( IsOverlayRequired )
      return *(_DWORD *)(*((_QWORD *)this + 51) + 104LL) > 1u;
  }
  return v2;
}
