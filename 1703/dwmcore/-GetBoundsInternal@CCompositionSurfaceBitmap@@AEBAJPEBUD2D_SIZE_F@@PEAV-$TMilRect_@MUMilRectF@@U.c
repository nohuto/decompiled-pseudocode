/*
 * XREFs of ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A7F0
 * Callers:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A9D0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000B200 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180164400 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8B0 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBoundsInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  CDxHandleBitmapRealization *v5; // rcx
  __int64 (__fastcall *v6)(CDxHandleBitmapRealization *, CMILMatrix *); // rax
  char Transform; // al
  _BYTE v9[64]; // [rsp+20h] [rbp-78h] BYREF
  int v10; // [rsp+60h] [rbp-38h]
  __int128 v11; // [rsp+70h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 472) )
  {
    if ( !(unsigned __int8)CCompositionSurfaceBitmap::BoundsFromLayoutSize(a1, a2, a3) )
    {
      v10 = 0;
      v5 = (CDxHandleBitmapRealization *)(*(_QWORD *)(v4 + 472) + 104LL);
      v6 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, CMILMatrix *))(*(_QWORD *)v5 + 32LL);
      if ( v6 == CDxHandleBitmapRealization::GetTransform )
        Transform = CDxHandleBitmapRealization::GetTransform(v5, (CMILMatrix *)v9);
      else
        Transform = ((__int64 (__fastcall *)(CDxHandleBitmapRealization *, _BYTE *, __int128 *))v6)(v5, v9, &v11);
      if ( Transform )
        CMILMatrix::Transform2DBoundsHelper<0>(v9, &v11, a3);
      else
        *(_OWORD *)a3 = v11;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  return 0LL;
}
